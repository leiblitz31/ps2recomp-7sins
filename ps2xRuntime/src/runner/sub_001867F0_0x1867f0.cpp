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

// Function: sub_001867F0
// Address: 0x1867f0 - 0x186830
void sub_001867F0_0x1867f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001867F0_0x1867f0");
#endif

    switch (ctx->pc) {
        case 0x18680cu: goto label_18680c;
        case 0x18681cu: goto label_18681c;
        default: break;
    }

    ctx->pc = 0x1867f0u;

    // 0x1867f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1867f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1867f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1867f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1867f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1867f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1867fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1867fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x186800: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186804: 0xc060fe0  jal         func_183F80
    ctx->pc = 0x186804u;
    SET_GPR_U32(ctx, 31, 0x18680Cu);
    ctx->pc = 0x183F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183F80u, 0x186804u, 0x18680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18680Cu;
label_18680c:
    // 0x18680c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186810: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x186810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186814: 0xc061a0c  jal         func_186830
    ctx->pc = 0x186814u;
    SET_GPR_U32(ctx, 31, 0x18681Cu);
    ctx->pc = 0x186830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186830u, 0x186814u, 0x18681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18681Cu;
label_18681c:
    // 0x18681c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186820: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186824: 0x3e00008  jr          $ra
    ctx->pc = 0x186824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18682Cu;
    // 0x18682c: 0x0  nop
    ctx->pc = 0x18682cu;
    // NOP
    ctx->pc = 0x186830u;
}
