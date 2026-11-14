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

// Function: sub_002949E0
// Address: 0x2949e0 - 0x294a20
void sub_002949E0_0x2949e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002949E0_0x2949e0");
#endif

    switch (ctx->pc) {
        case 0x2949f8u: goto label_2949f8;
        case 0x294a08u: goto label_294a08;
        default: break;
    }

    ctx->pc = 0x2949e0u;

    // 0x2949e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2949e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2949e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2949e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2949e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2949e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2949ec: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2949ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2949f0: 0xc0a52c8  jal         func_294B20
    ctx->pc = 0x2949F0u;
    SET_GPR_U32(ctx, 31, 0x2949F8u);
    ctx->pc = 0x294B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B20u, 0x2949F0u, 0x2949F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2949F8u;
label_2949f8:
    // 0x2949f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2949f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2949fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2949fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a00: 0xc0a5288  jal         func_294A20
    ctx->pc = 0x294A00u;
    SET_GPR_U32(ctx, 31, 0x294A08u);
    ctx->pc = 0x294A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A20u, 0x294A00u, 0x294A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294A08u;
label_294a08:
    // 0x294a08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x294a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x294a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x294a14: 0x3e00008  jr          $ra
    ctx->pc = 0x294A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A1Cu;
    // 0x294a1c: 0x0  nop
    ctx->pc = 0x294a1cu;
    // NOP
    ctx->pc = 0x294a20u;
}
