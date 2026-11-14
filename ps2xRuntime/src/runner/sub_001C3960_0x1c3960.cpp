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

// Function: sub_001C3960
// Address: 0x1c3960 - 0x1c39a0
void sub_001C3960_0x1c3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3960_0x1c3960");
#endif

    switch (ctx->pc) {
        case 0x1c398cu: goto label_1c398c;
        default: break;
    }

    ctx->pc = 0x1c3960u;

    // 0x1c3960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c3964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3968: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c3968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c396c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c3970: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c3970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c3974: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c3974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3978: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c3978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c397c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3980: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c3984: 0xc070e68  jal         func_1C39A0
    ctx->pc = 0x1C3984u;
    SET_GPR_U32(ctx, 31, 0x1C398Cu);
    ctx->pc = 0x1C39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C39A0u, 0x1C3984u, 0x1C398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C398Cu;
label_1c398c:
    // 0x1c398c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3990: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c3994: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C399Cu;
    // 0x1c399c: 0x0  nop
    ctx->pc = 0x1c399cu;
    // NOP
    ctx->pc = 0x1c39a0u;
}
