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

// Function: sub_00283570
// Address: 0x283570 - 0x2835b0
void sub_00283570_0x283570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283570_0x283570");
#endif

    switch (ctx->pc) {
        case 0x28358cu: goto label_28358c;
        case 0x28359cu: goto label_28359c;
        default: break;
    }

    ctx->pc = 0x283570u;

    // 0x283570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x283578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28357c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28357cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x283580: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283584: 0xc0a0268  jal         func_2809A0
    ctx->pc = 0x283584u;
    SET_GPR_U32(ctx, 31, 0x28358Cu);
    ctx->pc = 0x2809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809A0u, 0x283584u, 0x28358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28358Cu;
label_28358c:
    // 0x28358c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283590: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283594: 0xc0a0d6c  jal         func_2835B0
    ctx->pc = 0x283594u;
    SET_GPR_U32(ctx, 31, 0x28359Cu);
    ctx->pc = 0x2835B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2835B0u, 0x283594u, 0x28359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28359Cu;
label_28359c:
    // 0x28359c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28359cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2835a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2835a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2835A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835ACu;
    // 0x2835ac: 0x0  nop
    ctx->pc = 0x2835acu;
    // NOP
    ctx->pc = 0x2835b0u;
}
