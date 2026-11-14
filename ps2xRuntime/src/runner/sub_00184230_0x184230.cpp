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

// Function: sub_00184230
// Address: 0x184230 - 0x184270
void sub_00184230_0x184230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184230_0x184230");
#endif

    switch (ctx->pc) {
        case 0x184248u: goto label_184248;
        case 0x184258u: goto label_184258;
        default: break;
    }

    ctx->pc = 0x184230u;

    // 0x184230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18423c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18423cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x184240: 0xc0610dc  jal         func_184370
    ctx->pc = 0x184240u;
    SET_GPR_U32(ctx, 31, 0x184248u);
    ctx->pc = 0x184370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184370u, 0x184240u, 0x184248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184248u;
label_184248:
    // 0x184248: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18424c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184250: 0xc06109c  jal         func_184270
    ctx->pc = 0x184250u;
    SET_GPR_U32(ctx, 31, 0x184258u);
    ctx->pc = 0x184270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184270u, 0x184250u, 0x184258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184258u;
label_184258:
    // 0x184258: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18425c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18425cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184260: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184264: 0x3e00008  jr          $ra
    ctx->pc = 0x184264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18426Cu;
    // 0x18426c: 0x0  nop
    ctx->pc = 0x18426cu;
    // NOP
    ctx->pc = 0x184270u;
}
