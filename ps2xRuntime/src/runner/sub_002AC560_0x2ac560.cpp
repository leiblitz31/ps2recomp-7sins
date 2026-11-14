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

// Function: sub_002AC560
// Address: 0x2ac560 - 0x2ac5a0
void sub_002AC560_0x2ac560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC560_0x2ac560");
#endif

    switch (ctx->pc) {
        case 0x2ac588u: goto label_2ac588;
        default: break;
    }

    ctx->pc = 0x2ac560u;

    // 0x2ac560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac568: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ac568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ac56c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2ac56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2ac570: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2ac570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac574: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ac574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac578: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ac578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac57c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ac57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ac580: 0xc0ab168  jal         func_2AC5A0
    ctx->pc = 0x2AC580u;
    SET_GPR_U32(ctx, 31, 0x2AC588u);
    ctx->pc = 0x2AC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5A0u, 0x2AC580u, 0x2AC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC588u;
label_2ac588:
    // 0x2ac588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac58c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ac590: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC598u;
    // 0x2ac598: 0x0  nop
    ctx->pc = 0x2ac598u;
    // NOP
    // 0x2ac59c: 0x0  nop
    ctx->pc = 0x2ac59cu;
    // NOP
    ctx->pc = 0x2ac5a0u;
}
