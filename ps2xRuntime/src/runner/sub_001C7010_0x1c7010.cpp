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

// Function: sub_001C7010
// Address: 0x1c7010 - 0x1c7060
void sub_001C7010_0x1c7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7010_0x1c7010");
#endif

    switch (ctx->pc) {
        case 0x1c7034u: goto label_1c7034;
        default: break;
    }

    ctx->pc = 0x1c7010u;

    // 0x1c7010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c7010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c7014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c701c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c7020: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c7020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c7024: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c7024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7028: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c7028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c702c: 0xc071c18  jal         func_1C7060
    ctx->pc = 0x1C702Cu;
    SET_GPR_U32(ctx, 31, 0x1C7034u);
    ctx->pc = 0x1C7060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7060u, 0x1C702Cu, 0x1C7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7034u;
label_1c7034:
    // 0x1c7034: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c7034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c703c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c703cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c7040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7048: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c704c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7054u;
    // 0x1c7054: 0x0  nop
    ctx->pc = 0x1c7054u;
    // NOP
    // 0x1c7058: 0x0  nop
    ctx->pc = 0x1c7058u;
    // NOP
    // 0x1c705c: 0x0  nop
    ctx->pc = 0x1c705cu;
    // NOP
    ctx->pc = 0x1c7060u;
}
