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

// Function: sub_0018C550
// Address: 0x18c550 - 0x18c590
void sub_0018C550_0x18c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C550_0x18c550");
#endif

    switch (ctx->pc) {
        case 0x18c578u: goto label_18c578;
        default: break;
    }

    ctx->pc = 0x18c550u;

    // 0x18c550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c558: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18c558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18c55c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18c560: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x18c560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c564: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c568: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c56c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18c570: 0xc063164  jal         func_18C590
    ctx->pc = 0x18C570u;
    SET_GPR_U32(ctx, 31, 0x18C578u);
    ctx->pc = 0x18C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C590u, 0x18C570u, 0x18C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C578u;
label_18c578:
    // 0x18c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c57c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18c580: 0x3e00008  jr          $ra
    ctx->pc = 0x18C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C588u;
    // 0x18c588: 0x0  nop
    ctx->pc = 0x18c588u;
    // NOP
    // 0x18c58c: 0x0  nop
    ctx->pc = 0x18c58cu;
    // NOP
    ctx->pc = 0x18c590u;
}
