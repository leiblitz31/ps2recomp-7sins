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

// Function: sub_0044FE70
// Address: 0x44fe70 - 0x44fea0
void sub_0044FE70_0x44fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FE70_0x44fe70");
#endif

    switch (ctx->pc) {
        case 0x44fe8cu: goto label_44fe8c;
        default: break;
    }

    ctx->pc = 0x44fe70u;

    // 0x44fe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44fe74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44fe78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44fe7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44fe80: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44fe84: 0xc113fa8  jal         func_44FEA0
    ctx->pc = 0x44FE84u;
    SET_GPR_U32(ctx, 31, 0x44FE8Cu);
    ctx->pc = 0x44FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FEA0u, 0x44FE84u, 0x44FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FE8Cu;
label_44fe8c:
    // 0x44fe8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44fe90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fe94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44fe94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44fe98: 0x3e00008  jr          $ra
    ctx->pc = 0x44FE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FEA0u;
}
