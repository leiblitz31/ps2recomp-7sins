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

// Function: sub_0022B850
// Address: 0x22b850 - 0x22b8a0
void sub_0022B850_0x22b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B850_0x22b850");
#endif

    switch (ctx->pc) {
        case 0x22b874u: goto label_22b874;
        default: break;
    }

    ctx->pc = 0x22b850u;

    // 0x22b850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22b858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22b85c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22b860: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x22b860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x22b864: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22b864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b868: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22b868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b86c: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B86Cu;
    SET_GPR_U32(ctx, 31, 0x22B874u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B86Cu, 0x22B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B874u;
label_22b874:
    // 0x22b874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b878: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22b878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b87c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b880: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x22b880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b884: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b88c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22b88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22b890: 0x3e00008  jr          $ra
    ctx->pc = 0x22B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B898u;
    // 0x22b898: 0x0  nop
    ctx->pc = 0x22b898u;
    // NOP
    // 0x22b89c: 0x0  nop
    ctx->pc = 0x22b89cu;
    // NOP
    ctx->pc = 0x22b8a0u;
}
