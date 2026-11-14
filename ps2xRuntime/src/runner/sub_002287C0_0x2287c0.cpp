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

// Function: sub_002287C0
// Address: 0x2287c0 - 0x2287f0
void sub_002287C0_0x2287c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002287C0_0x2287c0");
#endif

    switch (ctx->pc) {
        case 0x2287d8u: goto label_2287d8;
        default: break;
    }

    ctx->pc = 0x2287c0u;

    // 0x2287c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2287c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2287c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2287c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2287c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2287c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2287cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2287ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2287d0: 0xc08a1fc  jal         func_2287F0
    ctx->pc = 0x2287D0u;
    SET_GPR_U32(ctx, 31, 0x2287D8u);
    ctx->pc = 0x2287F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287F0u, 0x2287D0u, 0x2287D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287D8u;
label_2287d8:
    // 0x2287d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2287d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2287dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2287e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2287E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2287E8u;
    // 0x2287e8: 0x0  nop
    ctx->pc = 0x2287e8u;
    // NOP
    // 0x2287ec: 0x0  nop
    ctx->pc = 0x2287ecu;
    // NOP
    ctx->pc = 0x2287f0u;
}
