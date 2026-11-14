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

// Function: sub_00113F30
// Address: 0x113f30 - 0x113fb0
void sub_00113F30_0x113f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113F30_0x113f30");
#endif

    switch (ctx->pc) {
        case 0x113f6cu: goto label_113f6c;
        case 0x113f7cu: goto label_113f7c;
        default: break;
    }

    ctx->pc = 0x113f30u;

    // 0x113f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113f34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x113f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x113f38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x113f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x113f40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x113f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f44: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x113f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113f48: 0x3e00008  jr          $ra
    ctx->pc = 0x113F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F50u;
    // 0x113f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113f5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x113f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x113f60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f64: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x113F64u;
    SET_GPR_U32(ctx, 31, 0x113F6Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x113F64u, 0x113F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F6Cu;
label_113f6c:
    // 0x113f6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x113f6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x113f70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f74: 0xc044f04  jal         func_113C10
    ctx->pc = 0x113F74u;
    SET_GPR_U32(ctx, 31, 0x113F7Cu);
    ctx->pc = 0x113C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113C10u, 0x113F74u, 0x113F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F7Cu;
label_113f7c:
    // 0x113f7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x113f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x113f80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x113f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x113f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x113f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x113f88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x113f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x113f8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x113f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x113f90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x113f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x113f94: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x113f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x113f98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113fa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x113fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x113FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113FB0u;
}
