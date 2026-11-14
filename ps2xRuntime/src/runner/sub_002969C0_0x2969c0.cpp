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

// Function: sub_002969C0
// Address: 0x2969c0 - 0x296a00
void sub_002969C0_0x2969c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002969C0_0x2969c0");
#endif

    switch (ctx->pc) {
        case 0x2969dcu: goto label_2969dc;
        case 0x2969f0u: goto label_2969f0;
        default: break;
    }

    ctx->pc = 0x2969c0u;

    // 0x2969c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2969c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2969c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2969c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2969c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2969c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2969cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2969ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2969d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2969d4: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x2969D4u;
    SET_GPR_U32(ctx, 31, 0x2969DCu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x2969D4u, 0x2969DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969DCu;
label_2969dc:
    // 0x2969dc: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2969dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2969e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2969e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969e4: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x2969e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2969e8: 0xc08a758  jal         func_229D60
    ctx->pc = 0x2969E8u;
    SET_GPR_U32(ctx, 31, 0x2969F0u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x2969E8u, 0x2969F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969F0u;
label_2969f0:
    // 0x2969f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2969f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2969f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2969f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2969f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2969F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2969F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296A00u;
}
