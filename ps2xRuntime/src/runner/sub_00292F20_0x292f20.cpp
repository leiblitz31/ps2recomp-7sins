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

// Function: sub_00292F20
// Address: 0x292f20 - 0x292f90
void sub_00292F20_0x292f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292F20_0x292f20");
#endif

    switch (ctx->pc) {
        case 0x292f60u: goto label_292f60;
        case 0x292f6cu: goto label_292f6c;
        default: break;
    }

    ctx->pc = 0x292f20u;

    // 0x292f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x292f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x292f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292f30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x292f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x292f34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x292f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292f38: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x292f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x292f3c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x292f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292f40: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x292f44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x292f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x292f48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x292f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292f4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292f50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x292f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292f54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x292f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292f58: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x292F58u;
    SET_GPR_U32(ctx, 31, 0x292F60u);
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x292F58u, 0x292F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F60u;
label_292f60:
    // 0x292f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f64: 0xc119c5c  jal         func_467170
    ctx->pc = 0x292F64u;
    SET_GPR_U32(ctx, 31, 0x292F6Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x292F64u, 0x292F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292F6Cu;
label_292f6c:
    // 0x292f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x292f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292f78: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x292f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x292F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F84u;
    // 0x292f84: 0x0  nop
    ctx->pc = 0x292f84u;
    // NOP
    // 0x292f88: 0x0  nop
    ctx->pc = 0x292f88u;
    // NOP
    // 0x292f8c: 0x0  nop
    ctx->pc = 0x292f8cu;
    // NOP
    ctx->pc = 0x292f90u;
}
