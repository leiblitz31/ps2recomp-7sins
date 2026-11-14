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

// Function: sub_001336F0
// Address: 0x1336f0 - 0x133720
void sub_001336F0_0x1336f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001336F0_0x1336f0");
#endif

    switch (ctx->pc) {
        case 0x13370cu: goto label_13370c;
        default: break;
    }

    ctx->pc = 0x1336f0u;

    // 0x1336f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1336f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1336f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1336f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1336f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1336f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1336fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1336fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133700: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x133700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133704: 0xc04cdc8  jal         func_133720
    ctx->pc = 0x133704u;
    SET_GPR_U32(ctx, 31, 0x13370Cu);
    ctx->pc = 0x133720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133720u, 0x133704u, 0x13370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13370Cu;
label_13370c:
    // 0x13370c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13370cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133714: 0x3e00008  jr          $ra
    ctx->pc = 0x133714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13371Cu;
    // 0x13371c: 0x0  nop
    ctx->pc = 0x13371cu;
    // NOP
    ctx->pc = 0x133720u;
}
