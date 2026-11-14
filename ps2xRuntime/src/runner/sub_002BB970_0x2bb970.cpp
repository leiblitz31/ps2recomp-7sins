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

// Function: sub_002BB970
// Address: 0x2bb970 - 0x2bb9a0
void sub_002BB970_0x2bb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB970_0x2bb970");
#endif

    switch (ctx->pc) {
        case 0x2bb988u: goto label_2bb988;
        default: break;
    }

    ctx->pc = 0x2bb970u;

    // 0x2bb970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bb978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bb97c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb980: 0xc041a14  jal         func_106850
    ctx->pc = 0x2BB980u;
    SET_GPR_U32(ctx, 31, 0x2BB988u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2BB980u, 0x2BB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB988u;
label_2bb988:
    // 0x2bb988: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2bb988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bb98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb994: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB99Cu;
    // 0x2bb99c: 0x0  nop
    ctx->pc = 0x2bb99cu;
    // NOP
    ctx->pc = 0x2bb9a0u;
}
