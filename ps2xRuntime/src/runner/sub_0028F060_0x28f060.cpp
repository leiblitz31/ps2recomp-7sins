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

// Function: sub_0028F060
// Address: 0x28f060 - 0x28f0b0
void sub_0028F060_0x28f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F060_0x28f060");
#endif

    switch (ctx->pc) {
        case 0x28f084u: goto label_28f084;
        default: break;
    }

    ctx->pc = 0x28f060u;

    // 0x28f060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28f068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28f06c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28f070: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28f070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28f074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28f074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f078: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f07c: 0xc0a2350  jal         func_288D40
    ctx->pc = 0x28F07Cu;
    SET_GPR_U32(ctx, 31, 0x28F084u);
    ctx->pc = 0x288D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288D40u, 0x28F07Cu, 0x28F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F084u;
label_28f084:
    // 0x28f084: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f088: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28f088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f08c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f090: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x28f090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x28f094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f09c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28f09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F0A8u;
    // 0x28f0a8: 0x0  nop
    ctx->pc = 0x28f0a8u;
    // NOP
    // 0x28f0ac: 0x0  nop
    ctx->pc = 0x28f0acu;
    // NOP
    ctx->pc = 0x28f0b0u;
}
