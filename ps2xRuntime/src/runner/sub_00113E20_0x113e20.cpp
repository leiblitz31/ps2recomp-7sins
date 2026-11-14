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

// Function: sub_00113E20
// Address: 0x113e20 - 0x113e50
void sub_00113E20_0x113e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E20_0x113e20");
#endif

    switch (ctx->pc) {
        case 0x113e38u: goto label_113e38;
        default: break;
    }

    ctx->pc = 0x113e20u;

    // 0x113e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x113e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113e30: 0xc044f94  jal         func_113E50
    ctx->pc = 0x113E30u;
    SET_GPR_U32(ctx, 31, 0x113E38u);
    ctx->pc = 0x113E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E50u, 0x113E30u, 0x113E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E38u;
label_113e38:
    // 0x113e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113e40: 0x3e00008  jr          $ra
    ctx->pc = 0x113E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E48u;
    // 0x113e48: 0x0  nop
    ctx->pc = 0x113e48u;
    // NOP
    // 0x113e4c: 0x0  nop
    ctx->pc = 0x113e4cu;
    // NOP
    ctx->pc = 0x113e50u;
}
