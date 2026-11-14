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

// Function: sub_00113E70
// Address: 0x113e70 - 0x113eb0
void sub_00113E70_0x113e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E70_0x113e70");
#endif

    switch (ctx->pc) {
        case 0x113e90u: goto label_113e90;
        default: break;
    }

    ctx->pc = 0x113e70u;

    // 0x113e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x113e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x113e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113e80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113e84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113e88: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x113E88u;
    SET_GPR_U32(ctx, 31, 0x113E90u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x113E88u, 0x113E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E90u;
label_113e90:
    // 0x113e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x113E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113EA4u;
    // 0x113ea4: 0x0  nop
    ctx->pc = 0x113ea4u;
    // NOP
    // 0x113ea8: 0x0  nop
    ctx->pc = 0x113ea8u;
    // NOP
    // 0x113eac: 0x0  nop
    ctx->pc = 0x113eacu;
    // NOP
    ctx->pc = 0x113eb0u;
}
