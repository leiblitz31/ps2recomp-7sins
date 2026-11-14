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

// Function: sub_0017BB20
// Address: 0x17bb20 - 0x17bb60
void sub_0017BB20_0x17bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BB20_0x17bb20");
#endif

    switch (ctx->pc) {
        case 0x17bb40u: goto label_17bb40;
        default: break;
    }

    ctx->pc = 0x17bb20u;

    // 0x17bb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bb28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bb2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17bb30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb38: 0xc05eed8  jal         func_17BB60
    ctx->pc = 0x17BB38u;
    SET_GPR_U32(ctx, 31, 0x17BB40u);
    ctx->pc = 0x17BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB60u, 0x17BB38u, 0x17BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BB40u;
label_17bb40:
    // 0x17bb40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17bb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB54u;
    // 0x17bb54: 0x0  nop
    ctx->pc = 0x17bb54u;
    // NOP
    // 0x17bb58: 0x0  nop
    ctx->pc = 0x17bb58u;
    // NOP
    // 0x17bb5c: 0x0  nop
    ctx->pc = 0x17bb5cu;
    // NOP
    ctx->pc = 0x17bb60u;
}
