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

// Function: sub_00279470
// Address: 0x279470 - 0x2794a0
void sub_00279470_0x279470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279470_0x279470");
#endif

    switch (ctx->pc) {
        case 0x279488u: goto label_279488;
        default: break;
    }

    ctx->pc = 0x279470u;

    // 0x279470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27947c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279480: 0xc09e5b8  jal         func_2796E0
    ctx->pc = 0x279480u;
    SET_GPR_U32(ctx, 31, 0x279488u);
    ctx->pc = 0x2796E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796E0u, 0x279480u, 0x279488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27948c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279494: 0x3e00008  jr          $ra
    ctx->pc = 0x279494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27949Cu;
    // 0x27949c: 0x0  nop
    ctx->pc = 0x27949cu;
    // NOP
    ctx->pc = 0x2794a0u;
}
