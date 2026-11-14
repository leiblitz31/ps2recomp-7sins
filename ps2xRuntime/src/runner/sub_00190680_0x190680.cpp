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

// Function: sub_00190680
// Address: 0x190680 - 0x1906c0
void sub_00190680_0x190680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190680_0x190680");
#endif

    switch (ctx->pc) {
        case 0x1906a0u: goto label_1906a0;
        default: break;
    }

    ctx->pc = 0x190680u;

    // 0x190680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19068c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19068cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x190690: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190694: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190698: 0xc0641b0  jal         func_1906C0
    ctx->pc = 0x190698u;
    SET_GPR_U32(ctx, 31, 0x1906A0u);
    ctx->pc = 0x1906C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1906C0u, 0x190698u, 0x1906A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1906A0u;
label_1906a0:
    // 0x1906a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1906a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1906a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1906a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1906ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1906ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1906B4u;
    // 0x1906b4: 0x0  nop
    ctx->pc = 0x1906b4u;
    // NOP
    // 0x1906b8: 0x0  nop
    ctx->pc = 0x1906b8u;
    // NOP
    // 0x1906bc: 0x0  nop
    ctx->pc = 0x1906bcu;
    // NOP
    ctx->pc = 0x1906c0u;
}
