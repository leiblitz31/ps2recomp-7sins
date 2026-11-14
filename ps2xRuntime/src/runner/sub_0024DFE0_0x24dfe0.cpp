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

// Function: sub_0024DFE0
// Address: 0x24dfe0 - 0x24e010
void sub_0024DFE0_0x24dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DFE0_0x24dfe0");
#endif

    ctx->pc = 0x24dfe0u;

    // 0x24dfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24dfe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x24dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x24dfe8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x24dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24dfec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dff0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dff4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dff8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24dff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24dffc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24e004: 0x3e00008  jr          $ra
    ctx->pc = 0x24E004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E00Cu;
    // 0x24e00c: 0x0  nop
    ctx->pc = 0x24e00cu;
    // NOP
    ctx->pc = 0x24e010u;
}
