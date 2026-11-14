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

// Function: sub_00477290
// Address: 0x477290 - 0x4772d0
void sub_00477290_0x477290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477290_0x477290");
#endif

    switch (ctx->pc) {
        case 0x4772b4u: goto label_4772b4;
        default: break;
    }

    ctx->pc = 0x477290u;

    // 0x477290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x477290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x477294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47729c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4772a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4772a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4772a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4772a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4772a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4772a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4772ac: 0xc11dcb4  jal         func_4772D0
    ctx->pc = 0x4772ACu;
    SET_GPR_U32(ctx, 31, 0x4772B4u);
    ctx->pc = 0x4772D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4772D0u, 0x4772ACu, 0x4772B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4772B4u;
label_4772b4:
    // 0x4772b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4772b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4772b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4772b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4772bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4772BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4772BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4772C4u;
    // 0x4772c4: 0x0  nop
    ctx->pc = 0x4772c4u;
    // NOP
    // 0x4772c8: 0x0  nop
    ctx->pc = 0x4772c8u;
    // NOP
    // 0x4772cc: 0x0  nop
    ctx->pc = 0x4772ccu;
    // NOP
    ctx->pc = 0x4772d0u;
}
