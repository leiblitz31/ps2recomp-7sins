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

// Function: sub_0019C9D0
// Address: 0x19c9d0 - 0x19cae0
void sub_0019C9D0_0x19c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C9D0_0x19c9d0");
#endif

    ctx->pc = 0x19c9d0u;

    // 0x19c9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c9d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c9d8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x19c9d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19c9dc: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x19c9dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19c9e0: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x19c9e0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19c9e4: 0xe7af0040  swc1        $f15, 0x40($sp)
    ctx->pc = 0x19c9e4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19c9e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19c9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c9ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9f0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x19c9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x19c9f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x19c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c9f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c9fc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x19c9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19ca00: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca08: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x19ca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x19ca0c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19ca0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca14: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x19ca14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x19ca18: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19ca1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x19ca1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19ca20: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x19ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ca24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19ca28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19ca28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ca2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19ca30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ca34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ca34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca38: 0x0  nop
    ctx->pc = 0x19ca38u;
    // NOP
    // 0x19ca3c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19ca3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19ca40: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x19ca40u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19ca44: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca48: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x19ca48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19ca4c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19ca54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19ca5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19ca60: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x19ca60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x19ca64: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x19ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19ca68: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x19ca6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x19ca6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19ca70: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x19ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ca74: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x19ca78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19ca78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ca7c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x19ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ca80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19ca80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19ca84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ca84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca88: 0x0  nop
    ctx->pc = 0x19ca88u;
    // NOP
    // 0x19ca8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19ca8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19ca90: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x19ca90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x19ca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca98: 0x0  nop
    ctx->pc = 0x19ca98u;
    // NOP
    // 0x19ca9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19ca9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19caa0: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x19caa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x19caa4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19caa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19caa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19caac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cab0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19cab4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x19cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cab8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cabc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x19cabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x19cac0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cac4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cac8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x19cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x19cacc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19caccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19cad0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CAD8u;
    // 0x19cad8: 0x0  nop
    ctx->pc = 0x19cad8u;
    // NOP
    // 0x19cadc: 0x0  nop
    ctx->pc = 0x19cadcu;
    // NOP
    ctx->pc = 0x19cae0u;
}
