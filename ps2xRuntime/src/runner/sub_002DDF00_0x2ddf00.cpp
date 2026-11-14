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

// Function: sub_002DDF00
// Address: 0x2ddf00 - 0x2ddf40
void sub_002DDF00_0x2ddf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF00_0x2ddf00");
#endif

    switch (ctx->pc) {
        case 0x2ddf24u: goto label_2ddf24;
        default: break;
    }

    ctx->pc = 0x2ddf00u;

    // 0x2ddf00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ddf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ddf04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddf08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ddf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ddf0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ddf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ddf10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ddf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddf14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ddf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddf18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ddf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf1c: 0xc0b77d0  jal         func_2DDF40
    ctx->pc = 0x2DDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DDF24u);
    ctx->pc = 0x2DDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF40u, 0x2DDF1Cu, 0x2DDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF24u;
label_2ddf24:
    // 0x2ddf24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddf28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ddf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ddf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF34u;
    // 0x2ddf34: 0x0  nop
    ctx->pc = 0x2ddf34u;
    // NOP
    // 0x2ddf38: 0x0  nop
    ctx->pc = 0x2ddf38u;
    // NOP
    // 0x2ddf3c: 0x0  nop
    ctx->pc = 0x2ddf3cu;
    // NOP
    ctx->pc = 0x2ddf40u;
}
