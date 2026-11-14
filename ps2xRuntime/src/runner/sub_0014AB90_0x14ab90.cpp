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

// Function: sub_0014AB90
// Address: 0x14ab90 - 0x14abd0
void sub_0014AB90_0x14ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AB90_0x14ab90");
#endif

    switch (ctx->pc) {
        case 0x14abb0u: goto label_14abb0;
        default: break;
    }

    ctx->pc = 0x14ab90u;

    // 0x14ab90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ab94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ab98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14ab9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14aba0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aba4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aba8: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x14ABA8u;
    SET_GPR_U32(ctx, 31, 0x14ABB0u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x14ABA8u, 0x14ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABB0u;
label_14abb0:
    // 0x14abb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14abb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14abb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14abb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14abb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14abbc: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ABC4u;
    // 0x14abc4: 0x0  nop
    ctx->pc = 0x14abc4u;
    // NOP
    // 0x14abc8: 0x0  nop
    ctx->pc = 0x14abc8u;
    // NOP
    // 0x14abcc: 0x0  nop
    ctx->pc = 0x14abccu;
    // NOP
    ctx->pc = 0x14abd0u;
}
