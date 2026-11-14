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

// Function: sub_00102D20
// Address: 0x102d20 - 0x102d60
void sub_00102D20_0x102d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102D20_0x102d20");
#endif

    switch (ctx->pc) {
        case 0x102d44u: goto label_102d44;
        default: break;
    }

    ctx->pc = 0x102d20u;

    // 0x102d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102d30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102d34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d3c: 0xc040b58  jal         func_102D60
    ctx->pc = 0x102D3Cu;
    SET_GPR_U32(ctx, 31, 0x102D44u);
    ctx->pc = 0x102D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D60u, 0x102D3Cu, 0x102D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D44u;
label_102d44:
    // 0x102d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x102D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D54u;
    // 0x102d54: 0x0  nop
    ctx->pc = 0x102d54u;
    // NOP
    // 0x102d58: 0x0  nop
    ctx->pc = 0x102d58u;
    // NOP
    // 0x102d5c: 0x0  nop
    ctx->pc = 0x102d5cu;
    // NOP
    ctx->pc = 0x102d60u;
}
