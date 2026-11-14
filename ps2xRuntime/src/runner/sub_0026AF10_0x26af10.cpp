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

// Function: sub_0026AF10
// Address: 0x26af10 - 0x26afb0
void sub_0026AF10_0x26af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AF10_0x26af10");
#endif

    switch (ctx->pc) {
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        case 0x26af38u: goto label_26af38;
        case 0x26af3cu: goto label_26af3c;
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        default: break;
    }

    ctx->pc = 0x26af10u;

label_26af10:
    // 0x26af10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26af14:
    // 0x26af14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26af18:
    // 0x26af18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26af18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26af1c:
    // 0x26af1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26af1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26af20:
    // 0x26af20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26af20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_26af24:
    // 0x26af24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26af28:
    // 0x26af28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26af2c:
    if (ctx->pc == 0x26AF2Cu) {
        ctx->pc = 0x26AF30u;
        goto label_26af30;
    }
    ctx->pc = 0x26AF28u;
    {
        const bool branch_taken_0x26af28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26af28) {
            ctx->pc = 0x26AF38u;
            goto label_26af38;
        }
    }
    ctx->pc = 0x26AF30u;
label_26af30:
    // 0x26af30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26af30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26af34:
    // 0x26af34: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x26af34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_26af38:
    // 0x26af38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26af3c:
    // 0x26af3c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x26af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_26af40:
    // 0x26af40: 0xc119b68  jal         func_466DA0
label_26af44:
    if (ctx->pc == 0x26AF44u) {
        ctx->pc = 0x26AF48u;
        goto label_26af48;
    }
    ctx->pc = 0x26AF40u;
    SET_GPR_U32(ctx, 31, 0x26AF48u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26AF40u, 0x26AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF48u;
label_26af48:
    // 0x26af48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26af48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26af4c:
    // 0x26af4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_26af50:
    if (ctx->pc == 0x26AF50u) {
        ctx->pc = 0x26AF54u;
        goto label_26af54;
    }
    ctx->pc = 0x26AF4Cu;
    {
        const bool branch_taken_0x26af4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af4c) {
            ctx->pc = 0x26AF60u;
            goto label_26af60;
        }
    }
    ctx->pc = 0x26AF54u;
label_26af54:
    // 0x26af54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26af54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26af58:
    // 0x26af58: 0x1000000e  b           . + 4 + (0xE << 2)
label_26af5c:
    if (ctx->pc == 0x26AF5Cu) {
        ctx->pc = 0x26AF60u;
        goto label_26af60;
    }
    ctx->pc = 0x26AF58u;
    {
        const bool branch_taken_0x26af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af58) {
            ctx->pc = 0x26AF94u;
            goto label_26af94;
        }
    }
    ctx->pc = 0x26AF60u;
label_26af60:
    // 0x26af60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26af64:
    // 0x26af64: 0xc0ba088  jal         func_2E8220
label_26af68:
    if (ctx->pc == 0x26AF68u) {
        ctx->pc = 0x26AF6Cu;
        goto label_26af6c;
    }
    ctx->pc = 0x26AF64u;
    SET_GPR_U32(ctx, 31, 0x26AF6Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26AF64u, 0x26AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF6Cu;
label_26af6c:
    // 0x26af6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26af6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26af70:
    // 0x26af70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26af74:
    // 0x26af74: 0xc0ba088  jal         func_2E8220
label_26af78:
    if (ctx->pc == 0x26AF78u) {
        ctx->pc = 0x26AF7Cu;
        goto label_26af7c;
    }
    ctx->pc = 0x26AF74u;
    SET_GPR_U32(ctx, 31, 0x26AF7Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26AF74u, 0x26AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF7Cu;
label_26af7c:
    // 0x26af7c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_26af80:
    if (ctx->pc == 0x26AF80u) {
        ctx->pc = 0x26AF84u;
        goto label_26af84;
    }
    ctx->pc = 0x26AF7Cu;
    {
        const bool branch_taken_0x26af7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af7c) {
            ctx->pc = 0x26AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26af38;
        }
    }
    ctx->pc = 0x26AF84u;
label_26af84:
    // 0x26af84: 0x200f809  jalr        $s0
label_26af88:
    if (ctx->pc == 0x26AF88u) {
        ctx->pc = 0x26AF8Cu;
        goto label_26af8c;
    }
    ctx->pc = 0x26AF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x26AF8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF84u, 0x26AF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AF8Cu;
label_26af8c:
    // 0x26af8c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_26af90:
    if (ctx->pc == 0x26AF90u) {
        ctx->pc = 0x26AF94u;
        goto label_26af94;
    }
    ctx->pc = 0x26AF8Cu;
    {
        const bool branch_taken_0x26af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af8c) {
            ctx->pc = 0x26AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26af38;
        }
    }
    ctx->pc = 0x26AF94u;
label_26af94:
    // 0x26af94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26af94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26af98:
    // 0x26af98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26af98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26af9c:
    // 0x26af9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26af9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26afa0:
    // 0x26afa0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26afa4:
    // 0x26afa4: 0x3e00008  jr          $ra
label_26afa8:
    if (ctx->pc == 0x26AFA8u) {
        ctx->pc = 0x26AFACu;
        goto label_26afac;
    }
    ctx->pc = 0x26AFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AFACu;
label_26afac:
    // 0x26afac: 0x0  nop
    ctx->pc = 0x26afacu;
    // NOP
    ctx->pc = 0x26afb0u;
}
