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

// Function: sub_0013C820
// Address: 0x13c820 - 0x13c870
void sub_0013C820_0x13c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C820_0x13c820");
#endif

    switch (ctx->pc) {
        case 0x13c840u: goto label_13c840;
        case 0x13c858u: goto label_13c858;
        default: break;
    }

    ctx->pc = 0x13c820u;

    // 0x13c820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13c828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13c82c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13c830: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x13c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x13c834: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x13c834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13c838: 0xc04f254  jal         func_13C950
    ctx->pc = 0x13C838u;
    SET_GPR_U32(ctx, 31, 0x13C840u);
    ctx->pc = 0x13C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C950u, 0x13C838u, 0x13C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C840u;
label_13c840:
    // 0x13c840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c844: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c848: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13c848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c84c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13c850: 0xc04f21c  jal         func_13C870
    ctx->pc = 0x13C850u;
    SET_GPR_U32(ctx, 31, 0x13C858u);
    ctx->pc = 0x13C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C870u, 0x13C850u, 0x13C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C858u;
label_13c858:
    // 0x13c858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c85c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c860: 0x3e00008  jr          $ra
    ctx->pc = 0x13C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C868u;
    // 0x13c868: 0x0  nop
    ctx->pc = 0x13c868u;
    // NOP
    // 0x13c86c: 0x0  nop
    ctx->pc = 0x13c86cu;
    // NOP
    ctx->pc = 0x13c870u;
}
