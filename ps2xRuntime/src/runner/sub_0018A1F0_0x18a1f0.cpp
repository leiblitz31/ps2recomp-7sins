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

// Function: sub_0018A1F0
// Address: 0x18a1f0 - 0x18a220
void sub_0018A1F0_0x18a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A1F0_0x18a1f0");
#endif

    switch (ctx->pc) {
        case 0x18a208u: goto label_18a208;
        default: break;
    }

    ctx->pc = 0x18a1f0u;

    // 0x18a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18a1fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a200: 0xc0495d4  jal         func_125750
    ctx->pc = 0x18A200u;
    SET_GPR_U32(ctx, 31, 0x18A208u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x18A200u, 0x18A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A208u;
label_18a208:
    // 0x18a208: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a210: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a214: 0x3e00008  jr          $ra
    ctx->pc = 0x18A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0x0  nop
    ctx->pc = 0x18a21cu;
    // NOP
    ctx->pc = 0x18a220u;
}
