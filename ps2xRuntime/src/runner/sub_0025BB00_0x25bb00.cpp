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

// Function: sub_0025BB00
// Address: 0x25bb00 - 0x25bb40
void sub_0025BB00_0x25bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BB00_0x25bb00");
#endif

    switch (ctx->pc) {
        case 0x25bb20u: goto label_25bb20;
        default: break;
    }

    ctx->pc = 0x25bb00u;

    // 0x25bb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25bb04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bb08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25bb0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bb10: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25bb14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25bb18: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25BB18u;
    SET_GPR_U32(ctx, 31, 0x25BB20u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25BB18u, 0x25BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB20u;
label_25bb20:
    // 0x25bb20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bb28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25bb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25bb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BB34u;
    // 0x25bb34: 0x0  nop
    ctx->pc = 0x25bb34u;
    // NOP
    // 0x25bb38: 0x0  nop
    ctx->pc = 0x25bb38u;
    // NOP
    // 0x25bb3c: 0x0  nop
    ctx->pc = 0x25bb3cu;
    // NOP
    ctx->pc = 0x25bb40u;
}
