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

// Function: sub_001679D0
// Address: 0x1679d0 - 0x167a10
void sub_001679D0_0x1679d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001679D0_0x1679d0");
#endif

    switch (ctx->pc) {
        case 0x167a00u: goto label_167a00;
        default: break;
    }

    ctx->pc = 0x1679d0u;

    // 0x1679d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1679d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1679d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1679d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1679d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1679dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1679dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1679e0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1679e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1679e4: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1679e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1679e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1679e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1679ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1679f0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1679f4: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1679f8: 0xc059e38  jal         func_1678E0
    ctx->pc = 0x1679F8u;
    SET_GPR_U32(ctx, 31, 0x167A00u);
    ctx->pc = 0x1678E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1678E0u, 0x1679F8u, 0x167A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A00u;
label_167a00:
    // 0x167a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167a04: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167a08: 0x3e00008  jr          $ra
    ctx->pc = 0x167A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167A10u;
}
