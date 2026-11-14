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

// Function: sub_00252D00
// Address: 0x252d00 - 0x252d30
void sub_00252D00_0x252d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D00_0x252d00");
#endif

    switch (ctx->pc) {
        case 0x252d18u: goto label_252d18;
        default: break;
    }

    ctx->pc = 0x252d00u;

    // 0x252d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x252d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d10: 0xc094fd4  jal         func_253F50
    ctx->pc = 0x252D10u;
    SET_GPR_U32(ctx, 31, 0x252D18u);
    ctx->pc = 0x253F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F50u, 0x252D10u, 0x252D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D18u;
label_252d18:
    // 0x252d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252d20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x252d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x252d24: 0x3e00008  jr          $ra
    ctx->pc = 0x252D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D2Cu;
    // 0x252d2c: 0x0  nop
    ctx->pc = 0x252d2cu;
    // NOP
    ctx->pc = 0x252d30u;
}
