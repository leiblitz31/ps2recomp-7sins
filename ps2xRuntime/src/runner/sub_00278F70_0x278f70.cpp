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

// Function: sub_00278F70
// Address: 0x278f70 - 0x278fb0
void sub_00278F70_0x278f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278F70_0x278f70");
#endif

    switch (ctx->pc) {
        case 0x278f90u: goto label_278f90;
        default: break;
    }

    ctx->pc = 0x278f70u;

    // 0x278f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278f7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x278f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278f80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278f84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x278f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278f88: 0xc09e3ec  jal         func_278FB0
    ctx->pc = 0x278F88u;
    SET_GPR_U32(ctx, 31, 0x278F90u);
    ctx->pc = 0x278FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278FB0u, 0x278F88u, 0x278F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F90u;
label_278f90:
    // 0x278f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x278F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278FA4u;
    // 0x278fa4: 0x0  nop
    ctx->pc = 0x278fa4u;
    // NOP
    // 0x278fa8: 0x0  nop
    ctx->pc = 0x278fa8u;
    // NOP
    // 0x278fac: 0x0  nop
    ctx->pc = 0x278facu;
    // NOP
    ctx->pc = 0x278fb0u;
}
