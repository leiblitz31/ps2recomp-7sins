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

// Function: sub_001E9C40
// Address: 0x1e9c40 - 0x1e9cf0
void sub_001E9C40_0x1e9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9C40_0x1e9c40");
#endif

    switch (ctx->pc) {
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        case 0x1e9ca0u: goto label_1e9ca0;
        case 0x1e9ca4u: goto label_1e9ca4;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cacu: goto label_1e9cac;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cbcu: goto label_1e9cbc;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        default: break;
    }

    ctx->pc = 0x1e9c40u;

label_1e9c40:
    // 0x1e9c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e9c44:
    // 0x1e9c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9c48:
    // 0x1e9c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9c4c:
    // 0x1e9c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9c50:
    // 0x1e9c50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1e9c54:
    // 0x1e9c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9c58:
    // 0x1e9c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9c5c:
    if (ctx->pc == 0x1E9C5Cu) {
        ctx->pc = 0x1E9C60u;
        goto label_1e9c60;
    }
    ctx->pc = 0x1E9C58u;
    {
        const bool branch_taken_0x1e9c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c58) {
            ctx->pc = 0x1E9C68u;
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9C60u;
label_1e9c60:
    // 0x1e9c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9c64:
    // 0x1e9c64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9c68:
    // 0x1e9c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9c6c:
    // 0x1e9c6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e9c70:
    // 0x1e9c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9c74:
    // 0x1e9c74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9c78:
    // 0x1e9c78: 0xc119b68  jal         func_466DA0
label_1e9c7c:
    if (ctx->pc == 0x1E9C7Cu) {
        ctx->pc = 0x1E9C80u;
        goto label_1e9c80;
    }
    ctx->pc = 0x1E9C78u;
    SET_GPR_U32(ctx, 31, 0x1E9C80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1E9C78u, 0x1E9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C80u;
label_1e9c80:
    // 0x1e9c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c84:
    // 0x1e9c84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e9c88:
    if (ctx->pc == 0x1E9C88u) {
        ctx->pc = 0x1E9C8Cu;
        goto label_1e9c8c;
    }
    ctx->pc = 0x1E9C84u;
    {
        const bool branch_taken_0x1e9c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c84) {
            ctx->pc = 0x1E9C98u;
            goto label_1e9c98;
        }
    }
    ctx->pc = 0x1E9C8Cu;
label_1e9c8c:
    // 0x1e9c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c90:
    // 0x1e9c90: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e9c94:
    if (ctx->pc == 0x1E9C94u) {
        ctx->pc = 0x1E9C98u;
        goto label_1e9c98;
    }
    ctx->pc = 0x1E9C90u;
    {
        const bool branch_taken_0x1e9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c90) {
            ctx->pc = 0x1E9CCCu;
            goto label_1e9ccc;
        }
    }
    ctx->pc = 0x1E9C98u;
label_1e9c98:
    // 0x1e9c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c9c:
    // 0x1e9c9c: 0xc0ba088  jal         func_2E8220
label_1e9ca0:
    if (ctx->pc == 0x1E9CA0u) {
        ctx->pc = 0x1E9CA4u;
        goto label_1e9ca4;
    }
    ctx->pc = 0x1E9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E9CA4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9C9Cu, 0x1E9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CA4u;
label_1e9ca4:
    // 0x1e9ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ca8:
    // 0x1e9ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9cac:
    // 0x1e9cac: 0xc0ba088  jal         func_2E8220
label_1e9cb0:
    if (ctx->pc == 0x1E9CB0u) {
        ctx->pc = 0x1E9CB4u;
        goto label_1e9cb4;
    }
    ctx->pc = 0x1E9CACu;
    SET_GPR_U32(ctx, 31, 0x1E9CB4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9CACu, 0x1E9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CB4u;
label_1e9cb4:
    // 0x1e9cb4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1e9cb8:
    if (ctx->pc == 0x1E9CB8u) {
        ctx->pc = 0x1E9CBCu;
        goto label_1e9cbc;
    }
    ctx->pc = 0x1E9CB4u;
    {
        const bool branch_taken_0x1e9cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cb4) {
            ctx->pc = 0x1E9C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9CBCu;
label_1e9cbc:
    // 0x1e9cbc: 0x200f809  jalr        $s0
label_1e9cc0:
    if (ctx->pc == 0x1E9CC0u) {
        ctx->pc = 0x1E9CC4u;
        goto label_1e9cc4;
    }
    ctx->pc = 0x1E9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E9CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9CBCu, 0x1E9CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9CC4u;
label_1e9cc4:
    // 0x1e9cc4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1e9cc8:
    if (ctx->pc == 0x1E9CC8u) {
        ctx->pc = 0x1E9CCCu;
        goto label_1e9ccc;
    }
    ctx->pc = 0x1E9CC4u;
    {
        const bool branch_taken_0x1e9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cc4) {
            ctx->pc = 0x1E9C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9c68;
        }
    }
    ctx->pc = 0x1E9CCCu;
label_1e9ccc:
    // 0x1e9ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9cd0:
    // 0x1e9cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9cd4:
    // 0x1e9cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9cd8:
    // 0x1e9cd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e9cdc:
    // 0x1e9cdc: 0x3e00008  jr          $ra
label_1e9ce0:
    if (ctx->pc == 0x1E9CE0u) {
        ctx->pc = 0x1E9CE4u;
        goto label_1e9ce4;
    }
    ctx->pc = 0x1E9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9CE4u;
label_1e9ce4:
    // 0x1e9ce4: 0x0  nop
    ctx->pc = 0x1e9ce4u;
    // NOP
label_1e9ce8:
    // 0x1e9ce8: 0x0  nop
    ctx->pc = 0x1e9ce8u;
    // NOP
label_1e9cec:
    // 0x1e9cec: 0x0  nop
    ctx->pc = 0x1e9cecu;
    // NOP
    ctx->pc = 0x1e9cf0u;
}
