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

// Function: sub_00213F60
// Address: 0x213f60 - 0x213fb0
void sub_00213F60_0x213f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213F60_0x213f60");
#endif

    switch (ctx->pc) {
        case 0x213f84u: goto label_213f84;
        default: break;
    }

    ctx->pc = 0x213f60u;

    // 0x213f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x213f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213f6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x213f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x213f70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x213f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x213f74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213f7c: 0xc084fec  jal         func_213FB0
    ctx->pc = 0x213F7Cu;
    SET_GPR_U32(ctx, 31, 0x213F84u);
    ctx->pc = 0x213FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FB0u, 0x213F7Cu, 0x213F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F84u;
label_213f84:
    // 0x213f84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213f88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x213f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x213f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213f98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x213f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x213f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x213F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213FA4u;
    // 0x213fa4: 0x0  nop
    ctx->pc = 0x213fa4u;
    // NOP
    // 0x213fa8: 0x0  nop
    ctx->pc = 0x213fa8u;
    // NOP
    // 0x213fac: 0x0  nop
    ctx->pc = 0x213facu;
    // NOP
    ctx->pc = 0x213fb0u;
}
