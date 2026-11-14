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

// Function: sub_00413690
// Address: 0x413690 - 0x413710
void sub_00413690_0x413690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413690_0x413690");
#endif

    ctx->pc = 0x413690u;

    // 0x413690: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x413690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x413694: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x413694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413698: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x413698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x41369c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x41369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4136a0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4136a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4136a4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4136a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4136a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4136a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4136ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4136acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4136b0: 0x46010044  c1          0x10044
    ctx->pc = 0x4136b0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x4136b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4136b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4136b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4136b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4136bc: 0x0  nop
    ctx->pc = 0x4136bcu;
    // NOP
    // 0x4136c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x4136C0u;
    {
        const bool branch_taken_0x4136c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136C0u;
        // 0x4136c4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4136c0) {
            ctx->pc = 0x4136E0u;
            goto label_4136e0;
        }
    }
    ctx->pc = 0x4136C8u;
    // 0x4136c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4136c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4136cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4136ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4136d0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x4136d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4136d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4136D4u;
    {
        const bool branch_taken_0x4136d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136D4u;
        // 0x4136d8: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4136d4) {
            ctx->pc = 0x4136E8u;
            goto label_4136e8;
        }
    }
    ctx->pc = 0x4136DCu;
    // 0x4136dc: 0x0  nop
    ctx->pc = 0x4136dcu;
    // NOP
label_4136e0:
    // 0x4136e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4136e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4136e4: 0x0  nop
    ctx->pc = 0x4136e4u;
    // NOP
label_4136e8:
    // 0x4136e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4136e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4136ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x4136ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4136f0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4136f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4136f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4136f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4136f8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4136f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4136fc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4136fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413700: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x413700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x413704: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x413704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x413708: 0x3e00008  jr          $ra
    ctx->pc = 0x413708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413708u;
        // 0x41370c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413710u;
}
