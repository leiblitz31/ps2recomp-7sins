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

// Function: sub_001562B0
// Address: 0x1562b0 - 0x1562e0
void sub_001562B0_0x1562b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001562B0_0x1562b0");
#endif

    switch (ctx->pc) {
        case 0x1562c8u: goto label_1562c8;
        default: break;
    }

    ctx->pc = 0x1562b0u;

    // 0x1562b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1562b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1562b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1562b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1562b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1562b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1562bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562c0: 0xc0558b8  jal         func_1562E0
    ctx->pc = 0x1562C0u;
    SET_GPR_U32(ctx, 31, 0x1562C8u);
    ctx->pc = 0x1562E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562E0u, 0x1562C0u, 0x1562C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562C8u;
label_1562c8:
    // 0x1562c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1562c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1562cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1562ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1562d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1562d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1562d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1562D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1562D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1562DCu;
    // 0x1562dc: 0x0  nop
    ctx->pc = 0x1562dcu;
    // NOP
    ctx->pc = 0x1562e0u;
}
