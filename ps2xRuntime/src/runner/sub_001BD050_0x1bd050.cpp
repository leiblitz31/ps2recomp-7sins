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

// Function: sub_001BD050
// Address: 0x1bd050 - 0x1bd090
void sub_001BD050_0x1bd050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD050_0x1bd050");
#endif

    switch (ctx->pc) {
        case 0x1bd078u: goto label_1bd078;
        default: break;
    }

    ctx->pc = 0x1bd050u;

    // 0x1bd050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bd050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bd054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd058: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bd058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bd05c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bd060: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1bd060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bd064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd068: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1bd068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd06c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1bd070: 0xc06f424  jal         func_1BD090
    ctx->pc = 0x1BD070u;
    SET_GPR_U32(ctx, 31, 0x1BD078u);
    ctx->pc = 0x1BD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD090u, 0x1BD070u, 0x1BD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD078u;
label_1bd078:
    // 0x1bd078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd07c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bd07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bd080: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD088u;
    // 0x1bd088: 0x0  nop
    ctx->pc = 0x1bd088u;
    // NOP
    // 0x1bd08c: 0x0  nop
    ctx->pc = 0x1bd08cu;
    // NOP
    ctx->pc = 0x1bd090u;
}
