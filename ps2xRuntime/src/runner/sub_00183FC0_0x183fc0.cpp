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

// Function: sub_00183FC0
// Address: 0x183fc0 - 0x183ff0
void sub_00183FC0_0x183fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183FC0_0x183fc0");
#endif

    switch (ctx->pc) {
        case 0x183fd8u: goto label_183fd8;
        default: break;
    }

    ctx->pc = 0x183fc0u;

    // 0x183fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183fc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183fcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183fd0: 0xc060ffc  jal         func_183FF0
    ctx->pc = 0x183FD0u;
    SET_GPR_U32(ctx, 31, 0x183FD8u);
    ctx->pc = 0x183FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FF0u, 0x183FD0u, 0x183FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FD8u;
label_183fd8:
    // 0x183fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x183FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FECu;
    // 0x183fec: 0x0  nop
    ctx->pc = 0x183fecu;
    // NOP
    ctx->pc = 0x183ff0u;
}
