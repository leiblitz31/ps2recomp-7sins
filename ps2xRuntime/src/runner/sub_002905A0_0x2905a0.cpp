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

// Function: sub_002905A0
// Address: 0x2905a0 - 0x2905e0
void sub_002905A0_0x2905a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002905A0_0x2905a0");
#endif

    switch (ctx->pc) {
        case 0x2905c4u: goto label_2905c4;
        default: break;
    }

    ctx->pc = 0x2905a0u;

    // 0x2905a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2905a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2905a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2905a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2905a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2905a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2905ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2905acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2905b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2905b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2905b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2905b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2905b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2905b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905bc: 0xc0a4178  jal         func_2905E0
    ctx->pc = 0x2905BCu;
    SET_GPR_U32(ctx, 31, 0x2905C4u);
    ctx->pc = 0x2905E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905E0u, 0x2905BCu, 0x2905C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905C4u;
label_2905c4:
    // 0x2905c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2905c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2905c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2905c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2905cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2905CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2905CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2905D4u;
    // 0x2905d4: 0x0  nop
    ctx->pc = 0x2905d4u;
    // NOP
    // 0x2905d8: 0x0  nop
    ctx->pc = 0x2905d8u;
    // NOP
    // 0x2905dc: 0x0  nop
    ctx->pc = 0x2905dcu;
    // NOP
    ctx->pc = 0x2905e0u;
}
