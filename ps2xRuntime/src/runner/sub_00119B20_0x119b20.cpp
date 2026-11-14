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

// Function: sub_00119B20
// Address: 0x119b20 - 0x119b50
void sub_00119B20_0x119b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B20_0x119b20");
#endif

    switch (ctx->pc) {
        case 0x119b34u: goto label_119b34;
        default: break;
    }

    ctx->pc = 0x119b20u;

    // 0x119b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119b28: 0x8f84b9b8  lw          $a0, -0x4648($gp)
    ctx->pc = 0x119b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949304)));
    // 0x119b2c: 0xc046218  jal         func_118860
    ctx->pc = 0x119B2Cu;
    SET_GPR_U32(ctx, 31, 0x119B34u);
    ctx->pc = 0x118860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118860u, 0x119B2Cu, 0x119B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B34u;
label_119b34:
    // 0x119b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x119b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x119B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B44u;
    // 0x119b44: 0x0  nop
    ctx->pc = 0x119b44u;
    // NOP
    // 0x119b48: 0x0  nop
    ctx->pc = 0x119b48u;
    // NOP
    // 0x119b4c: 0x0  nop
    ctx->pc = 0x119b4cu;
    // NOP
    ctx->pc = 0x119b50u;
}
