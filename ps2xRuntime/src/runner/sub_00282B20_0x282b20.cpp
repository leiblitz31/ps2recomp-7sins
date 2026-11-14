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

// Function: sub_00282B20
// Address: 0x282b20 - 0x282b70
void sub_00282B20_0x282b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282B20_0x282b20");
#endif

    switch (ctx->pc) {
        case 0x282b44u: goto label_282b44;
        default: break;
    }

    ctx->pc = 0x282b20u;

    // 0x282b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x282b2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x282b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x282b30: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x282b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x282b34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b38: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x282b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282b3c: 0xc09f8c8  jal         func_27E320
    ctx->pc = 0x282B3Cu;
    SET_GPR_U32(ctx, 31, 0x282B44u);
    ctx->pc = 0x27E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E320u, 0x282B3Cu, 0x282B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B44u;
label_282b44:
    // 0x282b44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x282b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282b48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x282b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282b4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b50: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x282b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x282b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282b5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282b60: 0x3e00008  jr          $ra
    ctx->pc = 0x282B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282B68u;
    // 0x282b68: 0x0  nop
    ctx->pc = 0x282b68u;
    // NOP
    // 0x282b6c: 0x0  nop
    ctx->pc = 0x282b6cu;
    // NOP
    ctx->pc = 0x282b70u;
}
