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

// Function: sub_0046A1E0
// Address: 0x46a1e0 - 0x46a250
void sub_0046A1E0_0x46a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A1E0_0x46a1e0");
#endif

    switch (ctx->pc) {
        case 0x46a208u: goto label_46a208;
        case 0x46a220u: goto label_46a220;
        case 0x46a238u: goto label_46a238;
        default: break;
    }

    ctx->pc = 0x46a1e0u;

    // 0x46a1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a1ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a1f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a1f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a1f8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46a1fc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a200: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46A200u;
    SET_GPR_U32(ctx, 31, 0x46A208u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46A200u, 0x46A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A208u;
label_46a208:
    // 0x46a208: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a20c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a210: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x46a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x46a214: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x46a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46a218: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x46A218u;
    SET_GPR_U32(ctx, 31, 0x46A220u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x46A218u, 0x46A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A220u;
label_46a220:
    // 0x46a220: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a224: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a228: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x46a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x46a22c: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x46a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x46a230: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x46A230u;
    SET_GPR_U32(ctx, 31, 0x46A238u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x46A230u, 0x46A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A238u;
label_46a238:
    // 0x46a238: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a240: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a244: 0x3e00008  jr          $ra
    ctx->pc = 0x46A244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A24Cu;
    // 0x46a24c: 0x0  nop
    ctx->pc = 0x46a24cu;
    // NOP
    ctx->pc = 0x46a250u;
}
