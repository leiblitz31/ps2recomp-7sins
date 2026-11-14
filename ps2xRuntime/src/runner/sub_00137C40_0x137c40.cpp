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

// Function: sub_00137C40
// Address: 0x137c40 - 0x137cf0
void sub_00137C40_0x137c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C40_0x137c40");
#endif

    switch (ctx->pc) {
        case 0x137c40u: goto label_137c40;
        case 0x137c44u: goto label_137c44;
        case 0x137c48u: goto label_137c48;
        case 0x137c4cu: goto label_137c4c;
        case 0x137c50u: goto label_137c50;
        case 0x137c54u: goto label_137c54;
        case 0x137c58u: goto label_137c58;
        case 0x137c5cu: goto label_137c5c;
        case 0x137c60u: goto label_137c60;
        case 0x137c64u: goto label_137c64;
        case 0x137c68u: goto label_137c68;
        case 0x137c6cu: goto label_137c6c;
        case 0x137c70u: goto label_137c70;
        case 0x137c74u: goto label_137c74;
        case 0x137c78u: goto label_137c78;
        case 0x137c7cu: goto label_137c7c;
        case 0x137c80u: goto label_137c80;
        case 0x137c84u: goto label_137c84;
        case 0x137c88u: goto label_137c88;
        case 0x137c8cu: goto label_137c8c;
        case 0x137c90u: goto label_137c90;
        case 0x137c94u: goto label_137c94;
        case 0x137c98u: goto label_137c98;
        case 0x137c9cu: goto label_137c9c;
        case 0x137ca0u: goto label_137ca0;
        case 0x137ca4u: goto label_137ca4;
        case 0x137ca8u: goto label_137ca8;
        case 0x137cacu: goto label_137cac;
        case 0x137cb0u: goto label_137cb0;
        case 0x137cb4u: goto label_137cb4;
        case 0x137cb8u: goto label_137cb8;
        case 0x137cbcu: goto label_137cbc;
        case 0x137cc0u: goto label_137cc0;
        case 0x137cc4u: goto label_137cc4;
        case 0x137cc8u: goto label_137cc8;
        case 0x137cccu: goto label_137ccc;
        case 0x137cd0u: goto label_137cd0;
        case 0x137cd4u: goto label_137cd4;
        case 0x137cd8u: goto label_137cd8;
        case 0x137cdcu: goto label_137cdc;
        case 0x137ce0u: goto label_137ce0;
        case 0x137ce4u: goto label_137ce4;
        case 0x137ce8u: goto label_137ce8;
        case 0x137cecu: goto label_137cec;
        default: break;
    }

    ctx->pc = 0x137c40u;

label_137c40:
    // 0x137c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_137c44:
    // 0x137c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_137c48:
    // 0x137c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_137c4c:
    // 0x137c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_137c50:
    // 0x137c50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x137c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_137c54:
    // 0x137c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137c58:
    // 0x137c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_137c5c:
    if (ctx->pc == 0x137C5Cu) {
        ctx->pc = 0x137C60u;
        goto label_137c60;
    }
    ctx->pc = 0x137C58u;
    {
        const bool branch_taken_0x137c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137c58) {
            ctx->pc = 0x137C68u;
            goto label_137c68;
        }
    }
    ctx->pc = 0x137C60u;
label_137c60:
    // 0x137c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137c64:
    // 0x137c64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x137c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_137c68:
    // 0x137c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x137c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137c6c:
    // 0x137c6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x137c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_137c70:
    // 0x137c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_137c74:
    // 0x137c74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_137c78:
    // 0x137c78: 0xc119b68  jal         func_466DA0
label_137c7c:
    if (ctx->pc == 0x137C7Cu) {
        ctx->pc = 0x137C80u;
        goto label_137c80;
    }
    ctx->pc = 0x137C78u;
    SET_GPR_U32(ctx, 31, 0x137C80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x137C78u, 0x137C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C80u;
label_137c80:
    // 0x137c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137c84:
    // 0x137c84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_137c88:
    if (ctx->pc == 0x137C88u) {
        ctx->pc = 0x137C8Cu;
        goto label_137c8c;
    }
    ctx->pc = 0x137C84u;
    {
        const bool branch_taken_0x137c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c84) {
            ctx->pc = 0x137C98u;
            goto label_137c98;
        }
    }
    ctx->pc = 0x137C8Cu;
label_137c8c:
    // 0x137c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x137c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137c90:
    // 0x137c90: 0x1000000e  b           . + 4 + (0xE << 2)
label_137c94:
    if (ctx->pc == 0x137C94u) {
        ctx->pc = 0x137C98u;
        goto label_137c98;
    }
    ctx->pc = 0x137C90u;
    {
        const bool branch_taken_0x137c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137c90) {
            ctx->pc = 0x137CCCu;
            goto label_137ccc;
        }
    }
    ctx->pc = 0x137C98u;
label_137c98:
    // 0x137c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x137c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137c9c:
    // 0x137c9c: 0xc0ba088  jal         func_2E8220
label_137ca0:
    if (ctx->pc == 0x137CA0u) {
        ctx->pc = 0x137CA4u;
        goto label_137ca4;
    }
    ctx->pc = 0x137C9Cu;
    SET_GPR_U32(ctx, 31, 0x137CA4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x137C9Cu, 0x137CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CA4u;
label_137ca4:
    // 0x137ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137ca8:
    // 0x137ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137cac:
    // 0x137cac: 0xc0ba088  jal         func_2E8220
label_137cb0:
    if (ctx->pc == 0x137CB0u) {
        ctx->pc = 0x137CB4u;
        goto label_137cb4;
    }
    ctx->pc = 0x137CACu;
    SET_GPR_U32(ctx, 31, 0x137CB4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x137CACu, 0x137CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CB4u;
label_137cb4:
    // 0x137cb4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_137cb8:
    if (ctx->pc == 0x137CB8u) {
        ctx->pc = 0x137CBCu;
        goto label_137cbc;
    }
    ctx->pc = 0x137CB4u;
    {
        const bool branch_taken_0x137cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x137cb4) {
            ctx->pc = 0x137C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137c68;
        }
    }
    ctx->pc = 0x137CBCu;
label_137cbc:
    // 0x137cbc: 0x200f809  jalr        $s0
label_137cc0:
    if (ctx->pc == 0x137CC0u) {
        ctx->pc = 0x137CC4u;
        goto label_137cc4;
    }
    ctx->pc = 0x137CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x137CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CBCu, 0x137CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137CC4u;
label_137cc4:
    // 0x137cc4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_137cc8:
    if (ctx->pc == 0x137CC8u) {
        ctx->pc = 0x137CCCu;
        goto label_137ccc;
    }
    ctx->pc = 0x137CC4u;
    {
        const bool branch_taken_0x137cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137cc4) {
            ctx->pc = 0x137C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137c68;
        }
    }
    ctx->pc = 0x137CCCu;
label_137ccc:
    // 0x137ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_137cd0:
    // 0x137cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137cd4:
    // 0x137cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_137cd8:
    // 0x137cd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_137cdc:
    // 0x137cdc: 0x3e00008  jr          $ra
label_137ce0:
    if (ctx->pc == 0x137CE0u) {
        ctx->pc = 0x137CE4u;
        goto label_137ce4;
    }
    ctx->pc = 0x137CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137CE4u;
label_137ce4:
    // 0x137ce4: 0x0  nop
    ctx->pc = 0x137ce4u;
    // NOP
label_137ce8:
    // 0x137ce8: 0x0  nop
    ctx->pc = 0x137ce8u;
    // NOP
label_137cec:
    // 0x137cec: 0x0  nop
    ctx->pc = 0x137cecu;
    // NOP
    ctx->pc = 0x137cf0u;
}
