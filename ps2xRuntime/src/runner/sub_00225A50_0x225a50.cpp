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

// Function: sub_00225A50
// Address: 0x225a50 - 0x225ac0
void sub_00225A50_0x225a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A50_0x225a50");
#endif

    switch (ctx->pc) {
        case 0x225a50u: goto label_225a50;
        case 0x225a54u: goto label_225a54;
        case 0x225a58u: goto label_225a58;
        case 0x225a5cu: goto label_225a5c;
        case 0x225a60u: goto label_225a60;
        case 0x225a64u: goto label_225a64;
        case 0x225a68u: goto label_225a68;
        case 0x225a6cu: goto label_225a6c;
        case 0x225a70u: goto label_225a70;
        case 0x225a74u: goto label_225a74;
        case 0x225a78u: goto label_225a78;
        case 0x225a7cu: goto label_225a7c;
        case 0x225a80u: goto label_225a80;
        case 0x225a84u: goto label_225a84;
        case 0x225a88u: goto label_225a88;
        case 0x225a8cu: goto label_225a8c;
        case 0x225a90u: goto label_225a90;
        case 0x225a94u: goto label_225a94;
        case 0x225a98u: goto label_225a98;
        case 0x225a9cu: goto label_225a9c;
        case 0x225aa0u: goto label_225aa0;
        case 0x225aa4u: goto label_225aa4;
        case 0x225aa8u: goto label_225aa8;
        case 0x225aacu: goto label_225aac;
        case 0x225ab0u: goto label_225ab0;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ab8u: goto label_225ab8;
        case 0x225abcu: goto label_225abc;
        default: break;
    }

    ctx->pc = 0x225a50u;

label_225a50:
    // 0x225a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_225a54:
    // 0x225a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225a58:
    // 0x225a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225a5c:
    // 0x225a5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x225a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_225a60:
    // 0x225a60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x225a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_225a64:
    // 0x225a64: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x225a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_225a68:
    // 0x225a68: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_225a6c:
    // 0x225a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225a70:
    // 0x225a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225a74:
    // 0x225a74: 0xc0896b0  jal         func_225AC0
label_225a78:
    if (ctx->pc == 0x225A78u) {
        ctx->pc = 0x225A7Cu;
        goto label_225a7c;
    }
    ctx->pc = 0x225A74u;
    SET_GPR_U32(ctx, 31, 0x225A7Cu);
    ctx->pc = 0x225AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225AC0u, 0x225A74u, 0x225A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A7Cu;
label_225a7c:
    // 0x225a7c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_225a80:
    // 0x225a80: 0x26105620  addiu       $s0, $s0, 0x5620
    ctx->pc = 0x225a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22048));
label_225a84:
    // 0x225a84: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x225a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_225a88:
    // 0x225a88: 0x200f809  jalr        $s0
label_225a8c:
    if (ctx->pc == 0x225A8Cu) {
        ctx->pc = 0x225A90u;
        goto label_225a90;
    }
    ctx->pc = 0x225A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x225A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225A88u, 0x225A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225A90u;
label_225a90:
    // 0x225a90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x225a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_225a94:
    // 0x225a94: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x225a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225a98:
    // 0x225a98: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_225a9c:
    // 0x225a9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x225a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_225aa0:
    // 0x225aa0: 0xc088894  jal         func_222250
label_225aa4:
    if (ctx->pc == 0x225AA4u) {
        ctx->pc = 0x225AA8u;
        goto label_225aa8;
    }
    ctx->pc = 0x225AA0u;
    SET_GPR_U32(ctx, 31, 0x225AA8u);
    ctx->pc = 0x222250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222250u, 0x225AA0u, 0x225AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AA8u;
label_225aa8:
    // 0x225aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225aac:
    // 0x225aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225ab0:
    // 0x225ab0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_225ab4:
    // 0x225ab4: 0x3e00008  jr          $ra
label_225ab8:
    if (ctx->pc == 0x225AB8u) {
        ctx->pc = 0x225ABCu;
        goto label_225abc;
    }
    ctx->pc = 0x225AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225ABCu;
label_225abc:
    // 0x225abc: 0x0  nop
    ctx->pc = 0x225abcu;
    // NOP
    ctx->pc = 0x225ac0u;
}
