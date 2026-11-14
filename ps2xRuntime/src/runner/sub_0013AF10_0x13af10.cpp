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

// Function: sub_0013AF10
// Address: 0x13af10 - 0x13afa0
void sub_0013AF10_0x13af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AF10_0x13af10");
#endif

    switch (ctx->pc) {
        case 0x13af3cu: goto label_13af3c;
        case 0x13af48u: goto label_13af48;
        case 0x13af64u: goto label_13af64;
        case 0x13af7cu: goto label_13af7c;
        default: break;
    }

    ctx->pc = 0x13af10u;

    // 0x13af10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13af14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13af18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13af1c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13af20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13af24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13af28: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13af2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13af30: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13af34: 0xc040304  jal         func_100C10
    ctx->pc = 0x13AF34u;
    SET_GPR_U32(ctx, 31, 0x13AF3Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13AF34u, 0x13AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF3Cu;
label_13af3c:
    // 0x13af3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13af40: 0xc041874  jal         func_1061D0
    ctx->pc = 0x13AF40u;
    SET_GPR_U32(ctx, 31, 0x13AF48u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x13AF40u, 0x13AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF48u;
label_13af48:
    // 0x13af48: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x13af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x13af4c: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x13af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13af50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13af50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13af54: 0x24a527e8  addiu       $a1, $a1, 0x27E8
    ctx->pc = 0x13af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10216));
    // 0x13af58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13af58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af5c: 0xc041b90  jal         func_106E40
    ctx->pc = 0x13AF5Cu;
    SET_GPR_U32(ctx, 31, 0x13AF64u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x13AF5Cu, 0x13AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF64u;
label_13af64:
    // 0x13af64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13af68: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13af68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13af6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13af70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13af70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13af74: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13AF74u;
    SET_GPR_U32(ctx, 31, 0x13AF7Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13AF74u, 0x13AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AF7Cu;
label_13af7c:
    // 0x13af7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13af7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13af80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13af80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13af84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13af84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13af8c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AF94u;
    // 0x13af94: 0x0  nop
    ctx->pc = 0x13af94u;
    // NOP
    // 0x13af98: 0x0  nop
    ctx->pc = 0x13af98u;
    // NOP
    // 0x13af9c: 0x0  nop
    ctx->pc = 0x13af9cu;
    // NOP
    ctx->pc = 0x13afa0u;
}
