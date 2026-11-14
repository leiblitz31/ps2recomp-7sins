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

// Function: sub_0025EEE0
// Address: 0x25eee0 - 0x25ef90
void sub_0025EEE0_0x25eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EEE0_0x25eee0");
#endif

    switch (ctx->pc) {
        case 0x25eee0u: goto label_25eee0;
        case 0x25eee4u: goto label_25eee4;
        case 0x25eee8u: goto label_25eee8;
        case 0x25eeecu: goto label_25eeec;
        case 0x25eef0u: goto label_25eef0;
        case 0x25eef4u: goto label_25eef4;
        case 0x25eef8u: goto label_25eef8;
        case 0x25eefcu: goto label_25eefc;
        case 0x25ef00u: goto label_25ef00;
        case 0x25ef04u: goto label_25ef04;
        case 0x25ef08u: goto label_25ef08;
        case 0x25ef0cu: goto label_25ef0c;
        case 0x25ef10u: goto label_25ef10;
        case 0x25ef14u: goto label_25ef14;
        case 0x25ef18u: goto label_25ef18;
        case 0x25ef1cu: goto label_25ef1c;
        case 0x25ef20u: goto label_25ef20;
        case 0x25ef24u: goto label_25ef24;
        case 0x25ef28u: goto label_25ef28;
        case 0x25ef2cu: goto label_25ef2c;
        case 0x25ef30u: goto label_25ef30;
        case 0x25ef34u: goto label_25ef34;
        case 0x25ef38u: goto label_25ef38;
        case 0x25ef3cu: goto label_25ef3c;
        case 0x25ef40u: goto label_25ef40;
        case 0x25ef44u: goto label_25ef44;
        case 0x25ef48u: goto label_25ef48;
        case 0x25ef4cu: goto label_25ef4c;
        case 0x25ef50u: goto label_25ef50;
        case 0x25ef54u: goto label_25ef54;
        case 0x25ef58u: goto label_25ef58;
        case 0x25ef5cu: goto label_25ef5c;
        case 0x25ef60u: goto label_25ef60;
        case 0x25ef64u: goto label_25ef64;
        case 0x25ef68u: goto label_25ef68;
        case 0x25ef6cu: goto label_25ef6c;
        case 0x25ef70u: goto label_25ef70;
        case 0x25ef74u: goto label_25ef74;
        case 0x25ef78u: goto label_25ef78;
        case 0x25ef7cu: goto label_25ef7c;
        case 0x25ef80u: goto label_25ef80;
        case 0x25ef84u: goto label_25ef84;
        case 0x25ef88u: goto label_25ef88;
        case 0x25ef8cu: goto label_25ef8c;
        default: break;
    }

    ctx->pc = 0x25eee0u;

label_25eee0:
    // 0x25eee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25eee4:
    // 0x25eee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25eee8:
    // 0x25eee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25eeec:
    // 0x25eeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25eef0:
    // 0x25eef0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_25eef4:
    // 0x25eef4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25eef8:
    // 0x25eef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25eefc:
    if (ctx->pc == 0x25EEFCu) {
        ctx->pc = 0x25EF00u;
        goto label_25ef00;
    }
    ctx->pc = 0x25EEF8u;
    {
        const bool branch_taken_0x25eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eef8) {
            ctx->pc = 0x25EF08u;
            goto label_25ef08;
        }
    }
    ctx->pc = 0x25EF00u;
label_25ef00:
    // 0x25ef00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ef04:
    // 0x25ef04: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_25ef08:
    // 0x25ef08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25ef0c:
    // 0x25ef0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25ef10:
    // 0x25ef10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25ef14:
    // 0x25ef14: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_25ef18:
    // 0x25ef18: 0xc119b68  jal         func_466DA0
label_25ef1c:
    if (ctx->pc == 0x25EF1Cu) {
        ctx->pc = 0x25EF20u;
        goto label_25ef20;
    }
    ctx->pc = 0x25EF18u;
    SET_GPR_U32(ctx, 31, 0x25EF20u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x25EF18u, 0x25EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF20u;
label_25ef20:
    // 0x25ef20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ef20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ef24:
    // 0x25ef24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_25ef28:
    if (ctx->pc == 0x25EF28u) {
        ctx->pc = 0x25EF2Cu;
        goto label_25ef2c;
    }
    ctx->pc = 0x25EF24u;
    {
        const bool branch_taken_0x25ef24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef24) {
            ctx->pc = 0x25EF38u;
            goto label_25ef38;
        }
    }
    ctx->pc = 0x25EF2Cu;
label_25ef2c:
    // 0x25ef2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25ef2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ef30:
    // 0x25ef30: 0x1000000e  b           . + 4 + (0xE << 2)
label_25ef34:
    if (ctx->pc == 0x25EF34u) {
        ctx->pc = 0x25EF38u;
        goto label_25ef38;
    }
    ctx->pc = 0x25EF30u;
    {
        const bool branch_taken_0x25ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef30) {
            ctx->pc = 0x25EF6Cu;
            goto label_25ef6c;
        }
    }
    ctx->pc = 0x25EF38u;
label_25ef38:
    // 0x25ef38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ef3c:
    // 0x25ef3c: 0xc0ba088  jal         func_2E8220
label_25ef40:
    if (ctx->pc == 0x25EF40u) {
        ctx->pc = 0x25EF44u;
        goto label_25ef44;
    }
    ctx->pc = 0x25EF3Cu;
    SET_GPR_U32(ctx, 31, 0x25EF44u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25EF3Cu, 0x25EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF44u;
label_25ef44:
    // 0x25ef44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ef44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ef48:
    // 0x25ef48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ef4c:
    // 0x25ef4c: 0xc0ba088  jal         func_2E8220
label_25ef50:
    if (ctx->pc == 0x25EF50u) {
        ctx->pc = 0x25EF54u;
        goto label_25ef54;
    }
    ctx->pc = 0x25EF4Cu;
    SET_GPR_U32(ctx, 31, 0x25EF54u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25EF4Cu, 0x25EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EF54u;
label_25ef54:
    // 0x25ef54: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_25ef58:
    if (ctx->pc == 0x25EF58u) {
        ctx->pc = 0x25EF5Cu;
        goto label_25ef5c;
    }
    ctx->pc = 0x25EF54u;
    {
        const bool branch_taken_0x25ef54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef54) {
            ctx->pc = 0x25EF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ef08;
        }
    }
    ctx->pc = 0x25EF5Cu;
label_25ef5c:
    // 0x25ef5c: 0x200f809  jalr        $s0
label_25ef60:
    if (ctx->pc == 0x25EF60u) {
        ctx->pc = 0x25EF64u;
        goto label_25ef64;
    }
    ctx->pc = 0x25EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25EF64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF5Cu, 0x25EF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EF64u;
label_25ef64:
    // 0x25ef64: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_25ef68:
    if (ctx->pc == 0x25EF68u) {
        ctx->pc = 0x25EF6Cu;
        goto label_25ef6c;
    }
    ctx->pc = 0x25EF64u;
    {
        const bool branch_taken_0x25ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ef64) {
            ctx->pc = 0x25EF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ef08;
        }
    }
    ctx->pc = 0x25EF6Cu;
label_25ef6c:
    // 0x25ef6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25ef70:
    // 0x25ef70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ef70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25ef74:
    // 0x25ef74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ef74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25ef78:
    // 0x25ef78: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25ef7c:
    // 0x25ef7c: 0x3e00008  jr          $ra
label_25ef80:
    if (ctx->pc == 0x25EF80u) {
        ctx->pc = 0x25EF84u;
        goto label_25ef84;
    }
    ctx->pc = 0x25EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EF84u;
label_25ef84:
    // 0x25ef84: 0x0  nop
    ctx->pc = 0x25ef84u;
    // NOP
label_25ef88:
    // 0x25ef88: 0x0  nop
    ctx->pc = 0x25ef88u;
    // NOP
label_25ef8c:
    // 0x25ef8c: 0x0  nop
    ctx->pc = 0x25ef8cu;
    // NOP
    ctx->pc = 0x25ef90u;
}
