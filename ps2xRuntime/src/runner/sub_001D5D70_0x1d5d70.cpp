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

// Function: sub_001D5D70
// Address: 0x1d5d70 - 0x1d5da0
void sub_001D5D70_0x1d5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D70_0x1d5d70");
#endif

    switch (ctx->pc) {
        case 0x1d5d8cu: goto label_1d5d8c;
        default: break;
    }

    ctx->pc = 0x1d5d70u;

    // 0x1d5d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d5d7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5d80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5d84: 0xc075768  jal         func_1D5DA0
    ctx->pc = 0x1D5D84u;
    SET_GPR_U32(ctx, 31, 0x1D5D8Cu);
    ctx->pc = 0x1D5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DA0u, 0x1D5D84u, 0x1D5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D8Cu;
label_1d5d8c:
    // 0x1d5d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d5d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D9Cu;
    // 0x1d5d9c: 0x0  nop
    ctx->pc = 0x1d5d9cu;
    // NOP
    ctx->pc = 0x1d5da0u;
}
