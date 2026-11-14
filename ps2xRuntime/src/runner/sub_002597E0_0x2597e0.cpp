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

// Function: sub_002597E0
// Address: 0x2597e0 - 0x259820
void sub_002597E0_0x2597e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002597E0_0x2597e0");
#endif

    switch (ctx->pc) {
        case 0x2597f8u: goto label_2597f8;
        case 0x259808u: goto label_259808;
        default: break;
    }

    ctx->pc = 0x2597e0u;

    // 0x2597e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2597e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2597e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2597e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2597e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2597e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2597ec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2597ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2597f0: 0xc096648  jal         func_259920
    ctx->pc = 0x2597F0u;
    SET_GPR_U32(ctx, 31, 0x2597F8u);
    ctx->pc = 0x259920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259920u, 0x2597F0u, 0x2597F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597F8u;
label_2597f8:
    // 0x2597f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2597f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2597fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2597fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259800: 0xc096608  jal         func_259820
    ctx->pc = 0x259800u;
    SET_GPR_U32(ctx, 31, 0x259808u);
    ctx->pc = 0x259820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259820u, 0x259800u, 0x259808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259808u;
label_259808:
    // 0x259808: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25980c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259814: 0x3e00008  jr          $ra
    ctx->pc = 0x259814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25981Cu;
    // 0x25981c: 0x0  nop
    ctx->pc = 0x25981cu;
    // NOP
    ctx->pc = 0x259820u;
}
