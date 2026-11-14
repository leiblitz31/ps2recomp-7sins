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

// Function: sub_0025F140
// Address: 0x25f140 - 0x25f190
void sub_0025F140_0x25f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F140_0x25f140");
#endif

    switch (ctx->pc) {
        case 0x25f160u: goto label_25f160;
        case 0x25f178u: goto label_25f178;
        default: break;
    }

    ctx->pc = 0x25f140u;

    // 0x25f140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25f144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25f148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25f14c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25f150: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25f154: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x25f154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25f158: 0xc097c80  jal         func_25F200
    ctx->pc = 0x25F158u;
    SET_GPR_U32(ctx, 31, 0x25F160u);
    ctx->pc = 0x25F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F200u, 0x25F158u, 0x25F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F160u;
label_25f160:
    // 0x25f160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25f160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f164: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25f164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f168: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f16c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25f170: 0xc097c64  jal         func_25F190
    ctx->pc = 0x25F170u;
    SET_GPR_U32(ctx, 31, 0x25F178u);
    ctx->pc = 0x25F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F190u, 0x25F170u, 0x25F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F178u;
label_25f178:
    // 0x25f178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f17c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25f17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25f180: 0x3e00008  jr          $ra
    ctx->pc = 0x25F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F188u;
    // 0x25f188: 0x0  nop
    ctx->pc = 0x25f188u;
    // NOP
    // 0x25f18c: 0x0  nop
    ctx->pc = 0x25f18cu;
    // NOP
    ctx->pc = 0x25f190u;
}
