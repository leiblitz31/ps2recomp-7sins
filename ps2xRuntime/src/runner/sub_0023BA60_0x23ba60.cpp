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

// Function: sub_0023BA60
// Address: 0x23ba60 - 0x23bac0
void sub_0023BA60_0x23ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BA60_0x23ba60");
#endif

    switch (ctx->pc) {
        case 0x23ba98u: goto label_23ba98;
        case 0x23baa4u: goto label_23baa4;
        default: break;
    }

    ctx->pc = 0x23ba60u;

    // 0x23ba60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ba64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ba68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23ba6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ba70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x23ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x23ba74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ba78: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x23ba78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x23ba7c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ba80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23ba84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ba88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x23ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ba8c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ba90: 0xc08eeb0  jal         func_23BAC0
    ctx->pc = 0x23BA90u;
    SET_GPR_U32(ctx, 31, 0x23BA98u);
    ctx->pc = 0x23BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BAC0u, 0x23BA90u, 0x23BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA98u;
label_23ba98:
    // 0x23ba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba9c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23BA9Cu;
    SET_GPR_U32(ctx, 31, 0x23BAA4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23BA9Cu, 0x23BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAA4u;
label_23baa4:
    // 0x23baa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23baa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23baa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23baa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23baac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23baacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bab0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x23BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BABCu;
    // 0x23babc: 0x0  nop
    ctx->pc = 0x23babcu;
    // NOP
    ctx->pc = 0x23bac0u;
}
