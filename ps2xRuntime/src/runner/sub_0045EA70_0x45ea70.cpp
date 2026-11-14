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

// Function: sub_0045EA70
// Address: 0x45ea70 - 0x45eae0
void sub_0045EA70_0x45ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EA70_0x45ea70");
#endif

    switch (ctx->pc) {
        case 0x45eab0u: goto label_45eab0;
        case 0x45eabcu: goto label_45eabc;
        default: break;
    }

    ctx->pc = 0x45ea70u;

    // 0x45ea70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45ea74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45ea78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ea7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ea80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45ea84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ea88: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x45ea88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x45ea8c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x45ea8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45ea90: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x45ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x45ea94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x45ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x45ea98: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45ea9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45eaa0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45eaa4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45eaa8: 0xc117ab8  jal         func_45EAE0
    ctx->pc = 0x45EAA8u;
    SET_GPR_U32(ctx, 31, 0x45EAB0u);
    ctx->pc = 0x45EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EAE0u, 0x45EAA8u, 0x45EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EAB0u;
label_45eab0:
    // 0x45eab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45eab4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x45EAB4u;
    SET_GPR_U32(ctx, 31, 0x45EABCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x45EAB4u, 0x45EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EABCu;
label_45eabc:
    // 0x45eabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45eabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45eac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45eac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45eac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45eac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45eac8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45eacc: 0x3e00008  jr          $ra
    ctx->pc = 0x45EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EAD4u;
    // 0x45ead4: 0x0  nop
    ctx->pc = 0x45ead4u;
    // NOP
    // 0x45ead8: 0x0  nop
    ctx->pc = 0x45ead8u;
    // NOP
    // 0x45eadc: 0x0  nop
    ctx->pc = 0x45eadcu;
    // NOP
    ctx->pc = 0x45eae0u;
}
