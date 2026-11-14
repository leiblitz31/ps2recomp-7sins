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

// Function: sub_001C5550
// Address: 0x1c5550 - 0x1c5580
void sub_001C5550_0x1c5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5550_0x1c5550");
#endif

    switch (ctx->pc) {
        case 0x1c5568u: goto label_1c5568;
        default: break;
    }

    ctx->pc = 0x1c5550u;

    // 0x1c5550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c5558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c555c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5560: 0xc071424  jal         func_1C5090
    ctx->pc = 0x1C5560u;
    SET_GPR_U32(ctx, 31, 0x1C5568u);
    ctx->pc = 0x1C5090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5090u, 0x1C5560u, 0x1C5568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5568u;
label_1c5568:
    // 0x1c5568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c556c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c5570: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5578u;
    // 0x1c5578: 0x0  nop
    ctx->pc = 0x1c5578u;
    // NOP
    // 0x1c557c: 0x0  nop
    ctx->pc = 0x1c557cu;
    // NOP
    ctx->pc = 0x1c5580u;
}
