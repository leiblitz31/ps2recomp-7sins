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

// Function: sub_001891F0
// Address: 0x1891f0 - 0x189230
void sub_001891F0_0x1891f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001891F0_0x1891f0");
#endif

    switch (ctx->pc) {
        case 0x189214u: goto label_189214;
        default: break;
    }

    ctx->pc = 0x1891f0u;

    // 0x1891f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1891f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1891f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1891f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1891f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1891f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1891fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1891fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x189200: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189204: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x189204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18920c: 0xc06248c  jal         func_189230
    ctx->pc = 0x18920Cu;
    SET_GPR_U32(ctx, 31, 0x189214u);
    ctx->pc = 0x189230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189230u, 0x18920Cu, 0x189214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189214u;
label_189214:
    // 0x189214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18921c: 0x3e00008  jr          $ra
    ctx->pc = 0x18921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18921Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189224u;
    // 0x189224: 0x0  nop
    ctx->pc = 0x189224u;
    // NOP
    // 0x189228: 0x0  nop
    ctx->pc = 0x189228u;
    // NOP
    // 0x18922c: 0x0  nop
    ctx->pc = 0x18922cu;
    // NOP
    ctx->pc = 0x189230u;
}
