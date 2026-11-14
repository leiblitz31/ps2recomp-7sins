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

// Function: sub_0025D940
// Address: 0x25d940 - 0x25d980
void sub_0025D940_0x25d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D940_0x25d940");
#endif

    switch (ctx->pc) {
        case 0x25d960u: goto label_25d960;
        default: break;
    }

    ctx->pc = 0x25d940u;

    // 0x25d940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25d948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25d94c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25d950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d954: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25d954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d958: 0xc097660  jal         func_25D980
    ctx->pc = 0x25D958u;
    SET_GPR_U32(ctx, 31, 0x25D960u);
    ctx->pc = 0x25D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D980u, 0x25D958u, 0x25D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D960u;
label_25d960:
    // 0x25d960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d968: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d96c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D974u;
    // 0x25d974: 0x0  nop
    ctx->pc = 0x25d974u;
    // NOP
    // 0x25d978: 0x0  nop
    ctx->pc = 0x25d978u;
    // NOP
    // 0x25d97c: 0x0  nop
    ctx->pc = 0x25d97cu;
    // NOP
    ctx->pc = 0x25d980u;
}
