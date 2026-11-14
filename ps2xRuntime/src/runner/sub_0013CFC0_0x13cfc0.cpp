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

// Function: sub_0013CFC0
// Address: 0x13cfc0 - 0x13cff0
void sub_0013CFC0_0x13cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFC0_0x13cfc0");
#endif

    switch (ctx->pc) {
        case 0x13cfdcu: goto label_13cfdc;
        default: break;
    }

    ctx->pc = 0x13cfc0u;

    // 0x13cfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cfc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13cfcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfd0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cfd4: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13CFD4u;
    SET_GPR_U32(ctx, 31, 0x13CFDCu);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13CFD4u, 0x13CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFDCu;
label_13cfdc:
    // 0x13cfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13cfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFECu;
    // 0x13cfec: 0x0  nop
    ctx->pc = 0x13cfecu;
    // NOP
    ctx->pc = 0x13cff0u;
}
