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

// Function: sub_002DFC30
// Address: 0x2dfc30 - 0x2dfca0
void sub_002DFC30_0x2dfc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC30_0x2dfc30");
#endif

    switch (ctx->pc) {
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc7cu: goto label_2dfc7c;
        default: break;
    }

    ctx->pc = 0x2dfc30u;

    // 0x2dfc30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dfc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dfc34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dfc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dfc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfc3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfc40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dfc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2dfc44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfc48: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2dfc4c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2dfc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfc50: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2dfc54: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dfc58: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2dfc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dfc5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dfc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfc60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2dfc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dfc64: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2dfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfc68: 0xc0b7f28  jal         func_2DFCA0
    ctx->pc = 0x2DFC68u;
    SET_GPR_U32(ctx, 31, 0x2DFC70u);
    ctx->pc = 0x2DFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFCA0u, 0x2DFC68u, 0x2DFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC70u;
label_2dfc70:
    // 0x2dfc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc74: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2DFC74u;
    SET_GPR_U32(ctx, 31, 0x2DFC7Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2DFC74u, 0x2DFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC7Cu;
label_2dfc7c:
    // 0x2dfc7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dfc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dfc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dfc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFC94u;
    // 0x2dfc94: 0x0  nop
    ctx->pc = 0x2dfc94u;
    // NOP
    // 0x2dfc98: 0x0  nop
    ctx->pc = 0x2dfc98u;
    // NOP
    // 0x2dfc9c: 0x0  nop
    ctx->pc = 0x2dfc9cu;
    // NOP
    ctx->pc = 0x2dfca0u;
}
