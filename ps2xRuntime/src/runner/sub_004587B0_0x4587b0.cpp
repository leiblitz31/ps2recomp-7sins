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

// Function: sub_004587B0
// Address: 0x4587b0 - 0x458800
void sub_004587B0_0x4587b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004587B0_0x4587b0");
#endif

    switch (ctx->pc) {
        case 0x4587d0u: goto label_4587d0;
        case 0x4587e4u: goto label_4587e4;
        default: break;
    }

    ctx->pc = 0x4587b0u;

    // 0x4587b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4587b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4587b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4587b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4587b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4587b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4587bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4587bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4587c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4587c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4587c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4587c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4587c8: 0xc04e50c  jal         func_139430
    ctx->pc = 0x4587C8u;
    SET_GPR_U32(ctx, 31, 0x4587D0u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x4587C8u, 0x4587D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4587D0u;
label_4587d0:
    // 0x4587d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4587d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4587d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4587d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4587d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4587d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4587dc: 0xc116200  jal         func_458800
    ctx->pc = 0x4587DCu;
    SET_GPR_U32(ctx, 31, 0x4587E4u);
    ctx->pc = 0x458800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458800u, 0x4587DCu, 0x4587E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4587E4u;
label_4587e4:
    // 0x4587e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4587e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4587e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4587e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4587ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4587ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4587ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4587F4u;
    // 0x4587f4: 0x0  nop
    ctx->pc = 0x4587f4u;
    // NOP
    // 0x4587f8: 0x0  nop
    ctx->pc = 0x4587f8u;
    // NOP
    // 0x4587fc: 0x0  nop
    ctx->pc = 0x4587fcu;
    // NOP
    ctx->pc = 0x458800u;
}
