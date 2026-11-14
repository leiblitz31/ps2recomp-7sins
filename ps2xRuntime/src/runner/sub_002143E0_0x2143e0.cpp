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

// Function: sub_002143E0
// Address: 0x2143e0 - 0x214420
void sub_002143E0_0x2143e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002143E0_0x2143e0");
#endif

    switch (ctx->pc) {
        case 0x214404u: goto label_214404;
        default: break;
    }

    ctx->pc = 0x2143e0u;

    // 0x2143e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2143e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2143e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2143e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2143e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2143ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2143ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2143f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2143f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2143f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2143f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2143f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2143f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143fc: 0xc085108  jal         func_214420
    ctx->pc = 0x2143FCu;
    SET_GPR_U32(ctx, 31, 0x214404u);
    ctx->pc = 0x214420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214420u, 0x2143FCu, 0x214404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214404u;
label_214404:
    // 0x214404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214408: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21440c: 0x3e00008  jr          $ra
    ctx->pc = 0x21440Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21440Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214414u;
    // 0x214414: 0x0  nop
    ctx->pc = 0x214414u;
    // NOP
    // 0x214418: 0x0  nop
    ctx->pc = 0x214418u;
    // NOP
    // 0x21441c: 0x0  nop
    ctx->pc = 0x21441cu;
    // NOP
    ctx->pc = 0x214420u;
}
