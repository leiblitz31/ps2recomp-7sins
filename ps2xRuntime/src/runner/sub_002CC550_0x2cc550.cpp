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

// Function: sub_002CC550
// Address: 0x2cc550 - 0x2cc5b0
void sub_002CC550_0x2cc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC550_0x2cc550");
#endif

    switch (ctx->pc) {
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc598u: goto label_2cc598;
        default: break;
    }

    ctx->pc = 0x2cc550u;

    // 0x2cc550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc55c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc560: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2CC560u;
    SET_GPR_U32(ctx, 31, 0x2CC568u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2CC560u, 0x2CC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC568u;
label_2cc568:
    // 0x2cc568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cc570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cc574: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC57Cu;
    // 0x2cc57c: 0x0  nop
    ctx->pc = 0x2cc57cu;
    // NOP
    // 0x2cc580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc58c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc590: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x2CC590u;
    SET_GPR_U32(ctx, 31, 0x2CC598u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x2CC590u, 0x2CC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC598u;
label_2cc598:
    // 0x2cc598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc59c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cc59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cc5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC5A8u;
    // 0x2cc5a8: 0x0  nop
    ctx->pc = 0x2cc5a8u;
    // NOP
    // 0x2cc5ac: 0x0  nop
    ctx->pc = 0x2cc5acu;
    // NOP
    ctx->pc = 0x2cc5b0u;
}
