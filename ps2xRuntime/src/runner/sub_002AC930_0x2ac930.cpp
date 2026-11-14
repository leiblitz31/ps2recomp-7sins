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

// Function: sub_002AC930
// Address: 0x2ac930 - 0x2ac970
void sub_002AC930_0x2ac930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC930_0x2ac930");
#endif

    switch (ctx->pc) {
        case 0x2ac948u: goto label_2ac948;
        case 0x2ac958u: goto label_2ac958;
        default: break;
    }

    ctx->pc = 0x2ac930u;

    // 0x2ac930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac938: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ac938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ac93c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ac940: 0xc0ab29c  jal         func_2ACA70
    ctx->pc = 0x2AC940u;
    SET_GPR_U32(ctx, 31, 0x2AC948u);
    ctx->pc = 0x2ACA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACA70u, 0x2AC940u, 0x2AC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC948u;
label_2ac948:
    // 0x2ac948: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac94c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ac94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac950: 0xc0ab25c  jal         func_2AC970
    ctx->pc = 0x2AC950u;
    SET_GPR_U32(ctx, 31, 0x2AC958u);
    ctx->pc = 0x2AC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC970u, 0x2AC950u, 0x2AC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC958u;
label_2ac958:
    // 0x2ac958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac964: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC96Cu;
    // 0x2ac96c: 0x0  nop
    ctx->pc = 0x2ac96cu;
    // NOP
    ctx->pc = 0x2ac970u;
}
