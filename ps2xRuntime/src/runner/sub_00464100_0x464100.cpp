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

// Function: sub_00464100
// Address: 0x464100 - 0x464130
void sub_00464100_0x464100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464100_0x464100");
#endif

    switch (ctx->pc) {
        case 0x464110u: goto label_464110;
        default: break;
    }

    ctx->pc = 0x464100u;

    // 0x464100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x464100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x464104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464108: 0xc11907c  jal         func_4641F0
    ctx->pc = 0x464108u;
    SET_GPR_U32(ctx, 31, 0x464110u);
    ctx->pc = 0x4641F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4641F0u, 0x464108u, 0x464110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464110u;
label_464110:
    // 0x464110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x464110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x464114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464118: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x464118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46411c: 0x3e00008  jr          $ra
    ctx->pc = 0x46411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464124u;
    // 0x464124: 0x0  nop
    ctx->pc = 0x464124u;
    // NOP
    // 0x464128: 0x0  nop
    ctx->pc = 0x464128u;
    // NOP
    // 0x46412c: 0x0  nop
    ctx->pc = 0x46412cu;
    // NOP
    ctx->pc = 0x464130u;
}
