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

// Function: sub_00208350
// Address: 0x208350 - 0x208390
void sub_00208350_0x208350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208350_0x208350");
#endif

    switch (ctx->pc) {
        case 0x208370u: goto label_208370;
        default: break;
    }

    ctx->pc = 0x208350u;

    // 0x208350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x208358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20835c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x208360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208364: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208368: 0xc0820e4  jal         func_208390
    ctx->pc = 0x208368u;
    SET_GPR_U32(ctx, 31, 0x208370u);
    ctx->pc = 0x208390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208390u, 0x208368u, 0x208370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208370u;
label_208370:
    // 0x208370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208378: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20837c: 0x3e00008  jr          $ra
    ctx->pc = 0x20837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208384u;
    // 0x208384: 0x0  nop
    ctx->pc = 0x208384u;
    // NOP
    // 0x208388: 0x0  nop
    ctx->pc = 0x208388u;
    // NOP
    // 0x20838c: 0x0  nop
    ctx->pc = 0x20838cu;
    // NOP
    ctx->pc = 0x208390u;
}
