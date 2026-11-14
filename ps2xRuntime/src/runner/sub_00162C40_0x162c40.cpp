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

// Function: sub_00162C40
// Address: 0x162c40 - 0x162cf0
void sub_00162C40_0x162c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162C40_0x162c40");
#endif

    switch (ctx->pc) {
        case 0x162c40u: goto label_162c40;
        case 0x162c44u: goto label_162c44;
        case 0x162c48u: goto label_162c48;
        case 0x162c4cu: goto label_162c4c;
        case 0x162c50u: goto label_162c50;
        case 0x162c54u: goto label_162c54;
        case 0x162c58u: goto label_162c58;
        case 0x162c5cu: goto label_162c5c;
        case 0x162c60u: goto label_162c60;
        case 0x162c64u: goto label_162c64;
        case 0x162c68u: goto label_162c68;
        case 0x162c6cu: goto label_162c6c;
        case 0x162c70u: goto label_162c70;
        case 0x162c74u: goto label_162c74;
        case 0x162c78u: goto label_162c78;
        case 0x162c7cu: goto label_162c7c;
        case 0x162c80u: goto label_162c80;
        case 0x162c84u: goto label_162c84;
        case 0x162c88u: goto label_162c88;
        case 0x162c8cu: goto label_162c8c;
        case 0x162c90u: goto label_162c90;
        case 0x162c94u: goto label_162c94;
        case 0x162c98u: goto label_162c98;
        case 0x162c9cu: goto label_162c9c;
        case 0x162ca0u: goto label_162ca0;
        case 0x162ca4u: goto label_162ca4;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cacu: goto label_162cac;
        case 0x162cb0u: goto label_162cb0;
        case 0x162cb4u: goto label_162cb4;
        case 0x162cb8u: goto label_162cb8;
        case 0x162cbcu: goto label_162cbc;
        case 0x162cc0u: goto label_162cc0;
        case 0x162cc4u: goto label_162cc4;
        case 0x162cc8u: goto label_162cc8;
        case 0x162cccu: goto label_162ccc;
        case 0x162cd0u: goto label_162cd0;
        case 0x162cd4u: goto label_162cd4;
        case 0x162cd8u: goto label_162cd8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162ce0u: goto label_162ce0;
        case 0x162ce4u: goto label_162ce4;
        case 0x162ce8u: goto label_162ce8;
        case 0x162cecu: goto label_162cec;
        default: break;
    }

    ctx->pc = 0x162c40u;

label_162c40:
    // 0x162c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_162c44:
    // 0x162c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162c48:
    // 0x162c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_162c4c:
    // 0x162c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_162c50:
    // 0x162c50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x162c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_162c54:
    // 0x162c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x162c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_162c58:
    // 0x162c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162c5c:
    if (ctx->pc == 0x162C5Cu) {
        ctx->pc = 0x162C60u;
        goto label_162c60;
    }
    ctx->pc = 0x162C58u;
    {
        const bool branch_taken_0x162c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c58) {
            ctx->pc = 0x162C68u;
            goto label_162c68;
        }
    }
    ctx->pc = 0x162C60u;
label_162c60:
    // 0x162c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162c64:
    // 0x162c64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x162c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_162c68:
    // 0x162c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_162c6c:
    // 0x162c6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x162c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_162c70:
    // 0x162c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162c74:
    // 0x162c74: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x162c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_162c78:
    // 0x162c78: 0xc119b68  jal         func_466DA0
label_162c7c:
    if (ctx->pc == 0x162C7Cu) {
        ctx->pc = 0x162C80u;
        goto label_162c80;
    }
    ctx->pc = 0x162C78u;
    SET_GPR_U32(ctx, 31, 0x162C80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x162C78u, 0x162C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C80u;
label_162c80:
    // 0x162c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162c84:
    // 0x162c84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_162c88:
    if (ctx->pc == 0x162C88u) {
        ctx->pc = 0x162C8Cu;
        goto label_162c8c;
    }
    ctx->pc = 0x162C84u;
    {
        const bool branch_taken_0x162c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c84) {
            ctx->pc = 0x162C98u;
            goto label_162c98;
        }
    }
    ctx->pc = 0x162C8Cu;
label_162c8c:
    // 0x162c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x162c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162c90:
    // 0x162c90: 0x1000000e  b           . + 4 + (0xE << 2)
label_162c94:
    if (ctx->pc == 0x162C94u) {
        ctx->pc = 0x162C98u;
        goto label_162c98;
    }
    ctx->pc = 0x162C90u;
    {
        const bool branch_taken_0x162c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c90) {
            ctx->pc = 0x162CCCu;
            goto label_162ccc;
        }
    }
    ctx->pc = 0x162C98u;
label_162c98:
    // 0x162c98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162c9c:
    // 0x162c9c: 0xc0ba088  jal         func_2E8220
label_162ca0:
    if (ctx->pc == 0x162CA0u) {
        ctx->pc = 0x162CA4u;
        goto label_162ca4;
    }
    ctx->pc = 0x162C9Cu;
    SET_GPR_U32(ctx, 31, 0x162CA4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x162C9Cu, 0x162CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CA4u;
label_162ca4:
    // 0x162ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162ca8:
    // 0x162ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162cac:
    // 0x162cac: 0xc0ba088  jal         func_2E8220
label_162cb0:
    if (ctx->pc == 0x162CB0u) {
        ctx->pc = 0x162CB4u;
        goto label_162cb4;
    }
    ctx->pc = 0x162CACu;
    SET_GPR_U32(ctx, 31, 0x162CB4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x162CACu, 0x162CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CB4u;
label_162cb4:
    // 0x162cb4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_162cb8:
    if (ctx->pc == 0x162CB8u) {
        ctx->pc = 0x162CBCu;
        goto label_162cbc;
    }
    ctx->pc = 0x162CB4u;
    {
        const bool branch_taken_0x162cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162cb4) {
            ctx->pc = 0x162C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162c68;
        }
    }
    ctx->pc = 0x162CBCu;
label_162cbc:
    // 0x162cbc: 0x200f809  jalr        $s0
label_162cc0:
    if (ctx->pc == 0x162CC0u) {
        ctx->pc = 0x162CC4u;
        goto label_162cc4;
    }
    ctx->pc = 0x162CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x162CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162CBCu, 0x162CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162CC4u;
label_162cc4:
    // 0x162cc4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_162cc8:
    if (ctx->pc == 0x162CC8u) {
        ctx->pc = 0x162CCCu;
        goto label_162ccc;
    }
    ctx->pc = 0x162CC4u;
    {
        const bool branch_taken_0x162cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162cc4) {
            ctx->pc = 0x162C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162c68;
        }
    }
    ctx->pc = 0x162CCCu;
label_162ccc:
    // 0x162ccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162cd0:
    // 0x162cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_162cd4:
    // 0x162cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_162cd8:
    // 0x162cd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_162cdc:
    // 0x162cdc: 0x3e00008  jr          $ra
label_162ce0:
    if (ctx->pc == 0x162CE0u) {
        ctx->pc = 0x162CE4u;
        goto label_162ce4;
    }
    ctx->pc = 0x162CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162CE4u;
label_162ce4:
    // 0x162ce4: 0x0  nop
    ctx->pc = 0x162ce4u;
    // NOP
label_162ce8:
    // 0x162ce8: 0x0  nop
    ctx->pc = 0x162ce8u;
    // NOP
label_162cec:
    // 0x162cec: 0x0  nop
    ctx->pc = 0x162cecu;
    // NOP
    ctx->pc = 0x162cf0u;
}
