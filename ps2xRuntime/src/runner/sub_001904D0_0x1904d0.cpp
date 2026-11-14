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

// Function: sub_001904D0
// Address: 0x1904d0 - 0x190510
void sub_001904D0_0x1904d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001904D0_0x1904d0");
#endif

    switch (ctx->pc) {
        case 0x1904f0u: goto label_1904f0;
        default: break;
    }

    ctx->pc = 0x1904d0u;

    // 0x1904d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1904d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1904d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1904d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1904d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1904dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1904dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1904e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1904e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1904e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1904e8: 0xc064144  jal         func_190510
    ctx->pc = 0x1904E8u;
    SET_GPR_U32(ctx, 31, 0x1904F0u);
    ctx->pc = 0x190510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190510u, 0x1904E8u, 0x1904F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904F0u;
label_1904f0:
    // 0x1904f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1904f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1904f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1904f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1904fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1904FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190504u;
    // 0x190504: 0x0  nop
    ctx->pc = 0x190504u;
    // NOP
    // 0x190508: 0x0  nop
    ctx->pc = 0x190508u;
    // NOP
    // 0x19050c: 0x0  nop
    ctx->pc = 0x19050cu;
    // NOP
    ctx->pc = 0x190510u;
}
