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

// Function: sub_002CF7A0
// Address: 0x2cf7a0 - 0x2cf7e0
void sub_002CF7A0_0x2cf7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7A0_0x2cf7a0");
#endif

    switch (ctx->pc) {
        case 0x2cf7bcu: goto label_2cf7bc;
        case 0x2cf7ccu: goto label_2cf7cc;
        default: break;
    }

    ctx->pc = 0x2cf7a0u;

    // 0x2cf7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf7ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cf7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cf7b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cf7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf7b4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2CF7B4u;
    SET_GPR_U32(ctx, 31, 0x2CF7BCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2CF7B4u, 0x2CF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7BCu;
label_2cf7bc:
    // 0x2cf7bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf7c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7c4: 0xc0b3db4  jal         func_2CF6D0
    ctx->pc = 0x2CF7C4u;
    SET_GPR_U32(ctx, 31, 0x2CF7CCu);
    ctx->pc = 0x2CF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6D0u, 0x2CF7C4u, 0x2CF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7CCu;
label_2cf7cc:
    // 0x2cf7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf7d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF7DCu;
    // 0x2cf7dc: 0x0  nop
    ctx->pc = 0x2cf7dcu;
    // NOP
    ctx->pc = 0x2cf7e0u;
}
