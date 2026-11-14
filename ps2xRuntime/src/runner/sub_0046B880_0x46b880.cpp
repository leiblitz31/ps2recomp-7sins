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

// Function: sub_0046B880
// Address: 0x46b880 - 0x46b8d0
void sub_0046B880_0x46b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B880_0x46b880");
#endif

    switch (ctx->pc) {
        case 0x46b8a0u: goto label_46b8a0;
        default: break;
    }

    ctx->pc = 0x46b880u;

    // 0x46b880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46b884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b88c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b890: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b894: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b898: 0xc11ae34  jal         func_46B8D0
    ctx->pc = 0x46B898u;
    SET_GPR_U32(ctx, 31, 0x46B8A0u);
    ctx->pc = 0x46B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B8D0u, 0x46B898u, 0x46B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B8A0u;
label_46b8a0:
    // 0x46b8a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b8a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x46b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b8a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b8ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46b8b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b8b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46b8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x46B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B8C4u;
    // 0x46b8c4: 0x0  nop
    ctx->pc = 0x46b8c4u;
    // NOP
    // 0x46b8c8: 0x0  nop
    ctx->pc = 0x46b8c8u;
    // NOP
    // 0x46b8cc: 0x0  nop
    ctx->pc = 0x46b8ccu;
    // NOP
    ctx->pc = 0x46b8d0u;
}
