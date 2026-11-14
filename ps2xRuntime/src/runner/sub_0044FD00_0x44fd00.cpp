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

// Function: sub_0044FD00
// Address: 0x44fd00 - 0x44fd30
void sub_0044FD00_0x44fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FD00_0x44fd00");
#endif

    switch (ctx->pc) {
        case 0x44fd1cu: goto label_44fd1c;
        default: break;
    }

    ctx->pc = 0x44fd00u;

    // 0x44fd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44fd04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44fd08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44fd0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44fd10: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44fd14: 0xc113f28  jal         func_44FCA0
    ctx->pc = 0x44FD14u;
    SET_GPR_U32(ctx, 31, 0x44FD1Cu);
    ctx->pc = 0x44FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FCA0u, 0x44FD14u, 0x44FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FD1Cu;
label_44fd1c:
    // 0x44fd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fd20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x44fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x44FD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FD2Cu;
    // 0x44fd2c: 0x0  nop
    ctx->pc = 0x44fd2cu;
    // NOP
    ctx->pc = 0x44fd30u;
}
