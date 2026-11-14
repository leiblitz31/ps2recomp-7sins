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

// Function: sub_0039CEA8
// Address: 0x39cea8 - 0x39cec8
void sub_0039CEA8_0x39cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CEA8_0x39cea8");
#endif

    switch (ctx->pc) {
        case 0x39ceb8u: goto label_39ceb8;
        default: break;
    }

    ctx->pc = 0x39cea8u;

    // 0x39cea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ceb0: 0xc0e82f0  jal         func_3A0BC0
    ctx->pc = 0x39CEB0u;
    SET_GPR_U32(ctx, 31, 0x39CEB8u);
    ctx->pc = 0x3A0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BC0u, 0x39CEB0u, 0x39CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEB8u;
label_39ceb8:
    // 0x39ceb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x39CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEBCu;
        // 0x39cec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CEC4u;
    // 0x39cec4: 0x0  nop
    ctx->pc = 0x39cec4u;
    // NOP
    ctx->pc = 0x39cec8u;
}
