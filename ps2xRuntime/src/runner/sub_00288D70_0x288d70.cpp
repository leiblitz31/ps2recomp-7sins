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

// Function: sub_00288D70
// Address: 0x288d70 - 0x288dd0
void sub_00288D70_0x288d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288D70_0x288d70");
#endif

    switch (ctx->pc) {
        case 0x288d90u: goto label_288d90;
        case 0x288da0u: goto label_288da0;
        case 0x288db8u: goto label_288db8;
        default: break;
    }

    ctx->pc = 0x288d70u;

    // 0x288d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288d78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x288d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x288d7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x288d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x288d80: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x288d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288d84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288d88: 0xc0a2374  jal         func_288DD0
    ctx->pc = 0x288D88u;
    SET_GPR_U32(ctx, 31, 0x288D90u);
    ctx->pc = 0x288DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288DD0u, 0x288D88u, 0x288D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288D90u;
label_288d90:
    // 0x288d90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x288d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288d94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x288d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288d98: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x288D98u;
    SET_GPR_U32(ctx, 31, 0x288DA0u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x288D98u, 0x288DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DA0u;
label_288da0:
    // 0x288da0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x288da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288da4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288da8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288dac: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x288db0: 0xc0a2374  jal         func_288DD0
    ctx->pc = 0x288DB0u;
    SET_GPR_U32(ctx, 31, 0x288DB8u);
    ctx->pc = 0x288DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288DD0u, 0x288DB0u, 0x288DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288DB8u;
label_288db8:
    // 0x288db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288dbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x288dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x288DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288DC8u;
    // 0x288dc8: 0x0  nop
    ctx->pc = 0x288dc8u;
    // NOP
    // 0x288dcc: 0x0  nop
    ctx->pc = 0x288dccu;
    // NOP
    ctx->pc = 0x288dd0u;
}
