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

// Function: sub_002CCE10
// Address: 0x2cce10 - 0x2ccfa0
void sub_002CCE10_0x2cce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCE10_0x2cce10");
#endif

    switch (ctx->pc) {
        case 0x2cce50u: goto label_2cce50;
        case 0x2cce74u: goto label_2cce74;
        case 0x2ccea4u: goto label_2ccea4;
        case 0x2cced8u: goto label_2cced8;
        case 0x2ccee8u: goto label_2ccee8;
        case 0x2ccef4u: goto label_2ccef4;
        case 0x2ccf0cu: goto label_2ccf0c;
        case 0x2ccf20u: goto label_2ccf20;
        case 0x2ccf2cu: goto label_2ccf2c;
        case 0x2ccf3cu: goto label_2ccf3c;
        case 0x2ccf5cu: goto label_2ccf5c;
        default: break;
    }

    ctx->pc = 0x2cce10u;

    // 0x2cce10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cce14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cce18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cce1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cce20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cce24: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2cce24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2cce28: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2cce28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2cce2c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2cce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2cce30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2cce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cce34: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCE34u;
    {
        const bool branch_taken_0x2cce34 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cce34) {
            ctx->pc = 0x2CCE48u;
            goto label_2cce48;
        }
    }
    ctx->pc = 0x2CCE3Cu;
    // 0x2cce3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cce3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce40: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2CCE40u;
    {
        const bool branch_taken_0x2cce40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce40) {
            ctx->pc = 0x2CCF84u;
            goto label_2ccf84;
        }
    }
    ctx->pc = 0x2CCE48u;
label_2cce48:
    // 0x2cce48: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2CCE48u;
    SET_GPR_U32(ctx, 31, 0x2CCE50u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2CCE48u, 0x2CCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE50u;
label_2cce50:
    // 0x2cce50: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cce54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2cce54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cce58: 0x8810  mfhi        $s1
    ctx->pc = 0x2cce58u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x2cce5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cce5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce60: 0x0  nop
    ctx->pc = 0x2cce60u;
    // NOP
    // 0x2cce64: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2cce64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2cce68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cce68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce6c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2CCE6Cu;
    {
        const bool branch_taken_0x2cce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce6c) {
            ctx->pc = 0x2CCF6Cu;
            goto label_2ccf6c;
        }
    }
    ctx->pc = 0x2CCE74u;
label_2cce74:
    // 0x2cce74: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2cce74u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce78: 0x0  nop
    ctx->pc = 0x2cce78u;
    // NOP
    // 0x2cce7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2cce7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cce80: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2cce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cce84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cce88: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x2CCE88u;
    {
        const bool branch_taken_0x2cce88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cce88) {
            ctx->pc = 0x2CCF48u;
            goto label_2ccf48;
        }
    }
    ctx->pc = 0x2CCE90u;
    // 0x2cce90: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2cce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cce94: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cce94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2cce98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce9c: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CCE9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCEA4u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CCE9Cu, 0x2CCEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEA4u;
label_2ccea4:
    // 0x2ccea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ccea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccea8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2ccea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cceac: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2cceacu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cceb0: 0x0  nop
    ctx->pc = 0x2cceb0u;
    // NOP
    // 0x2cceb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cceb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cceb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cceb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ccebc: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2CCEBCu;
    {
        const bool branch_taken_0x2ccebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ccebc) {
            ctx->pc = 0x2CCF48u;
            goto label_2ccf48;
        }
    }
    ctx->pc = 0x2CCEC4u;
    // 0x2ccec4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccec8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ccec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ccecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cceccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cced0: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CCED0u;
    SET_GPR_U32(ctx, 31, 0x2CCED8u);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CCED0u, 0x2CCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCED8u;
label_2cced8:
    // 0x2cced8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2cced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccedc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ccedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccee0: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x2CCEE0u;
    SET_GPR_U32(ctx, 31, 0x2CCEE8u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x2CCEE0u, 0x2CCEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEE8u;
label_2ccee8:
    // 0x2ccee8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2ccee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cceec: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCEECu;
    SET_GPR_U32(ctx, 31, 0x2CCEF4u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCEECu, 0x2CCEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEF4u;
label_2ccef4:
    // 0x2ccef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ccef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccef8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccefc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ccefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ccf00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ccf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf04: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CCF04u;
    SET_GPR_U32(ctx, 31, 0x2CCF0Cu);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CCF04u, 0x2CCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF0Cu;
label_2ccf0c:
    // 0x2ccf0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccf10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf14: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x2ccf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ccf18: 0xc097078  jal         func_25C1E0
    ctx->pc = 0x2CCF18u;
    SET_GPR_U32(ctx, 31, 0x2CCF20u);
    ctx->pc = 0x25C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1E0u, 0x2CCF18u, 0x2CCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF20u;
label_2ccf20:
    // 0x2ccf20: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2ccf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ccf24: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CCF24u;
    SET_GPR_U32(ctx, 31, 0x2CCF2Cu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CCF24u, 0x2CCF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF2Cu;
label_2ccf2c:
    // 0x2ccf2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ccf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf30: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2ccf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ccf34: 0xc0970a0  jal         func_25C280
    ctx->pc = 0x2CCF34u;
    SET_GPR_U32(ctx, 31, 0x2CCF3Cu);
    ctx->pc = 0x25C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C280u, 0x2CCF34u, 0x2CCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF3Cu;
label_2ccf3c:
    // 0x2ccf3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf40: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CCF40u;
    {
        const bool branch_taken_0x2ccf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf40) {
            ctx->pc = 0x2CCF84u;
            goto label_2ccf84;
        }
    }
    ctx->pc = 0x2CCF48u;
label_2ccf48:
    // 0x2ccf48: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ccf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccf4c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ccf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ccf50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ccf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf54: 0xc0b2ed0  jal         func_2CBB40
    ctx->pc = 0x2CCF54u;
    SET_GPR_U32(ctx, 31, 0x2CCF5Cu);
    ctx->pc = 0x2CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBB40u, 0x2CCF54u, 0x2CCF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF5Cu;
label_2ccf5c:
    // 0x2ccf5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ccf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccf60: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf64: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2ccf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2ccf68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ccf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ccf6c:
    // 0x2ccf6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2ccf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ccf70: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ccf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ccf74: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ccf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ccf78: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2CCF78u;
    {
        const bool branch_taken_0x2ccf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf78) {
            ctx->pc = 0x2CCE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cce74;
        }
    }
    ctx->pc = 0x2CCF80u;
    // 0x2ccf80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ccf80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccf84:
    // 0x2ccf84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ccf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccf88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ccf88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccf94: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ccf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCFA0u;
}
