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

// Function: sub_00216780
// Address: 0x216780 - 0x2167c0
void sub_00216780_0x216780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216780_0x216780");
#endif

    switch (ctx->pc) {
        case 0x2167a8u: goto label_2167a8;
        default: break;
    }

    ctx->pc = 0x216780u;

    // 0x216780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x216780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x216784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216788: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x216788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21678c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21678cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x216790: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x216790u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x216794: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216798: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x216798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21679c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x21679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2167a0: 0xc0859f0  jal         func_2167C0
    ctx->pc = 0x2167A0u;
    SET_GPR_U32(ctx, 31, 0x2167A8u);
    ctx->pc = 0x2167C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2167C0u, 0x2167A0u, 0x2167A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167A8u;
label_2167a8:
    // 0x2167a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2167a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2167ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2167acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2167b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2167B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2167B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2167B8u;
    // 0x2167b8: 0x0  nop
    ctx->pc = 0x2167b8u;
    // NOP
    // 0x2167bc: 0x0  nop
    ctx->pc = 0x2167bcu;
    // NOP
    ctx->pc = 0x2167c0u;
}
