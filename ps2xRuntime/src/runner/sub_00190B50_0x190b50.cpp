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

// Function: sub_00190B50
// Address: 0x190b50 - 0x190c00
void sub_00190B50_0x190b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190B50_0x190b50");
#endif

    switch (ctx->pc) {
        case 0x190b50u: goto label_190b50;
        case 0x190b54u: goto label_190b54;
        case 0x190b58u: goto label_190b58;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b60u: goto label_190b60;
        case 0x190b64u: goto label_190b64;
        case 0x190b68u: goto label_190b68;
        case 0x190b6cu: goto label_190b6c;
        case 0x190b70u: goto label_190b70;
        case 0x190b74u: goto label_190b74;
        case 0x190b78u: goto label_190b78;
        case 0x190b7cu: goto label_190b7c;
        case 0x190b80u: goto label_190b80;
        case 0x190b84u: goto label_190b84;
        case 0x190b88u: goto label_190b88;
        case 0x190b8cu: goto label_190b8c;
        case 0x190b90u: goto label_190b90;
        case 0x190b94u: goto label_190b94;
        case 0x190b98u: goto label_190b98;
        case 0x190b9cu: goto label_190b9c;
        case 0x190ba0u: goto label_190ba0;
        case 0x190ba4u: goto label_190ba4;
        case 0x190ba8u: goto label_190ba8;
        case 0x190bacu: goto label_190bac;
        case 0x190bb0u: goto label_190bb0;
        case 0x190bb4u: goto label_190bb4;
        case 0x190bb8u: goto label_190bb8;
        case 0x190bbcu: goto label_190bbc;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bc4u: goto label_190bc4;
        case 0x190bc8u: goto label_190bc8;
        case 0x190bccu: goto label_190bcc;
        case 0x190bd0u: goto label_190bd0;
        case 0x190bd4u: goto label_190bd4;
        case 0x190bd8u: goto label_190bd8;
        case 0x190bdcu: goto label_190bdc;
        case 0x190be0u: goto label_190be0;
        case 0x190be4u: goto label_190be4;
        case 0x190be8u: goto label_190be8;
        case 0x190becu: goto label_190bec;
        case 0x190bf0u: goto label_190bf0;
        case 0x190bf4u: goto label_190bf4;
        case 0x190bf8u: goto label_190bf8;
        case 0x190bfcu: goto label_190bfc;
        default: break;
    }

    ctx->pc = 0x190b50u;

label_190b50:
    // 0x190b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x190b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_190b54:
    // 0x190b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_190b58:
    // 0x190b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_190b5c:
    // 0x190b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_190b60:
    // 0x190b60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x190b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_190b64:
    // 0x190b64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_190b68:
    // 0x190b68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_190b6c:
    if (ctx->pc == 0x190B6Cu) {
        ctx->pc = 0x190B70u;
        goto label_190b70;
    }
    ctx->pc = 0x190B68u;
    {
        const bool branch_taken_0x190b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190b68) {
            ctx->pc = 0x190B78u;
            goto label_190b78;
        }
    }
    ctx->pc = 0x190B70u;
label_190b70:
    // 0x190b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190b74:
    // 0x190b74: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x190b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_190b78:
    // 0x190b78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_190b7c:
    // 0x190b7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x190b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_190b80:
    // 0x190b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190b84:
    // 0x190b84: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_190b88:
    // 0x190b88: 0xc119b68  jal         func_466DA0
label_190b8c:
    if (ctx->pc == 0x190B8Cu) {
        ctx->pc = 0x190B90u;
        goto label_190b90;
    }
    ctx->pc = 0x190B88u;
    SET_GPR_U32(ctx, 31, 0x190B90u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x190B88u, 0x190B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B90u;
label_190b90:
    // 0x190b90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x190b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190b94:
    // 0x190b94: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_190b98:
    if (ctx->pc == 0x190B98u) {
        ctx->pc = 0x190B9Cu;
        goto label_190b9c;
    }
    ctx->pc = 0x190B94u;
    {
        const bool branch_taken_0x190b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b94) {
            ctx->pc = 0x190BA8u;
            goto label_190ba8;
        }
    }
    ctx->pc = 0x190B9Cu;
label_190b9c:
    // 0x190b9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x190b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190ba0:
    // 0x190ba0: 0x1000000e  b           . + 4 + (0xE << 2)
label_190ba4:
    if (ctx->pc == 0x190BA4u) {
        ctx->pc = 0x190BA8u;
        goto label_190ba8;
    }
    ctx->pc = 0x190BA0u;
    {
        const bool branch_taken_0x190ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ba0) {
            ctx->pc = 0x190BDCu;
            goto label_190bdc;
        }
    }
    ctx->pc = 0x190BA8u;
label_190ba8:
    // 0x190ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190bac:
    // 0x190bac: 0xc0ba088  jal         func_2E8220
label_190bb0:
    if (ctx->pc == 0x190BB0u) {
        ctx->pc = 0x190BB4u;
        goto label_190bb4;
    }
    ctx->pc = 0x190BACu;
    SET_GPR_U32(ctx, 31, 0x190BB4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x190BACu, 0x190BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BB4u;
label_190bb4:
    // 0x190bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190bb8:
    // 0x190bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190bbc:
    // 0x190bbc: 0xc0ba088  jal         func_2E8220
label_190bc0:
    if (ctx->pc == 0x190BC0u) {
        ctx->pc = 0x190BC4u;
        goto label_190bc4;
    }
    ctx->pc = 0x190BBCu;
    SET_GPR_U32(ctx, 31, 0x190BC4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x190BBCu, 0x190BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BC4u;
label_190bc4:
    // 0x190bc4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_190bc8:
    if (ctx->pc == 0x190BC8u) {
        ctx->pc = 0x190BCCu;
        goto label_190bcc;
    }
    ctx->pc = 0x190BC4u;
    {
        const bool branch_taken_0x190bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bc4) {
            ctx->pc = 0x190B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b78;
        }
    }
    ctx->pc = 0x190BCCu;
label_190bcc:
    // 0x190bcc: 0x200f809  jalr        $s0
label_190bd0:
    if (ctx->pc == 0x190BD0u) {
        ctx->pc = 0x190BD4u;
        goto label_190bd4;
    }
    ctx->pc = 0x190BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x190BD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BCCu, 0x190BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190BD4u;
label_190bd4:
    // 0x190bd4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_190bd8:
    if (ctx->pc == 0x190BD8u) {
        ctx->pc = 0x190BDCu;
        goto label_190bdc;
    }
    ctx->pc = 0x190BD4u;
    {
        const bool branch_taken_0x190bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bd4) {
            ctx->pc = 0x190B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190b78;
        }
    }
    ctx->pc = 0x190BDCu;
label_190bdc:
    // 0x190bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190be0:
    // 0x190be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190be4:
    // 0x190be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190be8:
    // 0x190be8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x190be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_190bec:
    // 0x190bec: 0x3e00008  jr          $ra
label_190bf0:
    if (ctx->pc == 0x190BF0u) {
        ctx->pc = 0x190BF4u;
        goto label_190bf4;
    }
    ctx->pc = 0x190BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190BF4u;
label_190bf4:
    // 0x190bf4: 0x0  nop
    ctx->pc = 0x190bf4u;
    // NOP
label_190bf8:
    // 0x190bf8: 0x0  nop
    ctx->pc = 0x190bf8u;
    // NOP
label_190bfc:
    // 0x190bfc: 0x0  nop
    ctx->pc = 0x190bfcu;
    // NOP
    ctx->pc = 0x190c00u;
}
