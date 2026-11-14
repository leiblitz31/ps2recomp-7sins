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

// Function: sub_00149A70
// Address: 0x149a70 - 0x149aa0
void sub_00149A70_0x149a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A70_0x149a70");
#endif

    switch (ctx->pc) {
        case 0x149a80u: goto label_149a80;
        default: break;
    }

    ctx->pc = 0x149a70u;

    // 0x149a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149a78: 0xc05264c  jal         func_149930
    ctx->pc = 0x149A78u;
    SET_GPR_U32(ctx, 31, 0x149A80u);
    ctx->pc = 0x149930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149930u, 0x149A78u, 0x149A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A80u;
label_149a80:
    // 0x149a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x149A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A94u;
    // 0x149a94: 0x0  nop
    ctx->pc = 0x149a94u;
    // NOP
    // 0x149a98: 0x0  nop
    ctx->pc = 0x149a98u;
    // NOP
    // 0x149a9c: 0x0  nop
    ctx->pc = 0x149a9cu;
    // NOP
    ctx->pc = 0x149aa0u;
}
