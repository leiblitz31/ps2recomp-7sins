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

// Function: sub_002218C0
// Address: 0x2218c0 - 0x221900
void sub_002218C0_0x2218c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002218C0_0x2218c0");
#endif

    switch (ctx->pc) {
        case 0x2218e4u: goto label_2218e4;
        default: break;
    }

    ctx->pc = 0x2218c0u;

    // 0x2218c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2218c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2218c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2218c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2218cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2218d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2218d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2218d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2218d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2218d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2218d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218dc: 0xc088640  jal         func_221900
    ctx->pc = 0x2218DCu;
    SET_GPR_U32(ctx, 31, 0x2218E4u);
    ctx->pc = 0x221900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221900u, 0x2218DCu, 0x2218E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218E4u;
label_2218e4:
    // 0x2218e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2218e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2218e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2218e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2218ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2218ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2218ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2218F4u;
    // 0x2218f4: 0x0  nop
    ctx->pc = 0x2218f4u;
    // NOP
    // 0x2218f8: 0x0  nop
    ctx->pc = 0x2218f8u;
    // NOP
    // 0x2218fc: 0x0  nop
    ctx->pc = 0x2218fcu;
    // NOP
    ctx->pc = 0x221900u;
}
