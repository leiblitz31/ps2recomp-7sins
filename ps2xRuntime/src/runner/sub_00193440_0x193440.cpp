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

// Function: sub_00193440
// Address: 0x193440 - 0x193490
void sub_00193440_0x193440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193440_0x193440");
#endif

    switch (ctx->pc) {
        case 0x193474u: goto label_193474;
        default: break;
    }

    ctx->pc = 0x193440u;

    // 0x193440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x193448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19344c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19344cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x193450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x193450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193454: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x193454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193458: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x193458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19345c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19345cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193460: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x193460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x193464: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x193464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193468: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x193468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19346c: 0xc064d24  jal         func_193490
    ctx->pc = 0x19346Cu;
    SET_GPR_U32(ctx, 31, 0x193474u);
    ctx->pc = 0x193490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193490u, 0x19346Cu, 0x193474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193474u;
label_193474:
    // 0x193474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193478: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x193478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19347c: 0x3e00008  jr          $ra
    ctx->pc = 0x19347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193484u;
    // 0x193484: 0x0  nop
    ctx->pc = 0x193484u;
    // NOP
    // 0x193488: 0x0  nop
    ctx->pc = 0x193488u;
    // NOP
    // 0x19348c: 0x0  nop
    ctx->pc = 0x19348cu;
    // NOP
    ctx->pc = 0x193490u;
}
