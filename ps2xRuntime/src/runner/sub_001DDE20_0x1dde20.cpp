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

// Function: sub_001DDE20
// Address: 0x1dde20 - 0x1de0b0
void sub_001DDE20_0x1dde20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDE20_0x1dde20");
#endif

    switch (ctx->pc) {
        case 0x1dde44u: goto label_1dde44;
        case 0x1dde5cu: goto label_1dde5c;
        case 0x1dde6cu: goto label_1dde6c;
        case 0x1dde84u: goto label_1dde84;
        case 0x1ddedcu: goto label_1ddedc;
        case 0x1ddef4u: goto label_1ddef4;
        case 0x1ddf08u: goto label_1ddf08;
        case 0x1ddf14u: goto label_1ddf14;
        case 0x1ddf24u: goto label_1ddf24;
        case 0x1ddf3cu: goto label_1ddf3c;
        case 0x1ddf50u: goto label_1ddf50;
        default: break;
    }

    ctx->pc = 0x1dde20u;

    // 0x1dde20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dde24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dde24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dde28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dde28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dde2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dde2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dde30: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1dde30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1dde34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1dde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dde38: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dde3c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE44u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDE3Cu, 0x1DDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE44u;
label_1dde44:
    // 0x1dde44: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1dde44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dde48: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dde48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dde4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dde4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde50: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1dde50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dde54: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DDE54u;
    SET_GPR_U32(ctx, 31, 0x1DDE5Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DDE54u, 0x1DDE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE5Cu;
label_1dde5c:
    // 0x1dde5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1dde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dde60: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dde60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dde64: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDE64u;
    SET_GPR_U32(ctx, 31, 0x1DDE6Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDE64u, 0x1DDE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE6Cu;
label_1dde6c:
    // 0x1dde6c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dde70: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dde74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dde74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde78: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1dde7c: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DDE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE84u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DDE7Cu, 0x1DDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE84u;
label_1dde84:
    // 0x1dde84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dde84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dde88: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dde88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dde8c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1dde8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dde90: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1dde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dde94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dde98: 0x0  nop
    ctx->pc = 0x1dde98u;
    // NOP
    // 0x1dde9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dde9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddea0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ddea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddea4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1ddea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ddea8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ddea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ddeac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ddeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ddeb0: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x1ddeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddeb4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ddeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddeb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddebc: 0x0  nop
    ctx->pc = 0x1ddebcu;
    // NOP
    // 0x1ddec0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddec0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddec4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ddec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddec8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ddec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ddecc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dded0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dded4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDED4u;
    SET_GPR_U32(ctx, 31, 0x1DDEDCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDED4u, 0x1DDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEDCu;
label_1ddedc:
    // 0x1ddedc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddee0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddee4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1ddee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddeec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DDEECu;
    SET_GPR_U32(ctx, 31, 0x1DDEF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DDEECu, 0x1DDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEF4u;
label_1ddef4:
    // 0x1ddef4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ddef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddefc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ddf00: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DDF00u;
    SET_GPR_U32(ctx, 31, 0x1DDF08u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DDF00u, 0x1DDF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF08u;
label_1ddf08:
    // 0x1ddf08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ddf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1DDF0Cu;
    {
        const bool branch_taken_0x1ddf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf0c) {
            ctx->pc = 0x1DE078u;
            goto label_1de078;
        }
    }
    ctx->pc = 0x1DDF14u;
label_1ddf14:
    // 0x1ddf14: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddf18: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ddf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ddf1c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF24u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DDF1Cu, 0x1DDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF24u;
label_1ddf24:
    // 0x1ddf24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddf2c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1ddf30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DDF34u;
    SET_GPR_U32(ctx, 31, 0x1DDF3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DDF34u, 0x1DDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF3Cu;
label_1ddf3c:
    // 0x1ddf3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddf40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf44: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1ddf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1ddf48: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DDF48u;
    SET_GPR_U32(ctx, 31, 0x1DDF50u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DDF48u, 0x1DDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF50u;
label_1ddf50:
    // 0x1ddf50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ddf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ddf54: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ddf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ddf58: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1ddf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddf5c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf64: 0x0  nop
    ctx->pc = 0x1ddf64u;
    // NOP
    // 0x1ddf68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddf68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddf6c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ddf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddf70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ddf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ddf74: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ddf78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ddf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ddf7c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1ddf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddf80: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ddf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddf88: 0x0  nop
    ctx->pc = 0x1ddf88u;
    // NOP
    // 0x1ddf8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddf8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddf90: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ddf90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ddf94: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ddf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ddf98: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ddf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1ddf9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddf9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddfa0: 0x0  nop
    ctx->pc = 0x1ddfa0u;
    // NOP
    // 0x1ddfa4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ddfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ddfa8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddfac: 0xc44300ac  lwc1        $f3, 0xAC($v0)
    ctx->pc = 0x1ddfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ddfb0: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1ddfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddfb4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddfb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddfb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddfbc: 0x0  nop
    ctx->pc = 0x1ddfbcu;
    // NOP
    // 0x1ddfc0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddfc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddfc4: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1ddfc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ddfc8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ddfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddfcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddfccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddfd0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1DDFD0u;
    {
        const bool branch_taken_0x1ddfd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddfd0) {
            ctx->pc = 0x1DE074u;
            goto label_1de074;
        }
    }
    ctx->pc = 0x1DDFD8u;
    // 0x1ddfd8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ddfdc: 0xc44300ac  lwc1        $f3, 0xAC($v0)
    ctx->pc = 0x1ddfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ddfe0: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1ddfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ddfe4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ddfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ddfec: 0x0  nop
    ctx->pc = 0x1ddfecu;
    // NOP
    // 0x1ddff0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ddff0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ddff4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1ddff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ddff8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ddff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddffc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de000: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1DE000u;
    {
        const bool branch_taken_0x1de000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de000) {
            ctx->pc = 0x1DE074u;
            goto label_1de074;
        }
    }
    ctx->pc = 0x1DE008u;
    // 0x1de008: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1de008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de00c: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x1de00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de010: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1de010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de014: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1de014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de018: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de01c: 0x0  nop
    ctx->pc = 0x1de01cu;
    // NOP
    // 0x1de020: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de020u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de024: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x1de024u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1de028: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1de028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de030: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE030u;
    {
        const bool branch_taken_0x1de030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de030) {
            ctx->pc = 0x1DE074u;
            goto label_1de074;
        }
    }
    ctx->pc = 0x1DE038u;
    // 0x1de038: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1de038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de03c: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x1de03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de040: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x1de040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de044: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1de044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de04c: 0x0  nop
    ctx->pc = 0x1de04cu;
    // NOP
    // 0x1de050: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1de050u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1de054: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1de054u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1de058: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1de058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de05c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de060: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE060u;
    {
        const bool branch_taken_0x1de060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de060) {
            ctx->pc = 0x1DE074u;
            goto label_1de074;
        }
    }
    ctx->pc = 0x1DE068u;
    // 0x1de068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de06c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE06Cu;
    {
        const bool branch_taken_0x1de06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de06c) {
            ctx->pc = 0x1DE090u;
            goto label_1de090;
        }
    }
    ctx->pc = 0x1DE074u;
label_1de074:
    // 0x1de074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1de078:
    // 0x1de078: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1de078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de07c: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x1de07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1de080: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1de080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1de084: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1DE084u;
    {
        const bool branch_taken_0x1de084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de084) {
            ctx->pc = 0x1DDF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddf14;
        }
    }
    ctx->pc = 0x1DE08Cu;
    // 0x1de08c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de090:
    // 0x1de090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de09c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1de09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1de0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0A8u;
    // 0x1de0a8: 0x0  nop
    ctx->pc = 0x1de0a8u;
    // NOP
    // 0x1de0ac: 0x0  nop
    ctx->pc = 0x1de0acu;
    // NOP
    ctx->pc = 0x1de0b0u;
}
