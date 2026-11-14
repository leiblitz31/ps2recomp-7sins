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

// Function: sub_00252C60
// Address: 0x252c60 - 0x252d00
void sub_00252C60_0x252c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C60_0x252c60");
#endif

    switch (ctx->pc) {
        case 0x252c60u: goto label_252c60;
        case 0x252c64u: goto label_252c64;
        case 0x252c68u: goto label_252c68;
        case 0x252c6cu: goto label_252c6c;
        case 0x252c70u: goto label_252c70;
        case 0x252c74u: goto label_252c74;
        case 0x252c78u: goto label_252c78;
        case 0x252c7cu: goto label_252c7c;
        case 0x252c80u: goto label_252c80;
        case 0x252c84u: goto label_252c84;
        case 0x252c88u: goto label_252c88;
        case 0x252c8cu: goto label_252c8c;
        case 0x252c90u: goto label_252c90;
        case 0x252c94u: goto label_252c94;
        case 0x252c98u: goto label_252c98;
        case 0x252c9cu: goto label_252c9c;
        case 0x252ca0u: goto label_252ca0;
        case 0x252ca4u: goto label_252ca4;
        case 0x252ca8u: goto label_252ca8;
        case 0x252cacu: goto label_252cac;
        case 0x252cb0u: goto label_252cb0;
        case 0x252cb4u: goto label_252cb4;
        case 0x252cb8u: goto label_252cb8;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cc0u: goto label_252cc0;
        case 0x252cc4u: goto label_252cc4;
        case 0x252cc8u: goto label_252cc8;
        case 0x252cccu: goto label_252ccc;
        case 0x252cd0u: goto label_252cd0;
        case 0x252cd4u: goto label_252cd4;
        case 0x252cd8u: goto label_252cd8;
        case 0x252cdcu: goto label_252cdc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252ce4u: goto label_252ce4;
        case 0x252ce8u: goto label_252ce8;
        case 0x252cecu: goto label_252cec;
        case 0x252cf0u: goto label_252cf0;
        case 0x252cf4u: goto label_252cf4;
        case 0x252cf8u: goto label_252cf8;
        case 0x252cfcu: goto label_252cfc;
        default: break;
    }

    ctx->pc = 0x252c60u;

label_252c60:
    // 0x252c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x252c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_252c64:
    // 0x252c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_252c68:
    // 0x252c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_252c6c:
    // 0x252c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_252c70:
    // 0x252c70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x252c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_252c74:
    // 0x252c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_252c78:
    // 0x252c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_252c7c:
    if (ctx->pc == 0x252C7Cu) {
        ctx->pc = 0x252C80u;
        goto label_252c80;
    }
    ctx->pc = 0x252C78u;
    {
        const bool branch_taken_0x252c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c78) {
            ctx->pc = 0x252C88u;
            goto label_252c88;
        }
    }
    ctx->pc = 0x252C80u;
label_252c80:
    // 0x252c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252c84:
    // 0x252c84: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x252c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_252c88:
    // 0x252c88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_252c8c:
    // 0x252c8c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x252c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_252c90:
    // 0x252c90: 0xc119b68  jal         func_466DA0
label_252c94:
    if (ctx->pc == 0x252C94u) {
        ctx->pc = 0x252C98u;
        goto label_252c98;
    }
    ctx->pc = 0x252C90u;
    SET_GPR_U32(ctx, 31, 0x252C98u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x252C90u, 0x252C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C98u;
label_252c98:
    // 0x252c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252c9c:
    // 0x252c9c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_252ca0:
    if (ctx->pc == 0x252CA0u) {
        ctx->pc = 0x252CA4u;
        goto label_252ca4;
    }
    ctx->pc = 0x252C9Cu;
    {
        const bool branch_taken_0x252c9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c9c) {
            ctx->pc = 0x252CB0u;
            goto label_252cb0;
        }
    }
    ctx->pc = 0x252CA4u;
label_252ca4:
    // 0x252ca4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_252ca8:
    // 0x252ca8: 0x1000000e  b           . + 4 + (0xE << 2)
label_252cac:
    if (ctx->pc == 0x252CACu) {
        ctx->pc = 0x252CB0u;
        goto label_252cb0;
    }
    ctx->pc = 0x252CA8u;
    {
        const bool branch_taken_0x252ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ca8) {
            ctx->pc = 0x252CE4u;
            goto label_252ce4;
        }
    }
    ctx->pc = 0x252CB0u;
label_252cb0:
    // 0x252cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252cb4:
    // 0x252cb4: 0xc0ba088  jal         func_2E8220
label_252cb8:
    if (ctx->pc == 0x252CB8u) {
        ctx->pc = 0x252CBCu;
        goto label_252cbc;
    }
    ctx->pc = 0x252CB4u;
    SET_GPR_U32(ctx, 31, 0x252CBCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x252CB4u, 0x252CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CBCu;
label_252cbc:
    // 0x252cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x252cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252cc0:
    // 0x252cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252cc4:
    // 0x252cc4: 0xc0ba088  jal         func_2E8220
label_252cc8:
    if (ctx->pc == 0x252CC8u) {
        ctx->pc = 0x252CCCu;
        goto label_252ccc;
    }
    ctx->pc = 0x252CC4u;
    SET_GPR_U32(ctx, 31, 0x252CCCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x252CC4u, 0x252CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CCCu;
label_252ccc:
    // 0x252ccc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_252cd0:
    if (ctx->pc == 0x252CD0u) {
        ctx->pc = 0x252CD4u;
        goto label_252cd4;
    }
    ctx->pc = 0x252CCCu;
    {
        const bool branch_taken_0x252ccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ccc) {
            ctx->pc = 0x252C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252c88;
        }
    }
    ctx->pc = 0x252CD4u;
label_252cd4:
    // 0x252cd4: 0x200f809  jalr        $s0
label_252cd8:
    if (ctx->pc == 0x252CD8u) {
        ctx->pc = 0x252CDCu;
        goto label_252cdc;
    }
    ctx->pc = 0x252CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x252CDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CD4u, 0x252CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252CDCu;
label_252cdc:
    // 0x252cdc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_252ce0:
    if (ctx->pc == 0x252CE0u) {
        ctx->pc = 0x252CE4u;
        goto label_252ce4;
    }
    ctx->pc = 0x252CDCu;
    {
        const bool branch_taken_0x252cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cdc) {
            ctx->pc = 0x252C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252c88;
        }
    }
    ctx->pc = 0x252CE4u;
label_252ce4:
    // 0x252ce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_252ce8:
    // 0x252ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_252cec:
    // 0x252cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_252cf0:
    // 0x252cf0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x252cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_252cf4:
    // 0x252cf4: 0x3e00008  jr          $ra
label_252cf8:
    if (ctx->pc == 0x252CF8u) {
        ctx->pc = 0x252CFCu;
        goto label_252cfc;
    }
    ctx->pc = 0x252CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252CFCu;
label_252cfc:
    // 0x252cfc: 0x0  nop
    ctx->pc = 0x252cfcu;
    // NOP
    ctx->pc = 0x252d00u;
}
