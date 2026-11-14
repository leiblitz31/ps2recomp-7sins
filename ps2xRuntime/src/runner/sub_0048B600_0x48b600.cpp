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

// Function: sub_0048B600
// Address: 0x48b600 - 0x48b6d0
void sub_0048B600_0x48b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B600_0x48b600");
#endif

    ctx->pc = 0x48b600u;

    // 0x48b600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48b604: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48b604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48b608: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x48b608u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x48b60c: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x48b60cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x48b610: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x48b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48b614: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x48b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x48b618: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x48b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b620: 0x0  nop
    ctx->pc = 0x48b620u;
    // NOP
    // 0x48b624: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48b624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48b628: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x48B628u;
    {
        const bool branch_taken_0x48b628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b628) {
            ctx->pc = 0x48B6B8u;
            goto label_48b6b8;
        }
    }
    ctx->pc = 0x48B630u;
    // 0x48b630: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x48b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b634: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x48b634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x48b638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48b638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b63c: 0x0  nop
    ctx->pc = 0x48b63cu;
    // NOP
    // 0x48b640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48b640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48b644: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x48B644u;
    {
        const bool branch_taken_0x48b644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b644) {
            ctx->pc = 0x48B660u;
            goto label_48b660;
        }
    }
    ctx->pc = 0x48B64Cu;
    // 0x48b64c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x48b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48b650: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b654: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x48b654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x48b658: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x48B658u;
    {
        const bool branch_taken_0x48b658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b658) {
            ctx->pc = 0x48B6B8u;
            goto label_48b6b8;
        }
    }
    ctx->pc = 0x48B660u;
label_48b660:
    // 0x48b660: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b664: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x48b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b668: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x48b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48b66c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x48b66cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48b670: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x48B670u;
    {
        const bool branch_taken_0x48b670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48b670) {
            ctx->pc = 0x48B6B8u;
            goto label_48b6b8;
        }
    }
    ctx->pc = 0x48B678u;
    // 0x48b678: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b67c: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x48b67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b680: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x48b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48b684: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x48b684u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x48b688: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x48b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x48b68c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b690: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x48b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48b694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48b698: 0x0  nop
    ctx->pc = 0x48b698u;
    // NOP
    // 0x48b69c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48b69cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x48b6a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x48b6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x48b6a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b6a8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x48b6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x48b6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48b6b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b6b4: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x48b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
label_48b6b8:
    // 0x48b6b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x48B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B6C4u;
    // 0x48b6c4: 0x0  nop
    ctx->pc = 0x48b6c4u;
    // NOP
    // 0x48b6c8: 0x0  nop
    ctx->pc = 0x48b6c8u;
    // NOP
    // 0x48b6cc: 0x0  nop
    ctx->pc = 0x48b6ccu;
    // NOP
    ctx->pc = 0x48b6d0u;
}
