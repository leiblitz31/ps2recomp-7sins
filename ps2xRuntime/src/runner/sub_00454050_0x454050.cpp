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

// Function: sub_00454050
// Address: 0x454050 - 0x454080
void sub_00454050_0x454050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00454050_0x454050");
#endif

    switch (ctx->pc) {
        case 0x454068u: goto label_454068;
        default: break;
    }

    ctx->pc = 0x454050u;

    // 0x454050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x454050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x454054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x454054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x454058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x454058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45405c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x454060: 0xc114a58  jal         func_452960
    ctx->pc = 0x454060u;
    SET_GPR_U32(ctx, 31, 0x454068u);
    ctx->pc = 0x452960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452960u, 0x454060u, 0x454068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454068u;
label_454068:
    // 0x454068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x454068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45406c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45406cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x454070: 0x3e00008  jr          $ra
    ctx->pc = 0x454070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x454070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454078u;
    // 0x454078: 0x0  nop
    ctx->pc = 0x454078u;
    // NOP
    // 0x45407c: 0x0  nop
    ctx->pc = 0x45407cu;
    // NOP
    ctx->pc = 0x454080u;
}
