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

// Function: sub_00113D80
// Address: 0x113d80 - 0x113dc0
void sub_00113D80_0x113d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D80_0x113d80");
#endif

    switch (ctx->pc) {
        case 0x113d9cu: goto label_113d9c;
        default: break;
    }

    ctx->pc = 0x113d80u;

    // 0x113d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x113d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x113d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113d94: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x113D94u;
    SET_GPR_U32(ctx, 31, 0x113D9Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x113D94u, 0x113D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D9Cu;
label_113d9c:
    // 0x113d9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x113d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113da0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113dac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x113dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113db0: 0x3e00008  jr          $ra
    ctx->pc = 0x113DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113DB8u;
    // 0x113db8: 0x0  nop
    ctx->pc = 0x113db8u;
    // NOP
    // 0x113dbc: 0x0  nop
    ctx->pc = 0x113dbcu;
    // NOP
    ctx->pc = 0x113dc0u;
}
