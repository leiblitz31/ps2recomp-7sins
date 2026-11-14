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

// Function: sub_00221150
// Address: 0x221150 - 0x2211a0
void sub_00221150_0x221150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221150_0x221150");
#endif

    switch (ctx->pc) {
        case 0x221174u: goto label_221174;
        default: break;
    }

    ctx->pc = 0x221150u;

    // 0x221150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221158: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22115c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22115cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221160: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x221160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x221164: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221168: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22116c: 0xc0862ec  jal         func_218BB0
    ctx->pc = 0x22116Cu;
    SET_GPR_U32(ctx, 31, 0x221174u);
    ctx->pc = 0x218BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB0u, 0x22116Cu, 0x221174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221174u;
label_221174:
    // 0x221174: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221178: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x221178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22117c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221180: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x221180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x221184: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22118c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22118cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x221190: 0x3e00008  jr          $ra
    ctx->pc = 0x221190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221198u;
    // 0x221198: 0x0  nop
    ctx->pc = 0x221198u;
    // NOP
    // 0x22119c: 0x0  nop
    ctx->pc = 0x22119cu;
    // NOP
    ctx->pc = 0x2211a0u;
}
