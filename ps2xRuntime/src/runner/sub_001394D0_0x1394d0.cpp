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

// Function: sub_001394D0
// Address: 0x1394d0 - 0x139500
void sub_001394D0_0x1394d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001394D0_0x1394d0");
#endif

    switch (ctx->pc) {
        case 0x1394e8u: goto label_1394e8;
        default: break;
    }

    ctx->pc = 0x1394d0u;

    // 0x1394d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1394d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1394d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1394d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1394d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1394d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1394dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1394dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1394e0: 0xc04e540  jal         func_139500
    ctx->pc = 0x1394E0u;
    SET_GPR_U32(ctx, 31, 0x1394E8u);
    ctx->pc = 0x139500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139500u, 0x1394E0u, 0x1394E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1394E8u;
label_1394e8:
    // 0x1394e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1394ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1394ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1394f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1394f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1394f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1394F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1394F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1394FCu;
    // 0x1394fc: 0x0  nop
    ctx->pc = 0x1394fcu;
    // NOP
    ctx->pc = 0x139500u;
}
