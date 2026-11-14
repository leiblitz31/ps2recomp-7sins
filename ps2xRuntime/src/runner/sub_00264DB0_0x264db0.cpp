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

// Function: sub_00264DB0
// Address: 0x264db0 - 0x264e00
void sub_00264DB0_0x264db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264DB0_0x264db0");
#endif

    switch (ctx->pc) {
        case 0x264de8u: goto label_264de8;
        default: break;
    }

    ctx->pc = 0x264db0u;

    // 0x264db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x264db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x264db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264db8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x264db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x264dbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x264dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x264dc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264dc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x264dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x264dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264dcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x264dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x264dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264dd4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x264dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x264dd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x264dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264de0: 0xc099380  jal         func_264E00
    ctx->pc = 0x264DE0u;
    SET_GPR_U32(ctx, 31, 0x264DE8u);
    ctx->pc = 0x264E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264E00u, 0x264DE0u, 0x264DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DE8u;
label_264de8:
    // 0x264de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x264de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264df0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x264df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x264df4: 0x3e00008  jr          $ra
    ctx->pc = 0x264DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264DFCu;
    // 0x264dfc: 0x0  nop
    ctx->pc = 0x264dfcu;
    // NOP
    ctx->pc = 0x264e00u;
}
