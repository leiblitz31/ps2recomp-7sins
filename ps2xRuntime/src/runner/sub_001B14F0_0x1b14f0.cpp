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

// Function: sub_001B14F0
// Address: 0x1b14f0 - 0x1b1530
void sub_001B14F0_0x1b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14F0_0x1b14f0");
#endif

    switch (ctx->pc) {
        case 0x1b150cu: goto label_1b150c;
        default: break;
    }

    ctx->pc = 0x1b14f0u;

    // 0x1b14f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b14f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b14f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b14fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b1500: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1504: 0xc06c54c  jal         func_1B1530
    ctx->pc = 0x1B1504u;
    SET_GPR_U32(ctx, 31, 0x1B150Cu);
    ctx->pc = 0x1B1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1530u, 0x1B1504u, 0x1B150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B150Cu;
label_1b150c:
    // 0x1b150c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b150cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1510: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b151c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1524: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b1524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b1528: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1530u;
}
