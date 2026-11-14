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

// Function: sub_00265BD0
// Address: 0x265bd0 - 0x265c10
void sub_00265BD0_0x265bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265BD0_0x265bd0");
#endif

    switch (ctx->pc) {
        case 0x265bf8u: goto label_265bf8;
        default: break;
    }

    ctx->pc = 0x265bd0u;

    // 0x265bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265bd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x265bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x265bdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x265bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x265be0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x265be0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x265be4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265be8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x265be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265bec: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x265becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x265bf0: 0xc099704  jal         func_265C10
    ctx->pc = 0x265BF0u;
    SET_GPR_U32(ctx, 31, 0x265BF8u);
    ctx->pc = 0x265C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C10u, 0x265BF0u, 0x265BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BF8u;
label_265bf8:
    // 0x265bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265bfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x265bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x265c00: 0x3e00008  jr          $ra
    ctx->pc = 0x265C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265C08u;
    // 0x265c08: 0x0  nop
    ctx->pc = 0x265c08u;
    // NOP
    // 0x265c0c: 0x0  nop
    ctx->pc = 0x265c0cu;
    // NOP
    ctx->pc = 0x265c10u;
}
