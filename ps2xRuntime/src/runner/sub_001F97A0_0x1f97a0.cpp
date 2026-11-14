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

// Function: sub_001F97A0
// Address: 0x1f97a0 - 0x1f98c0
void sub_001F97A0_0x1f97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F97A0_0x1f97a0");
#endif

    ctx->pc = 0x1f97a0u;

    // 0x1f97a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f97a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f97a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1f97a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97ac: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f97acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f97b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97b4: 0xc46002c8  lwc1        $f0, 0x2C8($v1)
    ctx->pc = 0x1f97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f97b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f97bc: 0xe46002c8  swc1        $f0, 0x2C8($v1)
    ctx->pc = 0x1f97bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 712), bits); }
    // 0x1f97c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97c4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f97c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f97c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97cc: 0xc46002cc  lwc1        $f0, 0x2CC($v1)
    ctx->pc = 0x1f97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f97d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f97d4: 0xe46002cc  swc1        $f0, 0x2CC($v1)
    ctx->pc = 0x1f97d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 716), bits); }
    // 0x1f97d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97dc: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f97dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f97e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97e4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f97e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f97ec: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1f97ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1f97f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97f4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f97f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97fc: 0xc46000d8  lwc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9804: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x1f9804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x1f9808: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f980c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9810: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9814: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f9814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9818: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f981c: 0xe46000dc  swc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x1f9820: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9824: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f9824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9828: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f982c: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9830: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9834: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f9834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f9838: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f983c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9840: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9844: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f9844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9848: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f984c: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1f9850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9854: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f9854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9858: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f985c: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x1f985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9860: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9864: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1f9864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1f9868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f986c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f986cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9874: 0xc4600284  lwc1        $f0, 0x284($v1)
    ctx->pc = 0x1f9874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9878: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f987c: 0xe4600284  swc1        $f0, 0x284($v1)
    ctx->pc = 0x1f987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 644), bits); }
    // 0x1f9880: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9884: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f9884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f9888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f988c: 0xc46002ec  lwc1        $f0, 0x2EC($v1)
    ctx->pc = 0x1f988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9894: 0xe46002ec  swc1        $f0, 0x2EC($v1)
    ctx->pc = 0x1f9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 748), bits); }
    // 0x1f9898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f989c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f98a0: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f98a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1f98a4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f98a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f98a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98B0u;
    // 0x1f98b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f98b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f98b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98C0u;
}
