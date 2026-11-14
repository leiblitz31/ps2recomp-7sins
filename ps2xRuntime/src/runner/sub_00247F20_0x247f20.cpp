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

// Function: sub_00247F20
// Address: 0x247f20 - 0x247fa0
void sub_00247F20_0x247f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F20_0x247f20");
#endif

    switch (ctx->pc) {
        case 0x247f40u: goto label_247f40;
        case 0x247f50u: goto label_247f50;
        case 0x247f68u: goto label_247f68;
        case 0x247f80u: goto label_247f80;
        default: break;
    }

    ctx->pc = 0x247f20u;

    // 0x247f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x247f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x247f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247f30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247f38: 0xc091fe8  jal         func_247FA0
    ctx->pc = 0x247F38u;
    SET_GPR_U32(ctx, 31, 0x247F40u);
    ctx->pc = 0x247FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247FA0u, 0x247F38u, 0x247F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F40u;
label_247f40:
    // 0x247f40: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x247f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x247f44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f48: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x247F48u;
    SET_GPR_U32(ctx, 31, 0x247F50u);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x247F48u, 0x247F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F50u;
label_247f50:
    // 0x247f50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x247f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x247f54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f58: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247f5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f60: 0xc064084  jal         func_190210
    ctx->pc = 0x247F60u;
    SET_GPR_U32(ctx, 31, 0x247F68u);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x247F60u, 0x247F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F68u;
label_247f68:
    // 0x247f68: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247f6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247f74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f78: 0xc091ee8  jal         func_247BA0
    ctx->pc = 0x247F78u;
    SET_GPR_U32(ctx, 31, 0x247F80u);
    ctx->pc = 0x247BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BA0u, 0x247F78u, 0x247F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F80u;
label_247f80:
    // 0x247f80: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247f90: 0x3e00008  jr          $ra
    ctx->pc = 0x247F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F98u;
    // 0x247f98: 0x0  nop
    ctx->pc = 0x247f98u;
    // NOP
    // 0x247f9c: 0x0  nop
    ctx->pc = 0x247f9cu;
    // NOP
    ctx->pc = 0x247fa0u;
}
