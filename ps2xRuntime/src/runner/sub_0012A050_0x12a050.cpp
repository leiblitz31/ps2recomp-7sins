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

// Function: sub_0012A050
// Address: 0x12a050 - 0x12a090
void sub_0012A050_0x12a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A050_0x12a050");
#endif

    switch (ctx->pc) {
        case 0x12a068u: goto label_12a068;
        case 0x12a074u: goto label_12a074;
        default: break;
    }

    ctx->pc = 0x12a050u;

    // 0x12a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12a058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12a05c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a060: 0xc041b48  jal         func_106D20
    ctx->pc = 0x12A060u;
    SET_GPR_U32(ctx, 31, 0x12A068u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x12A060u, 0x12A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A068u;
label_12a068:
    // 0x12a068: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a06c: 0xc04a804  jal         func_12A010
    ctx->pc = 0x12A06Cu;
    SET_GPR_U32(ctx, 31, 0x12A074u);
    ctx->pc = 0x12A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A010u, 0x12A06Cu, 0x12A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A074u;
label_12a074:
    // 0x12a074: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12a074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a07c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12a07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a080: 0x3e00008  jr          $ra
    ctx->pc = 0x12A080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A088u;
    // 0x12a088: 0x0  nop
    ctx->pc = 0x12a088u;
    // NOP
    // 0x12a08c: 0x0  nop
    ctx->pc = 0x12a08cu;
    // NOP
    ctx->pc = 0x12a090u;
}
