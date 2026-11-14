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

// Function: sub_0023F540
// Address: 0x23f540 - 0x23f580
void sub_0023F540_0x23f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F540_0x23f540");
#endif

    switch (ctx->pc) {
        case 0x23f568u: goto label_23f568;
        default: break;
    }

    ctx->pc = 0x23f540u;

    // 0x23f540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f548: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f54c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23f550: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x23f550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f554: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f558: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23f558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f55c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23f560: 0xc08fd60  jal         func_23F580
    ctx->pc = 0x23F560u;
    SET_GPR_U32(ctx, 31, 0x23F568u);
    ctx->pc = 0x23F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F580u, 0x23F560u, 0x23F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f56c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23f56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f570: 0x3e00008  jr          $ra
    ctx->pc = 0x23F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F578u;
    // 0x23f578: 0x0  nop
    ctx->pc = 0x23f578u;
    // NOP
    // 0x23f57c: 0x0  nop
    ctx->pc = 0x23f57cu;
    // NOP
    ctx->pc = 0x23f580u;
}
