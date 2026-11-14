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

// Function: sub_00152D70
// Address: 0x152d70 - 0x152dc0
void sub_00152D70_0x152d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152D70_0x152d70");
#endif

    switch (ctx->pc) {
        case 0x152d94u: goto label_152d94;
        default: break;
    }

    ctx->pc = 0x152d70u;

    // 0x152d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x152d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x152d7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x152d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x152d80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x152d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x152d84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x152d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152d88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x152d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152d8c: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x152D8Cu;
    SET_GPR_U32(ctx, 31, 0x152D94u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x152D8Cu, 0x152D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D94u;
label_152d94:
    // 0x152d94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x152d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152d98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x152d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x152d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152da0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x152da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x152da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x152da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152dac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152db0: 0x3e00008  jr          $ra
    ctx->pc = 0x152DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DB8u;
    // 0x152db8: 0x0  nop
    ctx->pc = 0x152db8u;
    // NOP
    // 0x152dbc: 0x0  nop
    ctx->pc = 0x152dbcu;
    // NOP
    ctx->pc = 0x152dc0u;
}
