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

// Function: sub_0044F5D0
// Address: 0x44f5d0 - 0x44f610
void sub_0044F5D0_0x44f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F5D0_0x44f5d0");
#endif

    switch (ctx->pc) {
        case 0x44f5f4u: goto label_44f5f4;
        default: break;
    }

    ctx->pc = 0x44f5d0u;

    // 0x44f5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f5d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f5dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f5e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f5e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f5e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44f5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f5ec: 0xc113d84  jal         func_44F610
    ctx->pc = 0x44F5ECu;
    SET_GPR_U32(ctx, 31, 0x44F5F4u);
    ctx->pc = 0x44F610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F610u, 0x44F5ECu, 0x44F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F5F4u;
label_44f5f4:
    // 0x44f5f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f5f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x44F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F604u;
    // 0x44f604: 0x0  nop
    ctx->pc = 0x44f604u;
    // NOP
    // 0x44f608: 0x0  nop
    ctx->pc = 0x44f608u;
    // NOP
    // 0x44f60c: 0x0  nop
    ctx->pc = 0x44f60cu;
    // NOP
    ctx->pc = 0x44f610u;
}
