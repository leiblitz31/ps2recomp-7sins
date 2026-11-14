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

// Function: sub_00157D20
// Address: 0x157d20 - 0x157d70
void sub_00157D20_0x157d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157D20_0x157d20");
#endif

    switch (ctx->pc) {
        case 0x157d44u: goto label_157d44;
        default: break;
    }

    ctx->pc = 0x157d20u;

    // 0x157d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x157d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x157d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x157d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x157d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x157d30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x157d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x157d34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157d38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x157d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157d3c: 0xc055f5c  jal         func_157D70
    ctx->pc = 0x157D3Cu;
    SET_GPR_U32(ctx, 31, 0x157D44u);
    ctx->pc = 0x157D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157D70u, 0x157D3Cu, 0x157D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D44u;
label_157d44:
    // 0x157d44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x157d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157d48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x157d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157d4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x157d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157d50: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x157d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x157d54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x157d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157d60: 0x3e00008  jr          $ra
    ctx->pc = 0x157D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157D68u;
    // 0x157d68: 0x0  nop
    ctx->pc = 0x157d68u;
    // NOP
    // 0x157d6c: 0x0  nop
    ctx->pc = 0x157d6cu;
    // NOP
    ctx->pc = 0x157d70u;
}
