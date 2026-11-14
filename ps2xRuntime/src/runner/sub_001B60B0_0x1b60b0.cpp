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

// Function: sub_001B60B0
// Address: 0x1b60b0 - 0x1b61e0
void sub_001B60B0_0x1b60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B60B0_0x1b60b0");
#endif

    switch (ctx->pc) {
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6188u: goto label_1b6188;
        default: break;
    }

    ctx->pc = 0x1b60b0u;

    // 0x1b60b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b60b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b60b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b60b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b60b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b60bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b60c0: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1b60c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b60c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b60c8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b60cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b60ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b60d0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B60D0u;
    SET_GPR_U32(ctx, 31, 0x1B60D8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B60D0u, 0x1B60D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60D8u;
label_1b60d8:
    // 0x1b60d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b60d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b60dc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b60dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b60e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b60e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b60e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b60e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b60ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b60ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b60f0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b60f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b60f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b60f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b60f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b60fc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b60fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6100: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b6100u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b6104: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1b6104u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b6108: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x1B6108u;
    SET_GPR_U32(ctx, 31, 0x1B6110u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x1B6108u, 0x1B6110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6110u;
label_1b6110:
    // 0x1b6110: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6114: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6118: 0x0  nop
    ctx->pc = 0x1b6118u;
    // NOP
    // 0x1b611c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b611cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6120: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b6120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1b6124: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6128: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x1b6128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b612c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6130: 0xc4600154  lwc1        $f0, 0x154($v1)
    ctx->pc = 0x1b6130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6134: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1b6134u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b6138: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1b6138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b613c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6140: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x1b6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6148: 0x0  nop
    ctx->pc = 0x1b6148u;
    // NOP
    // 0x1b614c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b614cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b6150: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b6150u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6154: 0xe4600154  swc1        $f0, 0x154($v1)
    ctx->pc = 0x1b6154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
    // 0x1b6158: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b615c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6164: 0x0  nop
    ctx->pc = 0x1b6164u;
    // NOP
    // 0x1b6168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b616c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1B616Cu;
    {
        const bool branch_taken_0x1b616c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b616c) {
            ctx->pc = 0x1B61A0u;
            goto label_1b61a0;
        }
    }
    ctx->pc = 0x1B6174u;
    // 0x1b6174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6178: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b617c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6180: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6180u;
    SET_GPR_U32(ctx, 31, 0x1B6188u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6180u, 0x1B6188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6188u;
label_1b6188:
    // 0x1b6188: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b6188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b618c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B618Cu;
    {
        const bool branch_taken_0x1b618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b618c) {
            ctx->pc = 0x1B61A0u;
            goto label_1b61a0;
        }
    }
    ctx->pc = 0x1B6194u;
    // 0x1b6194: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6198: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b619c: 0xa06404a8  sb          $a0, 0x4A8($v1)
    ctx->pc = 0x1b619cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1192), (uint8_t)GPR_U32(ctx, 4));
label_1b61a0:
    // 0x1b61a0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b61a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b61a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b61a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b61ac: 0x0  nop
    ctx->pc = 0x1b61acu;
    // NOP
    // 0x1b61b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b61b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b61b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B61B4u;
    {
        const bool branch_taken_0x1b61b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b61b4) {
            ctx->pc = 0x1B61CCu;
            goto label_1b61cc;
        }
    }
    ctx->pc = 0x1B61BCu;
    // 0x1b61bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b61bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b61c0: 0x0  nop
    ctx->pc = 0x1b61c0u;
    // NOP
    // 0x1b61c4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b61c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b61c8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b61c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b61cc:
    // 0x1b61cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b61ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b61d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b61d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b61d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b61d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B61D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B61D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B61E0u;
}
