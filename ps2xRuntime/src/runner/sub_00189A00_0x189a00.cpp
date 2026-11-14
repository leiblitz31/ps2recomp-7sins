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

// Function: sub_00189A00
// Address: 0x189a00 - 0x189a40
void sub_00189A00_0x189a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189A00_0x189a00");
#endif

    switch (ctx->pc) {
        case 0x189a30u: goto label_189a30;
        default: break;
    }

    ctx->pc = 0x189a00u;

    // 0x189a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x189a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x189a0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x189a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x189a10: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x189a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x189a14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189a1c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x189a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189a20: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x189a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x189a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a28: 0xc062690  jal         func_189A40
    ctx->pc = 0x189A28u;
    SET_GPR_U32(ctx, 31, 0x189A30u);
    ctx->pc = 0x189A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189A40u, 0x189A28u, 0x189A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A30u;
label_189a30:
    // 0x189a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a34: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x189a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189a38: 0x3e00008  jr          $ra
    ctx->pc = 0x189A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189A40u;
}
