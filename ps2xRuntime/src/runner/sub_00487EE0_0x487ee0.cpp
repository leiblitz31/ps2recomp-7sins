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

// Function: sub_00487EE0
// Address: 0x487ee0 - 0x487f40
void sub_00487EE0_0x487ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487EE0_0x487ee0");
#endif

    switch (ctx->pc) {
        case 0x487f08u: goto label_487f08;
        case 0x487f24u: goto label_487f24;
        default: break;
    }

    ctx->pc = 0x487ee0u;

    // 0x487ee0: 0x27bdf7d0  addiu       $sp, $sp, -0x830
    ctx->pc = 0x487ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x487ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487ee8: 0xafa40810  sw          $a0, 0x810($sp)
    ctx->pc = 0x487ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2064), GPR_U32(ctx, 4));
    // 0x487eec: 0xafa50820  sw          $a1, 0x820($sp)
    ctx->pc = 0x487eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2080), GPR_U32(ctx, 5));
    // 0x487ef0: 0x8fa40810  lw          $a0, 0x810($sp)
    ctx->pc = 0x487ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x487ef4: 0x8fa50820  lw          $a1, 0x820($sp)
    ctx->pc = 0x487ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x487ef8: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x487ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x487efc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x487efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487f00: 0xc122058  jal         func_488160
    ctx->pc = 0x487F00u;
    SET_GPR_U32(ctx, 31, 0x487F08u);
    ctx->pc = 0x488160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488160u, 0x487F00u, 0x487F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F08u;
label_487f08:
    // 0x487f08: 0x8fa20820  lw          $v0, 0x820($sp)
    ctx->pc = 0x487f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x487f0c: 0x8fa40810  lw          $a0, 0x810($sp)
    ctx->pc = 0x487f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x487f10: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x487f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x487f14: 0x27a60410  addiu       $a2, $sp, 0x410
    ctx->pc = 0x487f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x487f18: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x487f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x487f1c: 0xc12208c  jal         func_488230
    ctx->pc = 0x487F1Cu;
    SET_GPR_U32(ctx, 31, 0x487F24u);
    ctx->pc = 0x488230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488230u, 0x487F1Cu, 0x487F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487F24u;
label_487f24:
    // 0x487f24: 0x8fa30820  lw          $v1, 0x820($sp)
    ctx->pc = 0x487f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x487f28: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x487f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x487f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487f30: 0x27bd0830  addiu       $sp, $sp, 0x830
    ctx->pc = 0x487f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
    // 0x487f34: 0x3e00008  jr          $ra
    ctx->pc = 0x487F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487F3Cu;
    // 0x487f3c: 0x0  nop
    ctx->pc = 0x487f3cu;
    // NOP
    ctx->pc = 0x487f40u;
}
