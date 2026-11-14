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

// Function: sub_00165F50
// Address: 0x165f50 - 0x165f90
void sub_00165F50_0x165f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165F50_0x165f50");
#endif

    switch (ctx->pc) {
        case 0x165f74u: goto label_165f74;
        default: break;
    }

    ctx->pc = 0x165f50u;

    // 0x165f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165f58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165f5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x165f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x165f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f6c: 0xc0597e4  jal         func_165F90
    ctx->pc = 0x165F6Cu;
    SET_GPR_U32(ctx, 31, 0x165F74u);
    ctx->pc = 0x165F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F90u, 0x165F6Cu, 0x165F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F74u;
label_165f74:
    // 0x165f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x165F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F84u;
    // 0x165f84: 0x0  nop
    ctx->pc = 0x165f84u;
    // NOP
    // 0x165f88: 0x0  nop
    ctx->pc = 0x165f88u;
    // NOP
    // 0x165f8c: 0x0  nop
    ctx->pc = 0x165f8cu;
    // NOP
    ctx->pc = 0x165f90u;
}
