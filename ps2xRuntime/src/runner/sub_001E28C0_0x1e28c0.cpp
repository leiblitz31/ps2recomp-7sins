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

// Function: sub_001E28C0
// Address: 0x1e28c0 - 0x1e28f0
void sub_001E28C0_0x1e28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E28C0_0x1e28c0");
#endif

    switch (ctx->pc) {
        case 0x1e28d8u: goto label_1e28d8;
        default: break;
    }

    ctx->pc = 0x1e28c0u;

    // 0x1e28c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e28c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e28c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e28cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e28d0: 0xc078a3c  jal         func_1E28F0
    ctx->pc = 0x1E28D0u;
    SET_GPR_U32(ctx, 31, 0x1E28D8u);
    ctx->pc = 0x1E28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28F0u, 0x1E28D0u, 0x1E28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E28D8u;
label_1e28d8:
    // 0x1e28d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e28dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e28dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e28e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E28E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E28E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E28ECu;
    // 0x1e28ec: 0x0  nop
    ctx->pc = 0x1e28ecu;
    // NOP
    ctx->pc = 0x1e28f0u;
}
