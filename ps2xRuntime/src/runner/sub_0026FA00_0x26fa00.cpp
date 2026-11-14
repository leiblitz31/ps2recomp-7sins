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

// Function: sub_0026FA00
// Address: 0x26fa00 - 0x26fa40
void sub_0026FA00_0x26fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FA00_0x26fa00");
#endif

    switch (ctx->pc) {
        case 0x26fa28u: goto label_26fa28;
        default: break;
    }

    ctx->pc = 0x26fa00u;

    // 0x26fa00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26fa04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fa08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fa0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26fa10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x26fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x26fa14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fa18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fa1c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x26fa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26fa20: 0xc041934  jal         func_1064D0
    ctx->pc = 0x26FA20u;
    SET_GPR_U32(ctx, 31, 0x26FA28u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x26FA20u, 0x26FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FA28u;
label_26fa28:
    // 0x26fa28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fa2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26fa2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26fa30: 0x3e00008  jr          $ra
    ctx->pc = 0x26FA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FA38u;
    // 0x26fa38: 0x0  nop
    ctx->pc = 0x26fa38u;
    // NOP
    // 0x26fa3c: 0x0  nop
    ctx->pc = 0x26fa3cu;
    // NOP
    ctx->pc = 0x26fa40u;
}
