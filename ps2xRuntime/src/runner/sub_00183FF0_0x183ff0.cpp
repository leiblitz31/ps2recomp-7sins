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

// Function: sub_00183FF0
// Address: 0x183ff0 - 0x184030
void sub_00183FF0_0x183ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183FF0_0x183ff0");
#endif

    switch (ctx->pc) {
        case 0x184008u: goto label_184008;
        case 0x18401cu: goto label_18401c;
        default: break;
    }

    ctx->pc = 0x183ff0u;

    // 0x183ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183ff8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x183ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x183ffc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x184000: 0xc0562a4  jal         func_158A90
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 31, 0x184008u);
    ctx->pc = 0x158A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A90u, 0x184000u, 0x184008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18400c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x18400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x184010: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x184010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184014: 0xc06100c  jal         func_184030
    ctx->pc = 0x184014u;
    SET_GPR_U32(ctx, 31, 0x18401Cu);
    ctx->pc = 0x184030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184030u, 0x184014u, 0x18401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18401Cu;
label_18401c:
    // 0x18401c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184024: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184028: 0x3e00008  jr          $ra
    ctx->pc = 0x184028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184030u;
}
