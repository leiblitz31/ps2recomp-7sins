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

// Function: sub_001E1BC0
// Address: 0x1e1bc0 - 0x1e1c00
void sub_001E1BC0_0x1e1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1BC0_0x1e1bc0");
#endif

    switch (ctx->pc) {
        case 0x1e1bdcu: goto label_1e1bdc;
        default: break;
    }

    ctx->pc = 0x1e1bc0u;

    // 0x1e1bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e1bcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e1bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e1bd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1bd4: 0xc078700  jal         func_1E1C00
    ctx->pc = 0x1E1BD4u;
    SET_GPR_U32(ctx, 31, 0x1E1BDCu);
    ctx->pc = 0x1E1C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C00u, 0x1E1BD4u, 0x1E1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1BDCu;
label_1e1bdc:
    // 0x1e1bdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1be0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e1be4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1be8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1bf4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e1bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1C00u;
}
