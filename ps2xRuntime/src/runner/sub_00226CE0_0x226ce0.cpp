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

// Function: sub_00226CE0
// Address: 0x226ce0 - 0x226d20
void sub_00226CE0_0x226ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226CE0_0x226ce0");
#endif

    switch (ctx->pc) {
        case 0x226cfcu: goto label_226cfc;
        default: break;
    }

    ctx->pc = 0x226ce0u;

    // 0x226ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x226ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x226cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226cf0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x226cf4: 0xc089b5c  jal         func_226D70
    ctx->pc = 0x226CF4u;
    SET_GPR_U32(ctx, 31, 0x226CFCu);
    ctx->pc = 0x226D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226D70u, 0x226CF4u, 0x226CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CFCu;
label_226cfc:
    // 0x226cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d00: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x226d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x226d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x226d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x226d0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x226d18: 0x3e00008  jr          $ra
    ctx->pc = 0x226D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D20u;
}
