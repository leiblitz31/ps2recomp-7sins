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

// Function: sub_0047B750
// Address: 0x47b750 - 0x47b7a0
void sub_0047B750_0x47b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B750_0x47b750");
#endif

    ctx->pc = 0x47b750u;

    // 0x47b750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47b754: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x47b754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x47b758: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x47b758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x47b75c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b760: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47b764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b768: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x47b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x47b76c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b770: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47b770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47b774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b778: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x47b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x47b77c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b780: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47b784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b788: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x47b788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x47b78c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47b794: 0x3e00008  jr          $ra
    ctx->pc = 0x47B794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B79Cu;
    // 0x47b79c: 0x0  nop
    ctx->pc = 0x47b79cu;
    // NOP
    ctx->pc = 0x47b7a0u;
}
