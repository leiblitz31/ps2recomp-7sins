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

// Function: sub_0017CC10
// Address: 0x17cc10 - 0x17cc50
void sub_0017CC10_0x17cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CC10_0x17cc10");
#endif

    switch (ctx->pc) {
        case 0x17cc38u: goto label_17cc38;
        default: break;
    }

    ctx->pc = 0x17cc10u;

    // 0x17cc10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17cc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cc18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17cc1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17cc20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17cc24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cc28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cc2c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x17cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cc30: 0xc041934  jal         func_1064D0
    ctx->pc = 0x17CC30u;
    SET_GPR_U32(ctx, 31, 0x17CC38u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x17CC30u, 0x17CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CC38u;
label_17cc38:
    // 0x17cc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cc3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17cc3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17cc40: 0x3e00008  jr          $ra
    ctx->pc = 0x17CC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CC48u;
    // 0x17cc48: 0x0  nop
    ctx->pc = 0x17cc48u;
    // NOP
    // 0x17cc4c: 0x0  nop
    ctx->pc = 0x17cc4cu;
    // NOP
    ctx->pc = 0x17cc50u;
}
