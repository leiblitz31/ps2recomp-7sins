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

// Function: sub_002A76E0
// Address: 0x2a76e0 - 0x2a7720
void sub_002A76E0_0x2a76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A76E0_0x2a76e0");
#endif

    switch (ctx->pc) {
        case 0x2a7708u: goto label_2a7708;
        default: break;
    }

    ctx->pc = 0x2a76e0u;

    // 0x2a76e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a76e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a76e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a76e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a76ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a76f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a76f4: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a76f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a76f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a76fc: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2a76fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a7700: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2A7700u;
    SET_GPR_U32(ctx, 31, 0x2A7708u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2A7700u, 0x2A7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7708u;
label_2a7708:
    // 0x2a7708: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a770c: 0xa0600074  sb          $zero, 0x74($v1)
    ctx->pc = 0x2a770cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7714: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a7714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a7718: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7720u;
}
