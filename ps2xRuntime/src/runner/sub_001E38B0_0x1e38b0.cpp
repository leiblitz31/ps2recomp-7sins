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

// Function: sub_001E38B0
// Address: 0x1e38b0 - 0x1e38e0
void sub_001E38B0_0x1e38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E38B0_0x1e38b0");
#endif

    switch (ctx->pc) {
        case 0x1e38c8u: goto label_1e38c8;
        default: break;
    }

    ctx->pc = 0x1e38b0u;

    // 0x1e38b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e38b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e38b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e38b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e38bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e38bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e38c0: 0xc078e38  jal         func_1E38E0
    ctx->pc = 0x1E38C0u;
    SET_GPR_U32(ctx, 31, 0x1E38C8u);
    ctx->pc = 0x1E38E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E38E0u, 0x1E38C0u, 0x1E38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38C8u;
label_1e38c8:
    // 0x1e38c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e38cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e38d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e38d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e38d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E38D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E38D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E38DCu;
    // 0x1e38dc: 0x0  nop
    ctx->pc = 0x1e38dcu;
    // NOP
    ctx->pc = 0x1e38e0u;
}
