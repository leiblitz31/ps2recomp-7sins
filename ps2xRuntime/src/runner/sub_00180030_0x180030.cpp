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

// Function: sub_00180030
// Address: 0x180030 - 0x180080
void sub_00180030_0x180030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180030_0x180030");
#endif

    switch (ctx->pc) {
        case 0x180050u: goto label_180050;
        case 0x180068u: goto label_180068;
        default: break;
    }

    ctx->pc = 0x180030u;

    // 0x180030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x180034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180038: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x180038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18003c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x180040: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x180040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x180044: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x180044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x180048: 0xc06003c  jal         func_1800F0
    ctx->pc = 0x180048u;
    SET_GPR_U32(ctx, 31, 0x180050u);
    ctx->pc = 0x1800F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800F0u, 0x180048u, 0x180050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180050u;
label_180050:
    // 0x180050: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180054: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180058: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x180058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18005c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x180060: 0xc060020  jal         func_180080
    ctx->pc = 0x180060u;
    SET_GPR_U32(ctx, 31, 0x180068u);
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x180060u, 0x180068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180068u;
label_180068:
    // 0x180068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18006c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x180070: 0x3e00008  jr          $ra
    ctx->pc = 0x180070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180078u;
    // 0x180078: 0x0  nop
    ctx->pc = 0x180078u;
    // NOP
    // 0x18007c: 0x0  nop
    ctx->pc = 0x18007cu;
    // NOP
    ctx->pc = 0x180080u;
}
