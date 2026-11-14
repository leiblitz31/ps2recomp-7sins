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

// Function: sub_00261D30
// Address: 0x261d30 - 0x261d70
void sub_00261D30_0x261d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261D30_0x261d30");
#endif

    switch (ctx->pc) {
        case 0x261d54u: goto label_261d54;
        default: break;
    }

    ctx->pc = 0x261d30u;

    // 0x261d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x261d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x261d40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261d44: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x261d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261d48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d4c: 0xc09875c  jal         func_261D70
    ctx->pc = 0x261D4Cu;
    SET_GPR_U32(ctx, 31, 0x261D54u);
    ctx->pc = 0x261D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D70u, 0x261D4Cu, 0x261D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D54u;
label_261d54:
    // 0x261d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261d58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x261D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261D64u;
    // 0x261d64: 0x0  nop
    ctx->pc = 0x261d64u;
    // NOP
    // 0x261d68: 0x0  nop
    ctx->pc = 0x261d68u;
    // NOP
    // 0x261d6c: 0x0  nop
    ctx->pc = 0x261d6cu;
    // NOP
    ctx->pc = 0x261d70u;
}
