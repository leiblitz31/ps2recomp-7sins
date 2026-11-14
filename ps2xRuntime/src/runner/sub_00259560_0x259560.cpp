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

// Function: sub_00259560
// Address: 0x259560 - 0x2595a0
void sub_00259560_0x259560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259560_0x259560");
#endif

    switch (ctx->pc) {
        case 0x259580u: goto label_259580;
        default: break;
    }

    ctx->pc = 0x259560u;

    // 0x259560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25956c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259570: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259574: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259578: 0xc096568  jal         func_2595A0
    ctx->pc = 0x259578u;
    SET_GPR_U32(ctx, 31, 0x259580u);
    ctx->pc = 0x2595A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2595A0u, 0x259578u, 0x259580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259580u;
label_259580:
    // 0x259580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259588: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25958c: 0x3e00008  jr          $ra
    ctx->pc = 0x25958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259594u;
    // 0x259594: 0x0  nop
    ctx->pc = 0x259594u;
    // NOP
    // 0x259598: 0x0  nop
    ctx->pc = 0x259598u;
    // NOP
    // 0x25959c: 0x0  nop
    ctx->pc = 0x25959cu;
    // NOP
    ctx->pc = 0x2595a0u;
}
