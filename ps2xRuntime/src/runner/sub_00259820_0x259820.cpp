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

// Function: sub_00259820
// Address: 0x259820 - 0x259860
void sub_00259820_0x259820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259820_0x259820");
#endif

    switch (ctx->pc) {
        case 0x259840u: goto label_259840;
        default: break;
    }

    ctx->pc = 0x259820u;

    // 0x259820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25982c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259830: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259834: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259838: 0xc096618  jal         func_259860
    ctx->pc = 0x259838u;
    SET_GPR_U32(ctx, 31, 0x259840u);
    ctx->pc = 0x259860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259860u, 0x259838u, 0x259840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259840u;
label_259840:
    // 0x259840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259848: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25984c: 0x3e00008  jr          $ra
    ctx->pc = 0x25984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259854u;
    // 0x259854: 0x0  nop
    ctx->pc = 0x259854u;
    // NOP
    // 0x259858: 0x0  nop
    ctx->pc = 0x259858u;
    // NOP
    // 0x25985c: 0x0  nop
    ctx->pc = 0x25985cu;
    // NOP
    ctx->pc = 0x259860u;
}
