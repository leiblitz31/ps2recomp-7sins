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

// Function: sub_00139170
// Address: 0x139170 - 0x1391b0
void sub_00139170_0x139170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139170_0x139170");
#endif

    switch (ctx->pc) {
        case 0x139198u: goto label_139198;
        default: break;
    }

    ctx->pc = 0x139170u;

    // 0x139170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13917c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13917cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x139180: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x139180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x139184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139188: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x139188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13918c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x13918cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139190: 0xc04e46c  jal         func_1391B0
    ctx->pc = 0x139190u;
    SET_GPR_U32(ctx, 31, 0x139198u);
    ctx->pc = 0x1391B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1391B0u, 0x139190u, 0x139198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139198u;
label_139198:
    // 0x139198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13919c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1391a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1391a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1391A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1391A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1391ACu;
    // 0x1391ac: 0x0  nop
    ctx->pc = 0x1391acu;
    // NOP
    ctx->pc = 0x1391b0u;
}
