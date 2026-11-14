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

// Function: sub_001202D0
// Address: 0x1202d0 - 0x120310
void sub_001202D0_0x1202d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001202D0_0x1202d0");
#endif

    switch (ctx->pc) {
        case 0x1202f0u: goto label_1202f0;
        default: break;
    }

    ctx->pc = 0x1202d0u;

    // 0x1202d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1202d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1202d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1202d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1202d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1202d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1202dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1202dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1202e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1202e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1202e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202e8: 0xc0480c4  jal         func_120310
    ctx->pc = 0x1202E8u;
    SET_GPR_U32(ctx, 31, 0x1202F0u);
    ctx->pc = 0x120310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120310u, 0x1202E8u, 0x1202F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1202F0u;
label_1202f0:
    // 0x1202f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1202f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1202f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1202f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1202fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1202FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120304u;
    // 0x120304: 0x0  nop
    ctx->pc = 0x120304u;
    // NOP
    // 0x120308: 0x0  nop
    ctx->pc = 0x120308u;
    // NOP
    // 0x12030c: 0x0  nop
    ctx->pc = 0x12030cu;
    // NOP
    ctx->pc = 0x120310u;
}
