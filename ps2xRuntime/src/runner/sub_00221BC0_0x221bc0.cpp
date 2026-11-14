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

// Function: sub_00221BC0
// Address: 0x221bc0 - 0x221c00
void sub_00221BC0_0x221bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BC0_0x221bc0");
#endif

    switch (ctx->pc) {
        case 0x221be8u: goto label_221be8;
        default: break;
    }

    ctx->pc = 0x221bc0u;

    // 0x221bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221bcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x221bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x221bd0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x221bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x221bd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221bd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221bdc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x221bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221be0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x221BE0u;
    SET_GPR_U32(ctx, 31, 0x221BE8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x221BE0u, 0x221BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BE8u;
label_221be8:
    // 0x221be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221bec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x221becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x221BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BF8u;
    // 0x221bf8: 0x0  nop
    ctx->pc = 0x221bf8u;
    // NOP
    // 0x221bfc: 0x0  nop
    ctx->pc = 0x221bfcu;
    // NOP
    ctx->pc = 0x221c00u;
}
