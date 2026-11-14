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

// Function: sub_00165F90
// Address: 0x165f90 - 0x165fd0
void sub_00165F90_0x165f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F90_0x165f90");
#endif

    switch (ctx->pc) {
        case 0x165fb8u: goto label_165fb8;
        default: break;
    }

    ctx->pc = 0x165f90u;

    // 0x165f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x165f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165f98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x165f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x165f9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x165f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x165fa0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x165fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x165fa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x165fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165fa8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x165fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165fac: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x165facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x165fb0: 0xc0597f4  jal         func_165FD0
    ctx->pc = 0x165FB0u;
    SET_GPR_U32(ctx, 31, 0x165FB8u);
    ctx->pc = 0x165FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165FD0u, 0x165FB0u, 0x165FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FB8u;
label_165fb8:
    // 0x165fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165fbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x165fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x165FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165FC8u;
    // 0x165fc8: 0x0  nop
    ctx->pc = 0x165fc8u;
    // NOP
    // 0x165fcc: 0x0  nop
    ctx->pc = 0x165fccu;
    // NOP
    ctx->pc = 0x165fd0u;
}
