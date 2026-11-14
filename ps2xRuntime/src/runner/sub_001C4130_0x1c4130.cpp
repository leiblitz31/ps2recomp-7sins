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

// Function: sub_001C4130
// Address: 0x1c4130 - 0x1c4180
void sub_001C4130_0x1c4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4130_0x1c4130");
#endif

    switch (ctx->pc) {
        case 0x1c4150u: goto label_1c4150;
        case 0x1c4168u: goto label_1c4168;
        default: break;
    }

    ctx->pc = 0x1c4130u;

    // 0x1c4130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c4134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4138: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c4138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c413c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4140: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c4140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c4144: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c4148: 0xc07107c  jal         func_1C41F0
    ctx->pc = 0x1C4148u;
    SET_GPR_U32(ctx, 31, 0x1C4150u);
    ctx->pc = 0x1C41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41F0u, 0x1C4148u, 0x1C4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4150u;
label_1c4150:
    // 0x1c4150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c4150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4154: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4158: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1c4158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c415c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1c415cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c4160: 0xc071060  jal         func_1C4180
    ctx->pc = 0x1C4160u;
    SET_GPR_U32(ctx, 31, 0x1C4168u);
    ctx->pc = 0x1C4180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4180u, 0x1C4160u, 0x1C4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4168u;
label_1c4168:
    // 0x1c4168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c416c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c416cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4170: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4178u;
    // 0x1c4178: 0x0  nop
    ctx->pc = 0x1c4178u;
    // NOP
    // 0x1c417c: 0x0  nop
    ctx->pc = 0x1c417cu;
    // NOP
    ctx->pc = 0x1c4180u;
}
