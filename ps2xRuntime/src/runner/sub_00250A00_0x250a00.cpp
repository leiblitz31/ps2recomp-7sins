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

// Function: sub_00250A00
// Address: 0x250a00 - 0x250a40
void sub_00250A00_0x250a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250A00_0x250a00");
#endif

    switch (ctx->pc) {
        case 0x250a28u: goto label_250a28;
        default: break;
    }

    ctx->pc = 0x250a00u;

    // 0x250a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x250a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x250a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250a08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x250a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x250a0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x250a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x250a10: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x250a10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x250a14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x250a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250a18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x250a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250a1c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x250a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x250a20: 0xc094290  jal         func_250A40
    ctx->pc = 0x250A20u;
    SET_GPR_U32(ctx, 31, 0x250A28u);
    ctx->pc = 0x250A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A40u, 0x250A20u, 0x250A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A28u;
label_250a28:
    // 0x250a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x250a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x250a30: 0x3e00008  jr          $ra
    ctx->pc = 0x250A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250A38u;
    // 0x250a38: 0x0  nop
    ctx->pc = 0x250a38u;
    // NOP
    // 0x250a3c: 0x0  nop
    ctx->pc = 0x250a3cu;
    // NOP
    ctx->pc = 0x250a40u;
}
