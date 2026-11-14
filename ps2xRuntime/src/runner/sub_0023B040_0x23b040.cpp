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

// Function: sub_0023B040
// Address: 0x23b040 - 0x23b090
void sub_0023B040_0x23b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B040_0x23b040");
#endif

    switch (ctx->pc) {
        case 0x23b078u: goto label_23b078;
        default: break;
    }

    ctx->pc = 0x23b040u;

    // 0x23b040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23b044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23b04c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23b050: 0x246355e0  addiu       $v1, $v1, 0x55E0
    ctx->pc = 0x23b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21984));
    // 0x23b054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b058: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23b058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23b05c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b060: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23b060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23b064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b068: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x23b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23b06c: 0x27859d98  addiu       $a1, $gp, -0x6268
    ctx->pc = 0x23b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942104));
    // 0x23b070: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x23B070u;
    SET_GPR_U32(ctx, 31, 0x23B078u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x23B070u, 0x23B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B078u;
label_23b078:
    // 0x23b078: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23b084: 0x3e00008  jr          $ra
    ctx->pc = 0x23B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B08Cu;
    // 0x23b08c: 0x0  nop
    ctx->pc = 0x23b08cu;
    // NOP
    ctx->pc = 0x23b090u;
}
