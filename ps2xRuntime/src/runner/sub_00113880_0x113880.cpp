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

// Function: sub_00113880
// Address: 0x113880 - 0x1138c0
void sub_00113880_0x113880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113880_0x113880");
#endif

    switch (ctx->pc) {
        case 0x1138a0u: goto label_1138a0;
        default: break;
    }

    ctx->pc = 0x113880u;

    // 0x113880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11388c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11388cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113894: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113898: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x113898u;
    SET_GPR_U32(ctx, 31, 0x1138A0u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x113898u, 0x1138A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138A0u;
label_1138a0:
    // 0x1138a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1138a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1138a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1138a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1138a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1138ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1138ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1138ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1138B4u;
    // 0x1138b4: 0x0  nop
    ctx->pc = 0x1138b4u;
    // NOP
    // 0x1138b8: 0x0  nop
    ctx->pc = 0x1138b8u;
    // NOP
    // 0x1138bc: 0x0  nop
    ctx->pc = 0x1138bcu;
    // NOP
    ctx->pc = 0x1138c0u;
}
