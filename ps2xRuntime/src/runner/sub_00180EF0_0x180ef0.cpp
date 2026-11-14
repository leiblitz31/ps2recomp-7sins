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

// Function: sub_00180EF0
// Address: 0x180ef0 - 0x180f30
void sub_00180EF0_0x180ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180EF0_0x180ef0");
#endif

    switch (ctx->pc) {
        case 0x180f18u: goto label_180f18;
        default: break;
    }

    ctx->pc = 0x180ef0u;

    // 0x180ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x180efc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x180efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x180f00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x180f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x180f04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180f08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x180f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180f0c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x180f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180f10: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x180F10u;
    SET_GPR_U32(ctx, 31, 0x180F18u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x180F10u, 0x180F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F18u;
label_180f18:
    // 0x180f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180f1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x180f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x180f20: 0x3e00008  jr          $ra
    ctx->pc = 0x180F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F28u;
    // 0x180f28: 0x0  nop
    ctx->pc = 0x180f28u;
    // NOP
    // 0x180f2c: 0x0  nop
    ctx->pc = 0x180f2cu;
    // NOP
    ctx->pc = 0x180f30u;
}
