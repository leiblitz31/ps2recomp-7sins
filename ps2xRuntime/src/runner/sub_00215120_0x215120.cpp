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

// Function: sub_00215120
// Address: 0x215120 - 0x215170
void sub_00215120_0x215120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215120_0x215120");
#endif

    switch (ctx->pc) {
        case 0x215140u: goto label_215140;
        case 0x215158u: goto label_215158;
        default: break;
    }

    ctx->pc = 0x215120u;

    // 0x215120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x215120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x215124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215128: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x215128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21512c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x215130: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x215130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x215134: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x215134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x215138: 0xc085484  jal         func_215210
    ctx->pc = 0x215138u;
    SET_GPR_U32(ctx, 31, 0x215140u);
    ctx->pc = 0x215210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215210u, 0x215138u, 0x215140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215140u;
label_215140:
    // 0x215140: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215144: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x215144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215148: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x215148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21514c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x21514cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x215150: 0xc08545c  jal         func_215170
    ctx->pc = 0x215150u;
    SET_GPR_U32(ctx, 31, 0x215158u);
    ctx->pc = 0x215170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215170u, 0x215150u, 0x215158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215158u;
label_215158:
    // 0x215158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21515c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x21515cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x215160: 0x3e00008  jr          $ra
    ctx->pc = 0x215160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215168u;
    // 0x215168: 0x0  nop
    ctx->pc = 0x215168u;
    // NOP
    // 0x21516c: 0x0  nop
    ctx->pc = 0x21516cu;
    // NOP
    ctx->pc = 0x215170u;
}
