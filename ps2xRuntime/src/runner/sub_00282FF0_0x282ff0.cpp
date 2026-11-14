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

// Function: sub_00282FF0
// Address: 0x282ff0 - 0x283040
void sub_00282FF0_0x282ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282FF0_0x282ff0");
#endif

    switch (ctx->pc) {
        case 0x283014u: goto label_283014;
        default: break;
    }

    ctx->pc = 0x282ff0u;

    // 0x282ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x282ffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x283000: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x283000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x283004: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x283004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283008: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x283008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28300c: 0xc0a0c10  jal         func_283040
    ctx->pc = 0x28300Cu;
    SET_GPR_U32(ctx, 31, 0x283014u);
    ctx->pc = 0x283040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283040u, 0x28300Cu, 0x283014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283014u;
label_283014:
    // 0x283014: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x283014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283018: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x283018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28301c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283020: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x283020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x283024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x283024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28302c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283030: 0x3e00008  jr          $ra
    ctx->pc = 0x283030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283038u;
    // 0x283038: 0x0  nop
    ctx->pc = 0x283038u;
    // NOP
    // 0x28303c: 0x0  nop
    ctx->pc = 0x28303cu;
    // NOP
    ctx->pc = 0x283040u;
}
