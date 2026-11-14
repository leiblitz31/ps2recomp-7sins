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

// Function: sub_00280B10
// Address: 0x280b10 - 0x280b70
void sub_00280B10_0x280b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280B10_0x280b10");
#endif

    switch (ctx->pc) {
        case 0x280b44u: goto label_280b44;
        case 0x280b50u: goto label_280b50;
        default: break;
    }

    ctx->pc = 0x280b10u;

    // 0x280b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280b20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x280b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x280b24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x280b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280b28: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x280b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x280b2c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x280b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280b30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x280b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280b34: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x280b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x280b38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x280b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280b3c: 0xc04cbfc  jal         func_132FF0
    ctx->pc = 0x280B3Cu;
    SET_GPR_U32(ctx, 31, 0x280B44u);
    ctx->pc = 0x132FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FF0u, 0x280B3Cu, 0x280B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B44u;
label_280b44:
    // 0x280b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b48: 0xc119c5c  jal         func_467170
    ctx->pc = 0x280B48u;
    SET_GPR_U32(ctx, 31, 0x280B50u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x280B48u, 0x280B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B50u;
label_280b50:
    // 0x280b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x280b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280b5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x280b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x280b60: 0x3e00008  jr          $ra
    ctx->pc = 0x280B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B68u;
    // 0x280b68: 0x0  nop
    ctx->pc = 0x280b68u;
    // NOP
    // 0x280b6c: 0x0  nop
    ctx->pc = 0x280b6cu;
    // NOP
    ctx->pc = 0x280b70u;
}
