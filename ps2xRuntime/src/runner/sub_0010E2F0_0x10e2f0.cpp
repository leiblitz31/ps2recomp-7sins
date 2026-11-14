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

// Function: sub_0010E2F0
// Address: 0x10e2f0 - 0x10e340
void sub_0010E2F0_0x10e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E2F0_0x10e2f0");
#endif

    switch (ctx->pc) {
        case 0x10e314u: goto label_10e314;
        default: break;
    }

    ctx->pc = 0x10e2f0u;

    // 0x10e2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e2f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e2fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10e300: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10e300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x10e304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e308: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10e308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e30c: 0xc0438d0  jal         func_10E340
    ctx->pc = 0x10E30Cu;
    SET_GPR_U32(ctx, 31, 0x10E314u);
    ctx->pc = 0x10E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E340u, 0x10E30Cu, 0x10E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E314u;
label_10e314:
    // 0x10e314: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e318: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e31c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10e320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e328: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e32c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E334u;
    // 0x10e334: 0x0  nop
    ctx->pc = 0x10e334u;
    // NOP
    // 0x10e338: 0x0  nop
    ctx->pc = 0x10e338u;
    // NOP
    // 0x10e33c: 0x0  nop
    ctx->pc = 0x10e33cu;
    // NOP
    ctx->pc = 0x10e340u;
}
