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

// Function: sub_00458E70
// Address: 0x458e70 - 0x458ea0
void sub_00458E70_0x458e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458E70_0x458e70");
#endif

    switch (ctx->pc) {
        case 0x458e84u: goto label_458e84;
        default: break;
    }

    ctx->pc = 0x458e70u;

    // 0x458e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x458e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x458e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458e78: 0x8f84bf40  lw          $a0, -0x40C0($gp)
    ctx->pc = 0x458e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950720)));
    // 0x458e7c: 0xc043104  jal         func_10C410
    ctx->pc = 0x458E7Cu;
    SET_GPR_U32(ctx, 31, 0x458E84u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x458E7Cu, 0x458E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458E84u;
label_458e84:
    // 0x458e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458e88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x458e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x458e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x458E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458E94u;
    // 0x458e94: 0x0  nop
    ctx->pc = 0x458e94u;
    // NOP
    // 0x458e98: 0x0  nop
    ctx->pc = 0x458e98u;
    // NOP
    // 0x458e9c: 0x0  nop
    ctx->pc = 0x458e9cu;
    // NOP
    ctx->pc = 0x458ea0u;
}
