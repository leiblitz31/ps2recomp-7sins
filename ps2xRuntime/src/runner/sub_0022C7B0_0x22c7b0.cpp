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

// Function: sub_0022C7B0
// Address: 0x22c7b0 - 0x22c800
void sub_0022C7B0_0x22c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C7B0_0x22c7b0");
#endif

    switch (ctx->pc) {
        case 0x22c7e8u: goto label_22c7e8;
        default: break;
    }

    ctx->pc = 0x22c7b0u;

    // 0x22c7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c7b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c7bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c7c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22c7c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22c7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7d4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22c7d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c7dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7e0: 0xc08b200  jal         func_22C800
    ctx->pc = 0x22C7E0u;
    SET_GPR_U32(ctx, 31, 0x22C7E8u);
    ctx->pc = 0x22C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C800u, 0x22C7E0u, 0x22C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7E8u;
label_22c7e8:
    // 0x22c7e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c7f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C7FCu;
    // 0x22c7fc: 0x0  nop
    ctx->pc = 0x22c7fcu;
    // NOP
    ctx->pc = 0x22c800u;
}
