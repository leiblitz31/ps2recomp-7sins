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

// Function: sub_0012AC70
// Address: 0x12ac70 - 0x12aca0
void sub_0012AC70_0x12ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AC70_0x12ac70");
#endif

    switch (ctx->pc) {
        case 0x12ac88u: goto label_12ac88;
        default: break;
    }

    ctx->pc = 0x12ac70u;

    // 0x12ac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ac74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ac78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12ac7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ac80: 0xc049e5c  jal         func_127970
    ctx->pc = 0x12AC80u;
    SET_GPR_U32(ctx, 31, 0x12AC88u);
    ctx->pc = 0x127970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127970u, 0x12AC80u, 0x12AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC88u;
label_12ac88:
    // 0x12ac88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ac8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC9Cu;
    // 0x12ac9c: 0x0  nop
    ctx->pc = 0x12ac9cu;
    // NOP
    ctx->pc = 0x12aca0u;
}
