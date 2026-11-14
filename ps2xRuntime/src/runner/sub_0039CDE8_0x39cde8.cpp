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

// Function: sub_0039CDE8
// Address: 0x39cde8 - 0x39ce08
void sub_0039CDE8_0x39cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CDE8_0x39cde8");
#endif

    switch (ctx->pc) {
        case 0x39cdf8u: goto label_39cdf8;
        default: break;
    }

    ctx->pc = 0x39cde8u;

    // 0x39cde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39cdec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cdf0: 0xc0e7f64  jal         func_39FD90
    ctx->pc = 0x39CDF0u;
    SET_GPR_U32(ctx, 31, 0x39CDF8u);
    ctx->pc = 0x39CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDF0u;
    // 0x39cdf4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FD90u, 0x39CDF0u, 0x39CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDF8u;
label_39cdf8:
    // 0x39cdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x39CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDFCu;
        // 0x39ce00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CE04u;
    // 0x39ce04: 0x0  nop
    ctx->pc = 0x39ce04u;
    // NOP
    ctx->pc = 0x39ce08u;
}
