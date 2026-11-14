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

// Function: sub_0019A710
// Address: 0x19a710 - 0x19a890
void sub_0019A710_0x19a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A710_0x19a710");
#endif

    switch (ctx->pc) {
        case 0x19a7d0u: goto label_19a7d0;
        case 0x19a7fcu: goto label_19a7fc;
        case 0x19a814u: goto label_19a814;
        case 0x19a838u: goto label_19a838;
        case 0x19a844u: goto label_19a844;
        case 0x19a85cu: goto label_19a85c;
        case 0x19a870u: goto label_19a870;
        default: break;
    }

    ctx->pc = 0x19a710u;

    // 0x19a710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19a714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a71c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x19a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x19a720: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x19a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x19a724: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x19a724u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x19a728: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a72c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19a730: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x19a730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a734: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a738: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a73c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a740: 0x0  nop
    ctx->pc = 0x19a740u;
    // NOP
    // 0x19a744: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19a744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19a748: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19a748u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19a74c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a750: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19a750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19a754: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a758: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19a758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a75c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19a760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a764: 0x0  nop
    ctx->pc = 0x19a764u;
    // NOP
    // 0x19a768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a76c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A76Cu;
    {
        const bool branch_taken_0x19a76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a76c) {
            ctx->pc = 0x19A794u;
            goto label_19a794;
        }
    }
    ctx->pc = 0x19A774u;
    // 0x19a774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19a774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19a778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a77c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a780: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a784: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a788: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19a788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19a78c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19A78Cu;
    {
        const bool branch_taken_0x19a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a78c) {
            ctx->pc = 0x19A7A4u;
            goto label_19a7a4;
        }
    }
    ctx->pc = 0x19A794u;
label_19a794:
    // 0x19a794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a79c: 0x0  nop
    ctx->pc = 0x19a79cu;
    // NOP
    // 0x19a7a0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19a7a4:
    // 0x19a7a4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x19a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a7a8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19a7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x19a7ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a7b0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x19a7b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a7b8: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x19a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a7bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19a7bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a7c0: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x19a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a7c4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x19a7c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19a7c8: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x19A7C8u;
    SET_GPR_U32(ctx, 31, 0x19A7D0u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x19A7C8u, 0x19A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7D0u;
label_19a7d0:
    // 0x19a7d0: 0xc78381a0  lwc1        $f3, -0x7E60($gp)
    ctx->pc = 0x19a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19a7d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19a7d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19a7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19a7dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19a7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a7e0: 0x0  nop
    ctx->pc = 0x19a7e0u;
    // NOP
    // 0x19a7e4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x19a7e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x19a7e8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x19a7e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x19a7ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x19a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19a7f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a7f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19A7F4u;
    SET_GPR_U32(ctx, 31, 0x19A7FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19A7F4u, 0x19A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7FCu;
label_19a7fc:
    // 0x19a7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a800: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a804: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a808: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x19a808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19a80c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A80Cu;
    SET_GPR_U32(ctx, 31, 0x19A814u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A80Cu, 0x19A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A814u;
label_19a814:
    // 0x19a814: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19a814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19a81c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19a81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19a820: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19a820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19a824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a828: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x19a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19a82c: 0xc7af002c  lwc1        $f15, 0x2C($sp)
    ctx->pc = 0x19a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x19a830: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x19A830u;
    SET_GPR_U32(ctx, 31, 0x19A838u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x19A830u, 0x19A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A838u;
label_19a838:
    // 0x19a838: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a83c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19A83Cu;
    SET_GPR_U32(ctx, 31, 0x19A844u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19A83Cu, 0x19A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A844u;
label_19a844:
    // 0x19a844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a848: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a84c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x19a850: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x19a850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19a854: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19A854u;
    SET_GPR_U32(ctx, 31, 0x19A85Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19A854u, 0x19A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A85Cu;
label_19a85c:
    // 0x19a85c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a864: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x19a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a868: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x19A868u;
    SET_GPR_U32(ctx, 31, 0x19A870u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x19A868u, 0x19A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A870u;
label_19a870:
    // 0x19a870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a878: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19a87c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A884u;
    // 0x19a884: 0x0  nop
    ctx->pc = 0x19a884u;
    // NOP
    // 0x19a888: 0x0  nop
    ctx->pc = 0x19a888u;
    // NOP
    // 0x19a88c: 0x0  nop
    ctx->pc = 0x19a88cu;
    // NOP
    ctx->pc = 0x19a890u;
}
