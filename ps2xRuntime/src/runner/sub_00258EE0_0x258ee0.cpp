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

// Function: sub_00258EE0
// Address: 0x258ee0 - 0x258f20
void sub_00258EE0_0x258ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258EE0_0x258ee0");
#endif

    switch (ctx->pc) {
        case 0x258f08u: goto label_258f08;
        default: break;
    }

    ctx->pc = 0x258ee0u;

    // 0x258ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258eec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258ef0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x258ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x258ef4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258ef8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x258ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258efc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x258efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258f00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x258F00u;
    SET_GPR_U32(ctx, 31, 0x258F08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x258F00u, 0x258F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F08u;
label_258f08:
    // 0x258f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258f0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258f10: 0x3e00008  jr          $ra
    ctx->pc = 0x258F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258F18u;
    // 0x258f18: 0x0  nop
    ctx->pc = 0x258f18u;
    // NOP
    // 0x258f1c: 0x0  nop
    ctx->pc = 0x258f1cu;
    // NOP
    ctx->pc = 0x258f20u;
}
