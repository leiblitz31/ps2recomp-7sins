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

// Function: sub_001CCE60
// Address: 0x1cce60 - 0x1cd0c0
void sub_001CCE60_0x1cce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCE60_0x1cce60");
#endif

    switch (ctx->pc) {
        case 0x1cce98u: goto label_1cce98;
        case 0x1ccea8u: goto label_1ccea8;
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1ccef8u: goto label_1ccef8;
        case 0x1ccf04u: goto label_1ccf04;
        case 0x1ccf1cu: goto label_1ccf1c;
        case 0x1ccf30u: goto label_1ccf30;
        case 0x1ccf64u: goto label_1ccf64;
        case 0x1ccf7cu: goto label_1ccf7c;
        case 0x1ccfe0u: goto label_1ccfe0;
        case 0x1ccfecu: goto label_1ccfec;
        case 0x1cd004u: goto label_1cd004;
        case 0x1cd048u: goto label_1cd048;
        case 0x1cd054u: goto label_1cd054;
        case 0x1cd06cu: goto label_1cd06c;
        case 0x1cd08cu: goto label_1cd08c;
        default: break;
    }

    ctx->pc = 0x1cce60u;

    // 0x1cce60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1cce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1cce64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cce68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cce6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cce70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cce74: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1cce74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1cce78: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1cce78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1cce7c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1cce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1cce80: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x1cce80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1cce84: 0xe7ad00b0  swc1        $f13, 0xB0($sp)
    ctx->pc = 0x1cce84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1cce88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cce8c: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1cce90: 0xc0739b8  jal         func_1CE6E0
    ctx->pc = 0x1CCE90u;
    SET_GPR_U32(ctx, 31, 0x1CCE98u);
    ctx->pc = 0x1CE6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6E0u, 0x1CCE90u, 0x1CCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE98u;
label_1cce98:
    // 0x1cce98: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1cce98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cce9c: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ccea0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1CCEA0u;
    {
        const bool branch_taken_0x1ccea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccea0) {
            ctx->pc = 0x1CD090u;
            goto label_1cd090;
        }
    }
    ctx->pc = 0x1CCEA8u;
label_1ccea8:
    // 0x1ccea8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cceac: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cceacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1cceb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceb4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cceb8: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ccebc: 0xc07396c  jal         func_1CE5B0
    ctx->pc = 0x1CCEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEC4u);
    ctx->pc = 0x1CE5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5B0u, 0x1CCEBCu, 0x1CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEC4u;
label_1ccec4:
    // 0x1ccec4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1ccec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccec8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1ccec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ccecc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1cceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cced0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1cced0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1cced4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cced4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cced8: 0x0  nop
    ctx->pc = 0x1cced8u;
    // NOP
    // 0x1ccedc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ccedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ccee0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ccee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccee4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ccee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ccee8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cceec: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1ccef0: 0xc104d64  jal         func_413590
    ctx->pc = 0x1CCEF0u;
    SET_GPR_U32(ctx, 31, 0x1CCEF8u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CCEF0u, 0x1CCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF8u;
label_1ccef8:
    // 0x1ccef8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccefc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CCEFCu;
    SET_GPR_U32(ctx, 31, 0x1CCF04u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CCEFCu, 0x1CCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF04u;
label_1ccf04:
    // 0x1ccf04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ccf04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf08: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccf0c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ccf10: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ccf14: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CCF14u;
    SET_GPR_U32(ctx, 31, 0x1CCF1Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CCF14u, 0x1CCF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF1Cu;
label_1ccf1c:
    // 0x1ccf1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf24: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ccf28: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1CCF28u;
    SET_GPR_U32(ctx, 31, 0x1CCF30u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CCF28u, 0x1CCF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF30u;
label_1ccf30:
    // 0x1ccf30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ccf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ccf34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccf38: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ccf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ccf3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ccf40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ccf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ccf44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ccf48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccf4c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ccf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ccf50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ccf54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ccf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ccf58: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccf5c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CCF5Cu, 0x1CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF64u;
label_1ccf64:
    // 0x1ccf64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ccf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf68: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccf6c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ccf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ccf70: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ccf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ccf74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CCF74u;
    SET_GPR_U32(ctx, 31, 0x1CCF7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CCF74u, 0x1CCF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF7Cu;
label_1ccf7c:
    // 0x1ccf7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccf80: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1ccf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ccf84: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1ccf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccf88: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1ccf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccf8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccf8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccf90: 0x0  nop
    ctx->pc = 0x1ccf90u;
    // NOP
    // 0x1ccf94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ccf94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ccf98: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x1ccf98u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ccf9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ccf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ccfa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ccfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccfa4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ccfa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ccfa8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ccfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ccfac: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1ccfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ccfb0: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1ccfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ccfb4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1ccfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccfb8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ccfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccfbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccfbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccfc0: 0x0  nop
    ctx->pc = 0x1ccfc0u;
    // NOP
    // 0x1ccfc4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ccfc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ccfc8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1ccfc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ccfcc: 0x46002340  add.s       $f13, $f4, $f0
    ctx->pc = 0x1ccfccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1ccfd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1CCFD8u;
    SET_GPR_U32(ctx, 31, 0x1CCFE0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CCFD8u, 0x1CCFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFE0u;
label_1ccfe0:
    // 0x1ccfe0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccfe4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CCFE4u;
    SET_GPR_U32(ctx, 31, 0x1CCFECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CCFE4u, 0x1CCFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFECu;
label_1ccfec:
    // 0x1ccfec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ccfecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccff0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ccff4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ccff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ccff8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ccffc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CCFFCu;
    SET_GPR_U32(ctx, 31, 0x1CD004u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CCFFCu, 0x1CD004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD004u;
label_1cd004:
    // 0x1cd004: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd008: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cd008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1cd00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd010: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1cd010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd014: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cd014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd018: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1cd018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd01c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cd01cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1cd020: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd024: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1cd024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd028: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cd028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cd02c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cd02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd030: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1cd030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd038: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cd03c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd040: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1CD040u;
    SET_GPR_U32(ctx, 31, 0x1CD048u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CD040u, 0x1CD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD048u;
label_1cd048:
    // 0x1cd048: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd04c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD04Cu;
    SET_GPR_U32(ctx, 31, 0x1CD054u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD04Cu, 0x1CD054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD054u;
label_1cd054:
    // 0x1cd054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cd054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd058: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd05c: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1cd05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cd060: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd064: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD064u;
    SET_GPR_U32(ctx, 31, 0x1CD06Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD064u, 0x1CD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD06Cu;
label_1cd06c:
    // 0x1cd06c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd074: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1cd074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd078: 0xc7ad00b0  lwc1        $f13, 0xB0($sp)
    ctx->pc = 0x1cd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd07c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd084: 0xc08c544  jal         func_231510
    ctx->pc = 0x1CD084u;
    SET_GPR_U32(ctx, 31, 0x1CD08Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1CD084u, 0x1CD08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD08Cu;
label_1cd08c:
    // 0x1cd08c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cd090:
    // 0x1cd090: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1cd090u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cd094: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
    ctx->pc = 0x1CD094u;
    {
        const bool branch_taken_0x1cd094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd094) {
            ctx->pc = 0x1CCEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccea8;
        }
    }
    ctx->pc = 0x1CD09Cu;
    // 0x1cd09c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd0a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd0ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1cd0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD0B8u;
    // 0x1cd0b8: 0x0  nop
    ctx->pc = 0x1cd0b8u;
    // NOP
    // 0x1cd0bc: 0x0  nop
    ctx->pc = 0x1cd0bcu;
    // NOP
    ctx->pc = 0x1cd0c0u;
}
