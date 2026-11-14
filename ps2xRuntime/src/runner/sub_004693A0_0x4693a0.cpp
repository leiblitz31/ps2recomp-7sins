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

// Function: sub_004693A0
// Address: 0x4693a0 - 0x4693e0
void sub_004693A0_0x4693a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004693A0_0x4693a0");
#endif

    switch (ctx->pc) {
        case 0x4693c4u: goto label_4693c4;
        default: break;
    }

    ctx->pc = 0x4693a0u;

    // 0x4693a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4693a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4693a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4693a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4693a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4693a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4693ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4693acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4693b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4693b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4693b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4693b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4693b8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x4693b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4693bc: 0xc11a4f8  jal         func_4693E0
    ctx->pc = 0x4693BCu;
    SET_GPR_U32(ctx, 31, 0x4693C4u);
    ctx->pc = 0x4693E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693E0u, 0x4693BCu, 0x4693C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4693C4u;
label_4693c4:
    // 0x4693c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4693c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4693c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4693c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4693cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4693CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4693CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4693D4u;
    // 0x4693d4: 0x0  nop
    ctx->pc = 0x4693d4u;
    // NOP
    // 0x4693d8: 0x0  nop
    ctx->pc = 0x4693d8u;
    // NOP
    // 0x4693dc: 0x0  nop
    ctx->pc = 0x4693dcu;
    // NOP
    ctx->pc = 0x4693e0u;
}
