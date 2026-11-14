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

// Function: sub_00218E30
// Address: 0x218e30 - 0x218e70
void sub_00218E30_0x218e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E30_0x218e30");
#endif

    switch (ctx->pc) {
        case 0x218e48u: goto label_218e48;
        case 0x218e58u: goto label_218e58;
        default: break;
    }

    ctx->pc = 0x218e30u;

    // 0x218e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218e38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x218e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x218e3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x218e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218e40: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x218E40u;
    SET_GPR_U32(ctx, 31, 0x218E48u);
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x218E40u, 0x218E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x218e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x218e4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218e50: 0xc08639c  jal         func_218E70
    ctx->pc = 0x218E50u;
    SET_GPR_U32(ctx, 31, 0x218E58u);
    ctx->pc = 0x218E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E70u, 0x218E50u, 0x218E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E58u;
label_218e58:
    // 0x218e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218e60: 0x3e00008  jr          $ra
    ctx->pc = 0x218E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218E68u;
    // 0x218e68: 0x0  nop
    ctx->pc = 0x218e68u;
    // NOP
    // 0x218e6c: 0x0  nop
    ctx->pc = 0x218e6cu;
    // NOP
    ctx->pc = 0x218e70u;
}
