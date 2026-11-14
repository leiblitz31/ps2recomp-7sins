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

// Function: sub_002BDA20
// Address: 0x2bda20 - 0x2bda60
void sub_002BDA20_0x2bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDA20_0x2bda20");
#endif

    switch (ctx->pc) {
        case 0x2bda44u: goto label_2bda44;
        default: break;
    }

    ctx->pc = 0x2bda20u;

    // 0x2bda20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bda24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bda24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bda28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bda28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bda2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bda30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bda34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bda34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bda38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bda38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda3c: 0xc0af698  jal         func_2BDA60
    ctx->pc = 0x2BDA3Cu;
    SET_GPR_U32(ctx, 31, 0x2BDA44u);
    ctx->pc = 0x2BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDA60u, 0x2BDA3Cu, 0x2BDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA44u;
label_2bda44:
    // 0x2bda44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bda44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bda4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDA54u;
    // 0x2bda54: 0x0  nop
    ctx->pc = 0x2bda54u;
    // NOP
    // 0x2bda58: 0x0  nop
    ctx->pc = 0x2bda58u;
    // NOP
    // 0x2bda5c: 0x0  nop
    ctx->pc = 0x2bda5cu;
    // NOP
    ctx->pc = 0x2bda60u;
}
