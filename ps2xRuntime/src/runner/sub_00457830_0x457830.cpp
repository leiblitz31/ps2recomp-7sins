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

// Function: sub_00457830
// Address: 0x457830 - 0x457890
void sub_00457830_0x457830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457830_0x457830");
#endif

    ctx->pc = 0x457830u;

    // 0x457830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457834: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x457834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x457838: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x457838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45783c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x45783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x457840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45784c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45784cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x457850: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457854: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x457854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457858: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x457858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45785c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x45785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457860: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x457860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457864: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x457864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457868: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x457868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x45786c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x45786cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x457870: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x457870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x457874: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x457874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457878: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45787c: 0x3e00008  jr          $ra
    ctx->pc = 0x45787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45787Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457884u;
    // 0x457884: 0x0  nop
    ctx->pc = 0x457884u;
    // NOP
    // 0x457888: 0x0  nop
    ctx->pc = 0x457888u;
    // NOP
    // 0x45788c: 0x0  nop
    ctx->pc = 0x45788cu;
    // NOP
    ctx->pc = 0x457890u;
}
