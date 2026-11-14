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

// Function: sub_0014A960
// Address: 0x14a960 - 0x14a990
void sub_0014A960_0x14a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A960_0x14a960");
#endif

    switch (ctx->pc) {
        case 0x14a978u: goto label_14a978;
        default: break;
    }

    ctx->pc = 0x14a960u;

    // 0x14a960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a96c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a970: 0xc052a64  jal         func_14A990
    ctx->pc = 0x14A970u;
    SET_GPR_U32(ctx, 31, 0x14A978u);
    ctx->pc = 0x14A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A990u, 0x14A970u, 0x14A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A978u;
label_14a978:
    // 0x14a978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a97c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14a980: 0x3e00008  jr          $ra
    ctx->pc = 0x14A980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A988u;
    // 0x14a988: 0x0  nop
    ctx->pc = 0x14a988u;
    // NOP
    // 0x14a98c: 0x0  nop
    ctx->pc = 0x14a98cu;
    // NOP
    ctx->pc = 0x14a990u;
}
