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

// Function: sub_002137F0
// Address: 0x2137f0 - 0x2138b0
void sub_002137F0_0x2137f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002137F0_0x2137f0");
#endif

    ctx->pc = 0x2137f0u;

    // 0x2137f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2137f4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2137f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2137f8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2137f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2137fc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2137fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x213800: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x213800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213804: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x213804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213808: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21380c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213810: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x213810u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x213814: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x213814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213818: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21381c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x21381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213824: 0x0  nop
    ctx->pc = 0x213824u;
    // NOP
    // 0x213828: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213828u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21382c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x21382cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x213830: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213834: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x213834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x213838: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x213838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21383c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x21383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213840: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213844: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x213844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213848: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x213848u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21384c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x21384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213850: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213854: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x213854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21385c: 0x0  nop
    ctx->pc = 0x21385cu;
    // NOP
    // 0x213860: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213860u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x213864: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x213864u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x213868: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x213868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21386c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213870: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x213870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213874: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213878: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x213878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21387c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x21387cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x213880: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x213880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213884: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213888: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x213888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21388c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21388cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213890: 0x0  nop
    ctx->pc = 0x213890u;
    // NOP
    // 0x213894: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213894u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x213898: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x213898u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x21389c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21389cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2138a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2138a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2138A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2138A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2138ACu;
    // 0x2138ac: 0x0  nop
    ctx->pc = 0x2138acu;
    // NOP
    ctx->pc = 0x2138b0u;
}
