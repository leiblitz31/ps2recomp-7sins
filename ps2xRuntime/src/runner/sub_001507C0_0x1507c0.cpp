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

// Function: sub_001507C0
// Address: 0x1507c0 - 0x150800
void sub_001507C0_0x1507c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001507C0_0x1507c0");
#endif

    switch (ctx->pc) {
        case 0x1507d8u: goto label_1507d8;
        case 0x1507e8u: goto label_1507e8;
        default: break;
    }

    ctx->pc = 0x1507c0u;

    // 0x1507c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1507c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1507c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1507c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1507c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1507cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1507ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1507d0: 0xc054208  jal         func_150820
    ctx->pc = 0x1507D0u;
    SET_GPR_U32(ctx, 31, 0x1507D8u);
    ctx->pc = 0x150820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150820u, 0x1507D0u, 0x1507D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507D8u;
label_1507d8:
    // 0x1507d8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1507d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1507dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1507dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507e0: 0xc054200  jal         func_150800
    ctx->pc = 0x1507E0u;
    SET_GPR_U32(ctx, 31, 0x1507E8u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x1507E0u, 0x1507E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507E8u;
label_1507e8:
    // 0x1507e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1507e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1507ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1507ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1507f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1507F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1507F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1507F8u;
    // 0x1507f8: 0x0  nop
    ctx->pc = 0x1507f8u;
    // NOP
    // 0x1507fc: 0x0  nop
    ctx->pc = 0x1507fcu;
    // NOP
    ctx->pc = 0x150800u;
}
