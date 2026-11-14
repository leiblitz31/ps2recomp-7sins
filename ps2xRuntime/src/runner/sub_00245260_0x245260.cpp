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

// Function: sub_00245260
// Address: 0x245260 - 0x2452a0
void sub_00245260_0x245260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245260_0x245260");
#endif

    switch (ctx->pc) {
        case 0x245288u: goto label_245288;
        default: break;
    }

    ctx->pc = 0x245260u;

    // 0x245260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245268: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x245268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24526c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x245270: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x245270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x245274: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x245274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245278: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x245278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24527c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x24527cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x245280: 0xc0914a8  jal         func_2452A0
    ctx->pc = 0x245280u;
    SET_GPR_U32(ctx, 31, 0x245288u);
    ctx->pc = 0x2452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452A0u, 0x245280u, 0x245288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245288u;
label_245288:
    // 0x245288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24528c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x245290: 0x3e00008  jr          $ra
    ctx->pc = 0x245290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245298u;
    // 0x245298: 0x0  nop
    ctx->pc = 0x245298u;
    // NOP
    // 0x24529c: 0x0  nop
    ctx->pc = 0x24529cu;
    // NOP
    ctx->pc = 0x2452a0u;
}
