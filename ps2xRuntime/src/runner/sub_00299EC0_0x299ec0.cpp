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

// Function: sub_00299EC0
// Address: 0x299ec0 - 0x299f00
void sub_00299EC0_0x299ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299EC0_0x299ec0");
#endif

    switch (ctx->pc) {
        case 0x299ee4u: goto label_299ee4;
        default: break;
    }

    ctx->pc = 0x299ec0u;

    // 0x299ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x299eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x299ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ed4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x299ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299edc: 0xc0a67c0  jal         func_299F00
    ctx->pc = 0x299EDCu;
    SET_GPR_U32(ctx, 31, 0x299EE4u);
    ctx->pc = 0x299F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F00u, 0x299EDCu, 0x299EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EE4u;
label_299ee4:
    // 0x299ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299ee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299eec: 0x3e00008  jr          $ra
    ctx->pc = 0x299EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299EF4u;
    // 0x299ef4: 0x0  nop
    ctx->pc = 0x299ef4u;
    // NOP
    // 0x299ef8: 0x0  nop
    ctx->pc = 0x299ef8u;
    // NOP
    // 0x299efc: 0x0  nop
    ctx->pc = 0x299efcu;
    // NOP
    ctx->pc = 0x299f00u;
}
