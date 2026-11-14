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

// Function: sub_001EE720
// Address: 0x1ee720 - 0x1eef20
void sub_001EE720_0x1ee720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE720_0x1ee720");
#endif

    switch (ctx->pc) {
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee9dcu: goto label_1ee9dc;
        case 0x1ee9f4u: goto label_1ee9f4;
        case 0x1eea08u: goto label_1eea08;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eeec0u: goto label_1eeec0;
        case 0x1eeed0u: goto label_1eeed0;
        case 0x1eeef0u: goto label_1eeef0;
        default: break;
    }

    ctx->pc = 0x1ee720u;

    // 0x1ee720: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ee724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ee724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ee728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ee728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ee72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee738: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1ee738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1ee73c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1ee73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1ee740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ee740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee744: 0x0  nop
    ctx->pc = 0x1ee744u;
    // NOP
    // 0x1ee748: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1ee748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1ee74c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ee750: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ee750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee754: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee758: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ee75c: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EE75Cu;
    SET_GPR_U32(ctx, 31, 0x1EE764u);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EE75Cu, 0x1EE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE764u;
label_1ee764:
    // 0x1ee764: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee768: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1EE768u;
    {
        const bool branch_taken_0x1ee768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee768) {
            ctx->pc = 0x1EEEA4u;
            goto label_1eeea4;
        }
    }
    ctx->pc = 0x1EE770u;
label_1ee770:
    // 0x1ee770: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ee770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee774: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ee774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee778: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee77c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee784: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee78c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1ee78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1ee790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ee790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee794: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee798: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee79c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee7a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee7a8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x1ee7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x1ee7ac: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee7b0: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1ee7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee7b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee7b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee7bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee7c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee7c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee7c8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1ee7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1ee7cc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee7d0: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1ee7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee7d4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee7d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee7dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee7e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee7e8: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x1ee7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x1ee7ec: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee7f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee7f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee7f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee800: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee804: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee808: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee80c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee810: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee818: 0xc7818268  lwc1        $f1, -0x7D98($gp)
    ctx->pc = 0x1ee818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee81c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee820: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee824: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ee824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ee828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee82c: 0x0  nop
    ctx->pc = 0x1ee82cu;
    // NOP
    // 0x1ee830: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ee830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee834: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE834u;
    {
        const bool branch_taken_0x1ee834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee834) {
            ctx->pc = 0x1EE84Cu;
            goto label_1ee84c;
        }
    }
    ctx->pc = 0x1EE83Cu;
    // 0x1ee83c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ee840: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1ee840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1ee844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE844u;
    {
        const bool branch_taken_0x1ee844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee844) {
            ctx->pc = 0x1EE860u;
            goto label_1ee860;
        }
    }
    ctx->pc = 0x1EE84Cu;
label_1ee84c:
    // 0x1ee84c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ee84cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ee850: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ee850u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ee854: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1ee854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1ee858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee85c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1ee85cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1ee860:
    // 0x1ee860: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EE860u;
    SET_GPR_U32(ctx, 31, 0x1EE868u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EE860u, 0x1EE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE868u;
label_1ee868:
    // 0x1ee868: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x1ee868u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ee86c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ee86cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ee870: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE870u;
    {
        const bool branch_taken_0x1ee870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ee870) {
            ctx->pc = 0x1EE88Cu;
            goto label_1ee88c;
        }
    }
    ctx->pc = 0x1EE878u;
    // 0x1ee878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee87c: 0x0  nop
    ctx->pc = 0x1ee87cu;
    // NOP
    // 0x1ee880: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE884u;
    {
        const bool branch_taken_0x1ee884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee884) {
            ctx->pc = 0x1EE8A8u;
            goto label_1ee8a8;
        }
    }
    ctx->pc = 0x1EE88Cu;
label_1ee88c:
    // 0x1ee88c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ee88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ee890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ee894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ee898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee89c: 0x0  nop
    ctx->pc = 0x1ee89cu;
    // NOP
    // 0x1ee8a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee8a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee8a8:
    // 0x1ee8a8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee8ac: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee8b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee8b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee8bc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee8c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee8c4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee8c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1ee8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8d0: 0x0  nop
    ctx->pc = 0x1ee8d0u;
    // NOP
    // 0x1ee8d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1ee8d8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ee8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee8dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ee8e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE8E0u;
    {
        const bool branch_taken_0x1ee8e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ee8e0) {
            ctx->pc = 0x1EE8FCu;
            goto label_1ee8fc;
        }
    }
    ctx->pc = 0x1EE8E8u;
    // 0x1ee8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8ec: 0x0  nop
    ctx->pc = 0x1ee8ecu;
    // NOP
    // 0x1ee8f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee8f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE8F4u;
    {
        const bool branch_taken_0x1ee8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8f4) {
            ctx->pc = 0x1EE918u;
            goto label_1ee918;
        }
    }
    ctx->pc = 0x1EE8FCu;
label_1ee8fc:
    // 0x1ee8fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ee8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ee900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ee904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ee908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee90c: 0x0  nop
    ctx->pc = 0x1ee90cu;
    // NOP
    // 0x1ee910: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee914: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee918:
    // 0x1ee918: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ee918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee91c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee920: 0x0  nop
    ctx->pc = 0x1ee920u;
    // NOP
    // 0x1ee924: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee924u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee928: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee92c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee930: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1ee934: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee938: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee93c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee940: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee948: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1ee948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee94c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1ee94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee950: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee954: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x1ee954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x1ee958: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee95c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ee95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee960: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1ee960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee964: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee968: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee96c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee974: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x1ee974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x1ee978: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee97c: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x1ee97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee980: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee984: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee988: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1ee988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee98c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ee98cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ee990: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ee990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ee994: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1ee994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee998: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee9a0: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1ee9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1ee9a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee9a8: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1ee9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee9ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee9b4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1ee9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee9b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ee9b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ee9bc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ee9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ee9c0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1ee9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ee9c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ee9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee9cc: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1ee9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1ee9d0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ee9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee9d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EE9D4u;
    SET_GPR_U32(ctx, 31, 0x1EE9DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EE9D4u, 0x1EE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9DCu;
label_1ee9dc:
    // 0x1ee9dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ee9dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ee9e4: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1ee9e8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ee9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ee9ec: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EE9ECu;
    SET_GPR_U32(ctx, 31, 0x1EE9F4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EE9ECu, 0x1EE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9F4u;
label_1ee9f4:
    // 0x1ee9f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee9fc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1eea00: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1EEA00u;
    SET_GPR_U32(ctx, 31, 0x1EEA08u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1EEA00u, 0x1EEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEA08u;
label_1eea08:
    // 0x1eea08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea10: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1eea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1eea14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1eea18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1eea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1eea1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea24: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1eea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1eea28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1eea2c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1eea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1eea30: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eea30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eea34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eea38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eea3c: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1eea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eea40: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1eea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eea44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eea48: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1eea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1eea4c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eea50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eea54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eea54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eea58: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eea5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1eea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eea60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eea64: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eea68: 0x26020012  addiu       $v0, $s0, 0x12
    ctx->pc = 0x1eea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1eea6c: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x1eea70: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1eea70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eea74: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
    ctx->pc = 0x1EEA74u;
    {
        const bool branch_taken_0x1eea74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eea74) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EEA7Cu;
    // 0x1eea7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1eea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1eea80: 0x24638860  addiu       $v1, $v1, -0x77A0
    ctx->pc = 0x1eea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936672));
    // 0x1eea84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eea84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eea88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eea8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eea90: 0x400008  jr          $v0
    ctx->pc = 0x1EEA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EEA98u: goto label_1eea98;
            case 0x1EEB40u: goto label_1eeb40;
            case 0x1EEBA8u: goto label_1eeba8;
            case 0x1EEC50u: goto label_1eec50;
            case 0x1EECBCu: goto label_1eecbc;
            case 0x1EED60u: goto label_1eed60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEA90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EEA98u;
label_1eea98:
    // 0x1eea98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eea9c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eeaa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeaa4: 0x0  nop
    ctx->pc = 0x1eeaa4u;
    // NOP
    // 0x1eeaa8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eeaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eeaac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1eeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1eeab0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eeab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eeab4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eeab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeab8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eeac0: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1eeac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eeac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeac8: 0x0  nop
    ctx->pc = 0x1eeac8u;
    // NOP
    // 0x1eeacc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eeaccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eead0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eead0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eead4: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1eead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1eead8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeadc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eeae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeae4: 0x0  nop
    ctx->pc = 0x1eeae4u;
    // NOP
    // 0x1eeae8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eeae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eeaec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eeaf0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eeaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eeaf4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eeaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeaf8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeafc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eeb00: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eeb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eeb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb08: 0x0  nop
    ctx->pc = 0x1eeb08u;
    // NOP
    // 0x1eeb0c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eeb0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eeb10: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eeb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eeb14: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eeb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eeb18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb1c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1eeb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eeb20: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeb24: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eeb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eeb28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eeb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eeb2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eeb34: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1eeb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1eeb38: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1EEB38u;
    {
        const bool branch_taken_0x1eeb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb38) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EEB40u;
label_1eeb40:
    // 0x1eeb40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb44: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eeb48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb4c: 0x0  nop
    ctx->pc = 0x1eeb4cu;
    // NOP
    // 0x1eeb50: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eeb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eeb54: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1eeb58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eeb58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eeb5c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eeb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeb60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eeb68: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eeb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eeb6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb70: 0x0  nop
    ctx->pc = 0x1eeb70u;
    // NOP
    // 0x1eeb74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eeb74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eeb78: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eeb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eeb7c: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eeb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eeb80: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb84: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1eeb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eeb88: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeb8c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eeb90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eeb94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eeb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eeb9c: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1eeb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1eeba0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1EEBA0u;
    {
        const bool branch_taken_0x1eeba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeba0) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EEBA8u;
label_1eeba8:
    // 0x1eeba8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eebac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eebb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eebb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebb4: 0x0  nop
    ctx->pc = 0x1eebb4u;
    // NOP
    // 0x1eebb8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eebb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eebbc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1eebc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eebc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eebc4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eebc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eebcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eebd0: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1eebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eebd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebd8: 0x0  nop
    ctx->pc = 0x1eebd8u;
    // NOP
    // 0x1eebdc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eebdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eebe0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eebe4: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1eebe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1eebe8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eebec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eebf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eebf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebf4: 0x0  nop
    ctx->pc = 0x1eebf4u;
    // NOP
    // 0x1eebf8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eebf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eebfc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1eebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1eec00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eec04: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eec08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eec10: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eec14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec18: 0x0  nop
    ctx->pc = 0x1eec18u;
    // NOP
    // 0x1eec1c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eec1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eec20: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1eec20u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eec24: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eec28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec2c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eec30: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eec30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eec34: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eec34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eec38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eec3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eec44: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1eec44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1eec48: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1EEC48u;
    {
        const bool branch_taken_0x1eec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec48) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EEC50u;
label_1eec50:
    // 0x1eec50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec54: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eec58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec5c: 0x0  nop
    ctx->pc = 0x1eec5cu;
    // NOP
    // 0x1eec60: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eec60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eec64: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1eec68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eec68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eec6c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eec70: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eec74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eec78: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eec7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec80: 0x0  nop
    ctx->pc = 0x1eec80u;
    // NOP
    // 0x1eec84: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eec84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eec88: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1eec88u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eec8c: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eec8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eec90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eec94: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eec98: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1eec9c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeca0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eeca4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eeca8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eeca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eecac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eecb0: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1eecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x1eecb4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EECB4u;
    {
        const bool branch_taken_0x1eecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eecb4) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EECBCu;
label_1eecbc:
    // 0x1eecbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eecc0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eecc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eecc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eecc8: 0x0  nop
    ctx->pc = 0x1eecc8u;
    // NOP
    // 0x1eeccc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eecccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eecd0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1eecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1eecd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eecd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eecd8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eecdc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eece0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eece4: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1eece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eece8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eece8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eecec: 0x0  nop
    ctx->pc = 0x1eececu;
    // NOP
    // 0x1eecf0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eecf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eecf4: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1eecf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eecf8: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1eecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1eecfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eed00: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eed04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eed08: 0x0  nop
    ctx->pc = 0x1eed08u;
    // NOP
    // 0x1eed0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1eed0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1eed10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eed14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eed14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eed18: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eed1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eed20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eed24: 0xc44100f8  lwc1        $f1, 0xF8($v0)
    ctx->pc = 0x1eed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eed28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eed28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eed2c: 0x0  nop
    ctx->pc = 0x1eed2cu;
    // NOP
    // 0x1eed30: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eed30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eed34: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eed34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eed38: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x1eed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x1eed3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eed40: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1eed44: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1eed48: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eed4c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eed50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eed54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eed58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eed5c: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1eed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
label_1eed60:
    // 0x1eed60: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eed64: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eed68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eed68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eed6c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eed70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eed74: 0xc7818268  lwc1        $f1, -0x7D98($gp)
    ctx->pc = 0x1eed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eed78: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1eed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eed7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1eed7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1eed80: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1eed80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1eed84: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EED84u;
    SET_GPR_U32(ctx, 31, 0x1EED8Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EED84u, 0x1EED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED8Cu;
label_1eed8c:
    // 0x1eed8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EED8Cu;
    {
        const bool branch_taken_0x1eed8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eed8c) {
            ctx->pc = 0x1EEDA8u;
            goto label_1eeda8;
        }
    }
    ctx->pc = 0x1EED94u;
    // 0x1eed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eed98: 0x0  nop
    ctx->pc = 0x1eed98u;
    // NOP
    // 0x1eed9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eed9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eeda0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEDA0u;
    {
        const bool branch_taken_0x1eeda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeda0) {
            ctx->pc = 0x1EEDC4u;
            goto label_1eedc4;
        }
    }
    ctx->pc = 0x1EEDA8u;
label_1eeda8:
    // 0x1eeda8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eedac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eedacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eedb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eedb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eedb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eedb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eedb8: 0x0  nop
    ctx->pc = 0x1eedb8u;
    // NOP
    // 0x1eedbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eedbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eedc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eedc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eedc4:
    // 0x1eedc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1eedc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eedc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eedcc: 0x0  nop
    ctx->pc = 0x1eedccu;
    // NOP
    // 0x1eedd0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1eedd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eedd4: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1eedd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eedd8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eeddc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eede0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eede4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eede8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eedec: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x1eedecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eedf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eedf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eedf4: 0x0  nop
    ctx->pc = 0x1eedf4u;
    // NOP
    // 0x1eedf8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eedf8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eedfc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eedfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eee00: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1eee00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1eee04: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eee04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eee08: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eee0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eee10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eee14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eee18: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1eee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eee1c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1eee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1eee20: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EEE20u;
    SET_GPR_U32(ctx, 31, 0x1EEE28u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EEE20u, 0x1EEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE28u;
label_1eee28:
    // 0x1eee28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEE28u;
    {
        const bool branch_taken_0x1eee28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eee28) {
            ctx->pc = 0x1EEE44u;
            goto label_1eee44;
        }
    }
    ctx->pc = 0x1EEE30u;
    // 0x1eee30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eee30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee34: 0x0  nop
    ctx->pc = 0x1eee34u;
    // NOP
    // 0x1eee38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eee38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eee3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EEE3Cu;
    {
        const bool branch_taken_0x1eee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee3c) {
            ctx->pc = 0x1EEE60u;
            goto label_1eee60;
        }
    }
    ctx->pc = 0x1EEE44u;
label_1eee44:
    // 0x1eee44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eee44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eee48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eee4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eee4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eee50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eee50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee54: 0x0  nop
    ctx->pc = 0x1eee54u;
    // NOP
    // 0x1eee58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eee58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eee5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eee5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eee60:
    // 0x1eee60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1eee64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee68: 0x0  nop
    ctx->pc = 0x1eee68u;
    // NOP
    // 0x1eee6c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1eee6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eee70: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1eee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eee74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1eee78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eee7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eee80: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1eee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eee84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eee88: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1eee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eee8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eee8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee90: 0x0  nop
    ctx->pc = 0x1eee90u;
    // NOP
    // 0x1eee94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eee94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eee98: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eee98u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eee9c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x1eee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x1eeea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eeea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eeea4:
    // 0x1eeea4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1eeea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1eeea8: 0x1440fe31  bnez        $v0, . + 4 + (-0x1CF << 2)
    ctx->pc = 0x1EEEA8u;
    {
        const bool branch_taken_0x1eeea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeea8) {
            ctx->pc = 0x1EE770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee770;
        }
    }
    ctx->pc = 0x1EEEB0u;
    // 0x1eeeb0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1eeeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eeeb4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eeeb8: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EEEB8u;
    SET_GPR_U32(ctx, 31, 0x1EEEC0u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EEEB8u, 0x1EEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEC0u;
label_1eeec0:
    // 0x1eeec0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eeec4: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1eeec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1eeec8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EEEC8u;
    SET_GPR_U32(ctx, 31, 0x1EEED0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EEEC8u, 0x1EEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEED0u;
label_1eeed0:
    // 0x1eeed0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1eeed4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1eeed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eeed8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1eeed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1eeedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eeedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eeee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeee4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1eeee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eeee8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1EEEE8u;
    SET_GPR_U32(ctx, 31, 0x1EEEF0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1EEEE8u, 0x1EEEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEF0u;
label_1eeef0:
    // 0x1eeef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eeef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeef4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eeef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eeef8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eeef8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eeefc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eeefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eef00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eef00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eef04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eef04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eef08: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1eef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1eef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEF14u;
    // 0x1eef14: 0x0  nop
    ctx->pc = 0x1eef14u;
    // NOP
    // 0x1eef18: 0x0  nop
    ctx->pc = 0x1eef18u;
    // NOP
    // 0x1eef1c: 0x0  nop
    ctx->pc = 0x1eef1cu;
    // NOP
    ctx->pc = 0x1eef20u;
}
