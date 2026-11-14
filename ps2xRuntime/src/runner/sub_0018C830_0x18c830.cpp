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

// Function: sub_0018C830
// Address: 0x18c830 - 0x18c880
void sub_0018C830_0x18c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C830_0x18c830");
#endif

    switch (ctx->pc) {
        case 0x18c854u: goto label_18c854;
        default: break;
    }

    ctx->pc = 0x18c830u;

    // 0x18c830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18c83c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18c840: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x18c840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x18c844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c848: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18c848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c84c: 0xc063220  jal         func_18C880
    ctx->pc = 0x18C84Cu;
    SET_GPR_U32(ctx, 31, 0x18C854u);
    ctx->pc = 0x18C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C880u, 0x18C84Cu, 0x18C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C854u;
label_18c854:
    // 0x18c854: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c85c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18c85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18c860: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c868: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18c86c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C874u;
    // 0x18c874: 0x0  nop
    ctx->pc = 0x18c874u;
    // NOP
    // 0x18c878: 0x0  nop
    ctx->pc = 0x18c878u;
    // NOP
    // 0x18c87c: 0x0  nop
    ctx->pc = 0x18c87cu;
    // NOP
    ctx->pc = 0x18c880u;
}
