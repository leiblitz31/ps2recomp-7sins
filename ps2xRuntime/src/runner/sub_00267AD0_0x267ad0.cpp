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

// Function: sub_00267AD0
// Address: 0x267ad0 - 0x267b10
void sub_00267AD0_0x267ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267AD0_0x267ad0");
#endif

    switch (ctx->pc) {
        case 0x267b00u: goto label_267b00;
        default: break;
    }

    ctx->pc = 0x267ad0u;

    // 0x267ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x267ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x267ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267ad8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x267ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x267adc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x267adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x267ae0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x267ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x267ae4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x267ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267ae8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x267ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267aec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x267aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267af0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x267af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x267af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267af8: 0xc099ec4  jal         func_267B10
    ctx->pc = 0x267AF8u;
    SET_GPR_U32(ctx, 31, 0x267B00u);
    ctx->pc = 0x267B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267B10u, 0x267AF8u, 0x267B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267B00u;
label_267b00:
    // 0x267b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267b04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x267b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x267b08: 0x3e00008  jr          $ra
    ctx->pc = 0x267B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267B10u;
}
