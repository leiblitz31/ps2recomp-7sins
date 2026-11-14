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

// Function: sub_00162DE0
// Address: 0x162de0 - 0x162e20
void sub_00162DE0_0x162de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162DE0_0x162de0");
#endif

    switch (ctx->pc) {
        case 0x162e0cu: goto label_162e0c;
        default: break;
    }

    ctx->pc = 0x162de0u;

    // 0x162de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162de8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x162de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x162dec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x162decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x162df0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x162df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x162df4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162df8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x162df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162dfc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162e00: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x162e04: 0xc058b88  jal         func_162E20
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E20u, 0x162E04u, 0x162E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E0Cu;
label_162e0c:
    // 0x162e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e10: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162e14: 0x3e00008  jr          $ra
    ctx->pc = 0x162E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E1Cu;
    // 0x162e1c: 0x0  nop
    ctx->pc = 0x162e1cu;
    // NOP
    ctx->pc = 0x162e20u;
}
