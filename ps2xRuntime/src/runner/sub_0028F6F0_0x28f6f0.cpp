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

// Function: sub_0028F6F0
// Address: 0x28f6f0 - 0x28f730
void sub_0028F6F0_0x28f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F6F0_0x28f6f0");
#endif

    switch (ctx->pc) {
        case 0x28f708u: goto label_28f708;
        case 0x28f718u: goto label_28f718;
        default: break;
    }

    ctx->pc = 0x28f6f0u;

    // 0x28f6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f6f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28f6fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f700: 0xc0a3d48  jal         func_28F520
    ctx->pc = 0x28F700u;
    SET_GPR_U32(ctx, 31, 0x28F708u);
    ctx->pc = 0x28F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F520u, 0x28F700u, 0x28F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F708u;
label_28f708:
    // 0x28f708: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x28f708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28f70c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f710: 0xc0a3dcc  jal         func_28F730
    ctx->pc = 0x28F710u;
    SET_GPR_U32(ctx, 31, 0x28F718u);
    ctx->pc = 0x28F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F730u, 0x28F710u, 0x28F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F718u;
label_28f718:
    // 0x28f718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f71c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f720: 0x3e00008  jr          $ra
    ctx->pc = 0x28F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F728u;
    // 0x28f728: 0x0  nop
    ctx->pc = 0x28f728u;
    // NOP
    // 0x28f72c: 0x0  nop
    ctx->pc = 0x28f72cu;
    // NOP
    ctx->pc = 0x28f730u;
}
