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

// Function: sub_00189230
// Address: 0x189230 - 0x189270
void sub_00189230_0x189230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189230_0x189230");
#endif

    switch (ctx->pc) {
        case 0x189258u: goto label_189258;
        default: break;
    }

    ctx->pc = 0x189230u;

    // 0x189230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x189238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18923c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x189240: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x189240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x189244: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189248: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x189248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18924c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x189250: 0xc06249c  jal         func_189270
    ctx->pc = 0x189250u;
    SET_GPR_U32(ctx, 31, 0x189258u);
    ctx->pc = 0x189270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189270u, 0x189250u, 0x189258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189258u;
label_189258:
    // 0x189258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18925c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18925cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x189260: 0x3e00008  jr          $ra
    ctx->pc = 0x189260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189268u;
    // 0x189268: 0x0  nop
    ctx->pc = 0x189268u;
    // NOP
    // 0x18926c: 0x0  nop
    ctx->pc = 0x18926cu;
    // NOP
    ctx->pc = 0x189270u;
}
