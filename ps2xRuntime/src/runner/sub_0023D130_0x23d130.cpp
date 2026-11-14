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

// Function: sub_0023D130
// Address: 0x23d130 - 0x23d170
void sub_0023D130_0x23d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D130_0x23d130");
#endif

    switch (ctx->pc) {
        case 0x23d148u: goto label_23d148;
        case 0x23d158u: goto label_23d158;
        default: break;
    }

    ctx->pc = 0x23d130u;

    // 0x23d130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d138: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23d138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23d13c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d140: 0xc08f464  jal         func_23D190
    ctx->pc = 0x23D140u;
    SET_GPR_U32(ctx, 31, 0x23D148u);
    ctx->pc = 0x23D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D190u, 0x23D140u, 0x23D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D148u;
label_23d148:
    // 0x23d148: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23d14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d150: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23D150u;
    SET_GPR_U32(ctx, 31, 0x23D158u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23D150u, 0x23D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D158u;
label_23d158:
    // 0x23d158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d15c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23d160: 0x3e00008  jr          $ra
    ctx->pc = 0x23D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D168u;
    // 0x23d168: 0x0  nop
    ctx->pc = 0x23d168u;
    // NOP
    // 0x23d16c: 0x0  nop
    ctx->pc = 0x23d16cu;
    // NOP
    ctx->pc = 0x23d170u;
}
