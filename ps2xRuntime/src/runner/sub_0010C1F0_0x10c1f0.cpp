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

// Function: sub_0010C1F0
// Address: 0x10c1f0 - 0x10c230
void sub_0010C1F0_0x10c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C1F0_0x10c1f0");
#endif

    switch (ctx->pc) {
        case 0x10c214u: goto label_10c214;
        default: break;
    }

    ctx->pc = 0x10c1f0u;

    // 0x10c1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10c1fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10c200: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c204: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10c204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c20c: 0xc04308c  jal         func_10C230
    ctx->pc = 0x10C20Cu;
    SET_GPR_U32(ctx, 31, 0x10C214u);
    ctx->pc = 0x10C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C230u, 0x10C20Cu, 0x10C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C214u;
label_10c214:
    // 0x10c214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10c218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C224u;
    // 0x10c224: 0x0  nop
    ctx->pc = 0x10c224u;
    // NOP
    // 0x10c228: 0x0  nop
    ctx->pc = 0x10c228u;
    // NOP
    // 0x10c22c: 0x0  nop
    ctx->pc = 0x10c22cu;
    // NOP
    ctx->pc = 0x10c230u;
}
