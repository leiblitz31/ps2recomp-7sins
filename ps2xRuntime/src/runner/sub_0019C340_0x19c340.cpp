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

// Function: sub_0019C340
// Address: 0x19c340 - 0x19c460
void sub_0019C340_0x19c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C340_0x19c340");
#endif

    switch (ctx->pc) {
        case 0x19c3c4u: goto label_19c3c4;
        default: break;
    }

    ctx->pc = 0x19c340u;

    // 0x19c340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19c34c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19c34cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19c350: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c354: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x19c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c358: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x19c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c35c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19c360: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x19c360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x19c364: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c368: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c36c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c370: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19C370u;
    {
        const bool branch_taken_0x19c370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c370) {
            ctx->pc = 0x19C3FCu;
            goto label_19c3fc;
        }
    }
    ctx->pc = 0x19C378u;
    // 0x19c378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c37c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x19c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19c380: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x19c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19c384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c388: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19c388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c38c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c38cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c390: 0x0  nop
    ctx->pc = 0x19c390u;
    // NOP
    // 0x19c394: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19c394u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19c398: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x19c398u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19c39c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19c3a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3b0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x19c3b4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x19c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c3b8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19c3bc: 0xc0672b8  jal         func_19CAE0
    ctx->pc = 0x19C3BCu;
    SET_GPR_U32(ctx, 31, 0x19C3C4u);
    ctx->pc = 0x19CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CAE0u, 0x19C3BCu, 0x19C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3C4u;
label_19c3c4:
    // 0x19c3c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c3cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c3d0: 0x0  nop
    ctx->pc = 0x19c3d0u;
    // NOP
    // 0x19c3d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c3d8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x19C3D8u;
    {
        const bool branch_taken_0x19c3d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c3d8) {
            ctx->pc = 0x19C444u;
            goto label_19c444;
        }
    }
    ctx->pc = 0x19C3E0u;
    // 0x19c3e0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3e4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x19c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x19c3e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c3ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3f0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x19c3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x19c3f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19C3F4u;
    {
        const bool branch_taken_0x19c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c3f4) {
            ctx->pc = 0x19C444u;
            goto label_19c444;
        }
    }
    ctx->pc = 0x19C3FCu;
label_19c3fc:
    // 0x19c3fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c400: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x19c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c408: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19C408u;
    {
        const bool branch_taken_0x19c408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c408) {
            ctx->pc = 0x19C444u;
            goto label_19c444;
        }
    }
    ctx->pc = 0x19C410u;
    // 0x19c410: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c414: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x19c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c418: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19c418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19c41c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c420: 0x0  nop
    ctx->pc = 0x19c420u;
    // NOP
    // 0x19c424: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c428: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19C428u;
    {
        const bool branch_taken_0x19c428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c428) {
            ctx->pc = 0x19C444u;
            goto label_19c444;
        }
    }
    ctx->pc = 0x19C430u;
    // 0x19c430: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c434: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x19c434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x19c438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c43c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c440: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x19c440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_19c444:
    // 0x19c444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c448: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c44c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C454u;
    // 0x19c454: 0x0  nop
    ctx->pc = 0x19c454u;
    // NOP
    // 0x19c458: 0x0  nop
    ctx->pc = 0x19c458u;
    // NOP
    // 0x19c45c: 0x0  nop
    ctx->pc = 0x19c45cu;
    // NOP
    ctx->pc = 0x19c460u;
}
