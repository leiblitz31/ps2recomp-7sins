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

// Function: sub_001E52E0
// Address: 0x1e52e0 - 0x1e53a0
void sub_001E52E0_0x1e52e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E52E0_0x1e52e0");
#endif

    switch (ctx->pc) {
        case 0x1e52fcu: goto label_1e52fc;
        default: break;
    }

    ctx->pc = 0x1e52e0u;

    // 0x1e52e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e52e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e52e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e52e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e52e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e52e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e52ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e52f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e52f4: 0xc07947c  jal         func_1E51F0
    ctx->pc = 0x1E52F4u;
    SET_GPR_U32(ctx, 31, 0x1E52FCu);
    ctx->pc = 0x1E51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E51F0u, 0x1E52F4u, 0x1E52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52FCu;
label_1e52fc:
    // 0x1e52fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e52fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e5300: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5304: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1e5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5308: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e530c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e530cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5310: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5310u;
    {
        const bool branch_taken_0x1e5310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5310) {
            ctx->pc = 0x1E5324u;
            goto label_1e5324;
        }
    }
    ctx->pc = 0x1E5318u;
    // 0x1e5318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e531c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E531Cu;
    {
        const bool branch_taken_0x1e531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e531c) {
            ctx->pc = 0x1E5380u;
            goto label_1e5380;
        }
    }
    ctx->pc = 0x1E5324u;
label_1e5324:
    // 0x1e5324: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5328: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e532c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1e532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5330: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e5330u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5334: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e5334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e5338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e533c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e533cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5340: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e5340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5344: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5348: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e5348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e534c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5350: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e5350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5354: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e5354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5358: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e5358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e535c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e535cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e5360: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1e5360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1e5364: 0x0  nop
    ctx->pc = 0x1e5364u;
    // NOP
    // 0x1e5368: 0x1e000002  bgtz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5368u;
    {
        const bool branch_taken_0x1e5368 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e5368) {
            ctx->pc = 0x1E5374u;
            goto label_1e5374;
        }
    }
    ctx->pc = 0x1E5370u;
    // 0x1e5370: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5374:
    // 0x1e5374: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e5374u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5378: 0x0  nop
    ctx->pc = 0x1e5378u;
    // NOP
    // 0x1e537c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e537cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e5380:
    // 0x1e5380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5388: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e5388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e538c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5394u;
    // 0x1e5394: 0x0  nop
    ctx->pc = 0x1e5394u;
    // NOP
    // 0x1e5398: 0x0  nop
    ctx->pc = 0x1e5398u;
    // NOP
    // 0x1e539c: 0x0  nop
    ctx->pc = 0x1e539cu;
    // NOP
    ctx->pc = 0x1e53a0u;
}
