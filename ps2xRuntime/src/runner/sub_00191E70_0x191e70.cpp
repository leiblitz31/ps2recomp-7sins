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

// Function: sub_00191E70
// Address: 0x191e70 - 0x191ea0
void sub_00191E70_0x191e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191E70_0x191e70");
#endif

    switch (ctx->pc) {
        case 0x191e8cu: goto label_191e8c;
        default: break;
    }

    ctx->pc = 0x191e70u;

    // 0x191e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191e7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191e80: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x191e84: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x191E84u;
    SET_GPR_U32(ctx, 31, 0x191E8Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x191E84u, 0x191E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E8Cu;
label_191e8c:
    // 0x191e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191e90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x191e94: 0x3e00008  jr          $ra
    ctx->pc = 0x191E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191E9Cu;
    // 0x191e9c: 0x0  nop
    ctx->pc = 0x191e9cu;
    // NOP
    ctx->pc = 0x191ea0u;
}
