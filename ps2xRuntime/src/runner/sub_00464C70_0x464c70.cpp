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

// Function: sub_00464C70
// Address: 0x464c70 - 0x464ca0
void sub_00464C70_0x464c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464C70_0x464c70");
#endif

    switch (ctx->pc) {
        case 0x464c8cu: goto label_464c8c;
        default: break;
    }

    ctx->pc = 0x464c70u;

    // 0x464c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x464c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x464c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464c7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x464c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464c80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x464c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464c84: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x464C84u;
    SET_GPR_U32(ctx, 31, 0x464C8Cu);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x464C84u, 0x464C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C8Cu;
label_464c8c:
    // 0x464c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x464c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464c90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x464c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464c94: 0x3e00008  jr          $ra
    ctx->pc = 0x464C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464C9Cu;
    // 0x464c9c: 0x0  nop
    ctx->pc = 0x464c9cu;
    // NOP
    ctx->pc = 0x464ca0u;
}
