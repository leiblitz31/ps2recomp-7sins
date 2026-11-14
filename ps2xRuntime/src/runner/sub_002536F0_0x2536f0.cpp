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

// Function: sub_002536F0
// Address: 0x2536f0 - 0x253780
void sub_002536F0_0x2536f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002536F0_0x2536f0");
#endif

    ctx->pc = 0x2536f0u;

    // 0x2536f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2536f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2536f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2536f8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2536f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2536fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2536fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253700: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x253700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253704: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x253704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253708: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25370c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x253710: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253714: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x253714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253718: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25371c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253720: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x253720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253724: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x253724u;
    {
        const bool branch_taken_0x253724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253724) {
            ctx->pc = 0x253744u;
            goto label_253744;
        }
    }
    ctx->pc = 0x25372Cu;
    // 0x25372c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253730: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x253730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253738: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x253738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25373c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25373Cu;
    {
        const bool branch_taken_0x25373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25373c) {
            ctx->pc = 0x253770u;
            goto label_253770;
        }
    }
    ctx->pc = 0x253744u;
label_253744:
    // 0x253744: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253748: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x253748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25374c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253750: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x253750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253758: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x253758u;
    {
        const bool branch_taken_0x253758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253758) {
            ctx->pc = 0x253770u;
            goto label_253770;
        }
    }
    ctx->pc = 0x253760u;
    // 0x253760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253764: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x253764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253768: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25376c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_253770:
    // 0x253770: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253774: 0x3e00008  jr          $ra
    ctx->pc = 0x253774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25377Cu;
    // 0x25377c: 0x0  nop
    ctx->pc = 0x25377cu;
    // NOP
    ctx->pc = 0x253780u;
}
