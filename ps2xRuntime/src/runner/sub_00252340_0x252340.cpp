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

// Function: sub_00252340
// Address: 0x252340 - 0x252370
void sub_00252340_0x252340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252340_0x252340");
#endif

    switch (ctx->pc) {
        case 0x25235cu: goto label_25235c;
        default: break;
    }

    ctx->pc = 0x252340u;

    // 0x252340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25234c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252350: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x252350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x252354: 0xc094fe8  jal         func_253FA0
    ctx->pc = 0x252354u;
    SET_GPR_U32(ctx, 31, 0x25235Cu);
    ctx->pc = 0x253FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FA0u, 0x252354u, 0x25235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25235Cu;
label_25235c:
    // 0x25235c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252364: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252368: 0x3e00008  jr          $ra
    ctx->pc = 0x252368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252370u;
}
