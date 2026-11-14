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

// Function: sub_00213B00
// Address: 0x213b00 - 0x213b30
void sub_00213B00_0x213b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B00_0x213b00");
#endif

    switch (ctx->pc) {
        case 0x213b18u: goto label_213b18;
        default: break;
    }

    ctx->pc = 0x213b00u;

    // 0x213b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b10: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x213B10u;
    SET_GPR_U32(ctx, 31, 0x213B18u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x213B10u, 0x213B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B18u;
label_213b18:
    // 0x213b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x213b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213b20: 0x3e00008  jr          $ra
    ctx->pc = 0x213B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B28u;
    // 0x213b28: 0x0  nop
    ctx->pc = 0x213b28u;
    // NOP
    // 0x213b2c: 0x0  nop
    ctx->pc = 0x213b2cu;
    // NOP
    ctx->pc = 0x213b30u;
}
