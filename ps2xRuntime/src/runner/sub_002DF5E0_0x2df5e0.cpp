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

// Function: sub_002DF5E0
// Address: 0x2df5e0 - 0x2df610
void sub_002DF5E0_0x2df5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF5E0_0x2df5e0");
#endif

    switch (ctx->pc) {
        case 0x2df5f8u: goto label_2df5f8;
        default: break;
    }

    ctx->pc = 0x2df5e0u;

    // 0x2df5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df5e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df5ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df5f0: 0xc0b7d84  jal         func_2DF610
    ctx->pc = 0x2DF5F0u;
    SET_GPR_U32(ctx, 31, 0x2DF5F8u);
    ctx->pc = 0x2DF610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF610u, 0x2DF5F0u, 0x2DF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF5F8u;
label_2df5f8:
    // 0x2df5f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df600: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2df600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df604: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF60Cu;
    // 0x2df60c: 0x0  nop
    ctx->pc = 0x2df60cu;
    // NOP
    ctx->pc = 0x2df610u;
}
