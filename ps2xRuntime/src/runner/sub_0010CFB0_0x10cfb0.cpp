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

// Function: sub_0010CFB0
// Address: 0x10cfb0 - 0x10cfe0
void sub_0010CFB0_0x10cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CFB0_0x10cfb0");
#endif

    switch (ctx->pc) {
        case 0x10cfc8u: goto label_10cfc8;
        default: break;
    }

    ctx->pc = 0x10cfb0u;

    // 0x10cfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cfb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10cfbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cfc0: 0xc0433f8  jal         func_10CFE0
    ctx->pc = 0x10CFC0u;
    SET_GPR_U32(ctx, 31, 0x10CFC8u);
    ctx->pc = 0x10CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFE0u, 0x10CFC0u, 0x10CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFC8u;
label_10cfc8:
    // 0x10cfc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cfcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10cfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CFD8u;
    // 0x10cfd8: 0x0  nop
    ctx->pc = 0x10cfd8u;
    // NOP
    // 0x10cfdc: 0x0  nop
    ctx->pc = 0x10cfdcu;
    // NOP
    ctx->pc = 0x10cfe0u;
}
