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

// Function: sub_0028AC00
// Address: 0x28ac00 - 0x28ac40
void sub_0028AC00_0x28ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AC00_0x28ac00");
#endif

    switch (ctx->pc) {
        case 0x28ac20u: goto label_28ac20;
        default: break;
    }

    ctx->pc = 0x28ac00u;

    // 0x28ac00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ac04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ac08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28ac0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28ac10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ac18: 0xc0a2b10  jal         func_28AC40
    ctx->pc = 0x28AC18u;
    SET_GPR_U32(ctx, 31, 0x28AC20u);
    ctx->pc = 0x28AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC40u, 0x28AC18u, 0x28AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC20u;
label_28ac20:
    // 0x28ac20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28ac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC34u;
    // 0x28ac34: 0x0  nop
    ctx->pc = 0x28ac34u;
    // NOP
    // 0x28ac38: 0x0  nop
    ctx->pc = 0x28ac38u;
    // NOP
    // 0x28ac3c: 0x0  nop
    ctx->pc = 0x28ac3cu;
    // NOP
    ctx->pc = 0x28ac40u;
}
