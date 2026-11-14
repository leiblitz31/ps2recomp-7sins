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

// Function: sub_001B9320
// Address: 0x1b9320 - 0x1b9360
void sub_001B9320_0x1b9320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9320_0x1b9320");
#endif

    switch (ctx->pc) {
        case 0x1b9344u: goto label_1b9344;
        default: break;
    }

    ctx->pc = 0x1b9320u;

    // 0x1b9320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9328: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b932c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b9330: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9334: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b9334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b933c: 0xc06e4d8  jal         func_1B9360
    ctx->pc = 0x1B933Cu;
    SET_GPR_U32(ctx, 31, 0x1B9344u);
    ctx->pc = 0x1B9360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9360u, 0x1B933Cu, 0x1B9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9344u;
label_1b9344:
    // 0x1b9344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9348: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b934c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9354u;
    // 0x1b9354: 0x0  nop
    ctx->pc = 0x1b9354u;
    // NOP
    // 0x1b9358: 0x0  nop
    ctx->pc = 0x1b9358u;
    // NOP
    // 0x1b935c: 0x0  nop
    ctx->pc = 0x1b935cu;
    // NOP
    ctx->pc = 0x1b9360u;
}
