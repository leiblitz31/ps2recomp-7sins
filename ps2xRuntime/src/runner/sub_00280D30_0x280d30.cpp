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

// Function: sub_00280D30
// Address: 0x280d30 - 0x280d70
void sub_00280D30_0x280d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280D30_0x280d30");
#endif

    switch (ctx->pc) {
        case 0x280d50u: goto label_280d50;
        default: break;
    }

    ctx->pc = 0x280d30u;

    // 0x280d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280d40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d48: 0xc0a035c  jal         func_280D70
    ctx->pc = 0x280D48u;
    SET_GPR_U32(ctx, 31, 0x280D50u);
    ctx->pc = 0x280D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D70u, 0x280D48u, 0x280D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D50u;
label_280d50:
    // 0x280d50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x280d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x280D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280D64u;
    // 0x280d64: 0x0  nop
    ctx->pc = 0x280d64u;
    // NOP
    // 0x280d68: 0x0  nop
    ctx->pc = 0x280d68u;
    // NOP
    // 0x280d6c: 0x0  nop
    ctx->pc = 0x280d6cu;
    // NOP
    ctx->pc = 0x280d70u;
}
