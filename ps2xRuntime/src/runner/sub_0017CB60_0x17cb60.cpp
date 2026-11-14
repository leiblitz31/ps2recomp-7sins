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

// Function: sub_0017CB60
// Address: 0x17cb60 - 0x17cba0
void sub_0017CB60_0x17cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CB60_0x17cb60");
#endif

    switch (ctx->pc) {
        case 0x17cb90u: goto label_17cb90;
        default: break;
    }

    ctx->pc = 0x17cb60u;

    // 0x17cb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17cb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17cb68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17cb6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17cb70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17cb74: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x17cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x17cb78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb7c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb80: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cb84: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cb88: 0xc060270  jal         func_1809C0
    ctx->pc = 0x17CB88u;
    SET_GPR_U32(ctx, 31, 0x17CB90u);
    ctx->pc = 0x1809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1809C0u, 0x17CB88u, 0x17CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB90u;
label_17cb90:
    // 0x17cb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17cb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb94: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17cb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CBA0u;
}
