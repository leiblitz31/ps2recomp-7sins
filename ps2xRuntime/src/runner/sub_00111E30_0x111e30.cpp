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

// Function: sub_00111E30
// Address: 0x111e30 - 0x111e70
void sub_00111E30_0x111e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111E30_0x111e30");
#endif

    switch (ctx->pc) {
        case 0x111e58u: goto label_111e58;
        default: break;
    }

    ctx->pc = 0x111e30u;

    // 0x111e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111e38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111e3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x111e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x111e40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x111e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x111e44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111e48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x111e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e4c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x111e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111e50: 0xc04479c  jal         func_111E70
    ctx->pc = 0x111E50u;
    SET_GPR_U32(ctx, 31, 0x111E58u);
    ctx->pc = 0x111E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E70u, 0x111E50u, 0x111E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E58u;
label_111e58:
    // 0x111e58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111e60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x111e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x111e64: 0x3e00008  jr          $ra
    ctx->pc = 0x111E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111E6Cu;
    // 0x111e6c: 0x0  nop
    ctx->pc = 0x111e6cu;
    // NOP
    ctx->pc = 0x111e70u;
}
