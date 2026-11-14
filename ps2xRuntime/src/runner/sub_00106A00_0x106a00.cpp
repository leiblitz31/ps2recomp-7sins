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

// Function: sub_00106A00
// Address: 0x106a00 - 0x106a30
void sub_00106A00_0x106a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A00_0x106a00");
#endif

    switch (ctx->pc) {
        case 0x106a18u: goto label_106a18;
        default: break;
    }

    ctx->pc = 0x106a00u;

    // 0x106a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106a0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a10: 0xc041a8c  jal         func_106A30
    ctx->pc = 0x106A10u;
    SET_GPR_U32(ctx, 31, 0x106A18u);
    ctx->pc = 0x106A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A30u, 0x106A10u, 0x106A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A18u;
label_106a18:
    // 0x106a18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x106a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106a24: 0x3e00008  jr          $ra
    ctx->pc = 0x106A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A2Cu;
    // 0x106a2c: 0x0  nop
    ctx->pc = 0x106a2cu;
    // NOP
    ctx->pc = 0x106a30u;
}
