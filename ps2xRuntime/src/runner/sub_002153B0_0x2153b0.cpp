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

// Function: sub_002153B0
// Address: 0x2153b0 - 0x2153e0
void sub_002153B0_0x2153b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002153B0_0x2153b0");
#endif

    switch (ctx->pc) {
        case 0x2153c8u: goto label_2153c8;
        default: break;
    }

    ctx->pc = 0x2153b0u;

    // 0x2153b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2153b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2153b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2153b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2153b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2153bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2153c0: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2153C0u;
    SET_GPR_U32(ctx, 31, 0x2153C8u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2153C0u, 0x2153C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153C8u;
label_2153c8:
    // 0x2153c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2153c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2153cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2153d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2153D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2153D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2153D8u;
    // 0x2153d8: 0x0  nop
    ctx->pc = 0x2153d8u;
    // NOP
    // 0x2153dc: 0x0  nop
    ctx->pc = 0x2153dcu;
    // NOP
    ctx->pc = 0x2153e0u;
}
