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

// Function: sub_00111F80
// Address: 0x111f80 - 0x111fb0
void sub_00111F80_0x111f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F80_0x111f80");
#endif

    switch (ctx->pc) {
        case 0x111f9cu: goto label_111f9c;
        default: break;
    }

    ctx->pc = 0x111f80u;

    // 0x111f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x111f8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f90: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x111f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x111f94: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x111F94u;
    SET_GPR_U32(ctx, 31, 0x111F9Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x111F94u, 0x111F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F9Cu;
label_111f9c:
    // 0x111f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111fa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x111fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x111fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x111FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111FB0u;
}
