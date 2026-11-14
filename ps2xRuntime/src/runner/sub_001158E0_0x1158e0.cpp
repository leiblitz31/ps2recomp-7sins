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

// Function: sub_001158E0
// Address: 0x1158e0 - 0x115930
void sub_001158E0_0x1158e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001158E0_0x1158e0");
#endif

    switch (ctx->pc) {
        case 0x115904u: goto label_115904;
        default: break;
    }

    ctx->pc = 0x1158e0u;

    // 0x1158e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1158e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1158e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1158e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1158e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1158e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1158ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1158ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1158f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1158f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1158f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1158f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1158f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1158fc: 0xc04564c  jal         func_115930
    ctx->pc = 0x1158FCu;
    SET_GPR_U32(ctx, 31, 0x115904u);
    ctx->pc = 0x115930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115930u, 0x1158FCu, 0x115904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115904u;
label_115904:
    // 0x115904: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11590c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115910: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x115910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x115914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11591c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11591cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115920: 0x3e00008  jr          $ra
    ctx->pc = 0x115920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115928u;
    // 0x115928: 0x0  nop
    ctx->pc = 0x115928u;
    // NOP
    // 0x11592c: 0x0  nop
    ctx->pc = 0x11592cu;
    // NOP
    ctx->pc = 0x115930u;
}
