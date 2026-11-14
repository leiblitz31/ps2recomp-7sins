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

// Function: sub_00281370
// Address: 0x281370 - 0x2813a0
void sub_00281370_0x281370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281370_0x281370");
#endif

    ctx->pc = 0x281370u;

    // 0x281370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281374: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x281374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x281378: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x281378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28137c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281384: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x281384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281388: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x281388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28138c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281390: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281394: 0x3e00008  jr          $ra
    ctx->pc = 0x281394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28139Cu;
    // 0x28139c: 0x0  nop
    ctx->pc = 0x28139cu;
    // NOP
    ctx->pc = 0x2813a0u;
}
