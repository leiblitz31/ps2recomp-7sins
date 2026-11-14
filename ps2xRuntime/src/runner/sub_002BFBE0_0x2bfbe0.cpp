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

// Function: sub_002BFBE0
// Address: 0x2bfbe0 - 0x2bfc20
void sub_002BFBE0_0x2bfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFBE0_0x2bfbe0");
#endif

    switch (ctx->pc) {
        case 0x2bfc08u: goto label_2bfc08;
        default: break;
    }

    ctx->pc = 0x2bfbe0u;

    // 0x2bfbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bfbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bfbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bfbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bfbe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bfbec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bfbf0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2bfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2bfbf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bfbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfbf8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfbfc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2bfbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfc00: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x2BFC00u;
    SET_GPR_U32(ctx, 31, 0x2BFC08u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x2BFC00u, 0x2BFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC08u;
label_2bfc08:
    // 0x2bfc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bfc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfc0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bfc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bfc10: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC18u;
    // 0x2bfc18: 0x0  nop
    ctx->pc = 0x2bfc18u;
    // NOP
    // 0x2bfc1c: 0x0  nop
    ctx->pc = 0x2bfc1cu;
    // NOP
    ctx->pc = 0x2bfc20u;
}
