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

// Function: sub_00214580
// Address: 0x214580 - 0x2145c0
void sub_00214580_0x214580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214580_0x214580");
#endif

    switch (ctx->pc) {
        case 0x214598u: goto label_214598;
        case 0x2145a8u: goto label_2145a8;
        default: break;
    }

    ctx->pc = 0x214580u;

    // 0x214580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214588: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x214588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21458c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x21458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x214590: 0xc0851fc  jal         func_2147F0
    ctx->pc = 0x214590u;
    SET_GPR_U32(ctx, 31, 0x214598u);
    ctx->pc = 0x2147F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2147F0u, 0x214590u, 0x214598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214598u;
label_214598:
    // 0x214598: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x214598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21459c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21459cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145a0: 0xc0851bc  jal         func_2146F0
    ctx->pc = 0x2145A0u;
    SET_GPR_U32(ctx, 31, 0x2145A8u);
    ctx->pc = 0x2146F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2146F0u, 0x2145A0u, 0x2145A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145A8u;
label_2145a8:
    // 0x2145a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2145ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2145acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2145b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2145b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2145b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2145B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2145B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2145BCu;
    // 0x2145bc: 0x0  nop
    ctx->pc = 0x2145bcu;
    // NOP
    ctx->pc = 0x2145c0u;
}
