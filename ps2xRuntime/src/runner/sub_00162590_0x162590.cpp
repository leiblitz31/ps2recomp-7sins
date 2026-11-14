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

// Function: sub_00162590
// Address: 0x162590 - 0x1625d0
void sub_00162590_0x162590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162590_0x162590");
#endif

    switch (ctx->pc) {
        case 0x1625b8u: goto label_1625b8;
        default: break;
    }

    ctx->pc = 0x162590u;

    // 0x162590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x162598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16259c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16259cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1625a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1625a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1625a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1625a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1625a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1625a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1625ac: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1625acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1625b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1625B0u;
    SET_GPR_U32(ctx, 31, 0x1625B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1625B0u, 0x1625B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1625B8u;
label_1625b8:
    // 0x1625b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1625b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1625bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1625c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1625C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1625C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1625C8u;
    // 0x1625c8: 0x0  nop
    ctx->pc = 0x1625c8u;
    // NOP
    // 0x1625cc: 0x0  nop
    ctx->pc = 0x1625ccu;
    // NOP
    ctx->pc = 0x1625d0u;
}
