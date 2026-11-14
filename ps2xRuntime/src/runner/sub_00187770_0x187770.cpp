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

// Function: sub_00187770
// Address: 0x187770 - 0x1877b0
void sub_00187770_0x187770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187770_0x187770");
#endif

    switch (ctx->pc) {
        case 0x187788u: goto label_187788;
        case 0x187798u: goto label_187798;
        default: break;
    }

    ctx->pc = 0x187770u;

    // 0x187770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187778: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18777c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187780: 0xc061dec  jal         func_1877B0
    ctx->pc = 0x187780u;
    SET_GPR_U32(ctx, 31, 0x187788u);
    ctx->pc = 0x1877B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877B0u, 0x187780u, 0x187788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187788u;
label_187788:
    // 0x187788: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x187788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18778c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187790: 0xc061df4  jal         func_1877D0
    ctx->pc = 0x187790u;
    SET_GPR_U32(ctx, 31, 0x187798u);
    ctx->pc = 0x1877D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877D0u, 0x187790u, 0x187798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187798u;
label_187798:
    // 0x187798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18779c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1877a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1877A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1877A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1877A8u;
    // 0x1877a8: 0x0  nop
    ctx->pc = 0x1877a8u;
    // NOP
    // 0x1877ac: 0x0  nop
    ctx->pc = 0x1877acu;
    // NOP
    ctx->pc = 0x1877b0u;
}
