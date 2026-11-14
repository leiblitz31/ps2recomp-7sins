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

// Function: sub_00149A10
// Address: 0x149a10 - 0x149a40
void sub_00149A10_0x149a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A10_0x149a10");
#endif

    switch (ctx->pc) {
        case 0x149a20u: goto label_149a20;
        default: break;
    }

    ctx->pc = 0x149a10u;

    // 0x149a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149a18: 0xc052638  jal         func_1498E0
    ctx->pc = 0x149A18u;
    SET_GPR_U32(ctx, 31, 0x149A20u);
    ctx->pc = 0x1498E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498E0u, 0x149A18u, 0x149A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A20u;
label_149a20:
    // 0x149a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x149A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A34u;
    // 0x149a34: 0x0  nop
    ctx->pc = 0x149a34u;
    // NOP
    // 0x149a38: 0x0  nop
    ctx->pc = 0x149a38u;
    // NOP
    // 0x149a3c: 0x0  nop
    ctx->pc = 0x149a3cu;
    // NOP
    ctx->pc = 0x149a40u;
}
