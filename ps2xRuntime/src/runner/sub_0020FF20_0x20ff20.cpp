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

// Function: sub_0020FF20
// Address: 0x20ff20 - 0x20ffc0
void sub_0020FF20_0x20ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FF20_0x20ff20");
#endif

    switch (ctx->pc) {
        case 0x20ff20u: goto label_20ff20;
        case 0x20ff24u: goto label_20ff24;
        case 0x20ff28u: goto label_20ff28;
        case 0x20ff2cu: goto label_20ff2c;
        case 0x20ff30u: goto label_20ff30;
        case 0x20ff34u: goto label_20ff34;
        case 0x20ff38u: goto label_20ff38;
        case 0x20ff3cu: goto label_20ff3c;
        case 0x20ff40u: goto label_20ff40;
        case 0x20ff44u: goto label_20ff44;
        case 0x20ff48u: goto label_20ff48;
        case 0x20ff4cu: goto label_20ff4c;
        case 0x20ff50u: goto label_20ff50;
        case 0x20ff54u: goto label_20ff54;
        case 0x20ff58u: goto label_20ff58;
        case 0x20ff5cu: goto label_20ff5c;
        case 0x20ff60u: goto label_20ff60;
        case 0x20ff64u: goto label_20ff64;
        case 0x20ff68u: goto label_20ff68;
        case 0x20ff6cu: goto label_20ff6c;
        case 0x20ff70u: goto label_20ff70;
        case 0x20ff74u: goto label_20ff74;
        case 0x20ff78u: goto label_20ff78;
        case 0x20ff7cu: goto label_20ff7c;
        case 0x20ff80u: goto label_20ff80;
        case 0x20ff84u: goto label_20ff84;
        case 0x20ff88u: goto label_20ff88;
        case 0x20ff8cu: goto label_20ff8c;
        case 0x20ff90u: goto label_20ff90;
        case 0x20ff94u: goto label_20ff94;
        case 0x20ff98u: goto label_20ff98;
        case 0x20ff9cu: goto label_20ff9c;
        case 0x20ffa0u: goto label_20ffa0;
        case 0x20ffa4u: goto label_20ffa4;
        case 0x20ffa8u: goto label_20ffa8;
        case 0x20ffacu: goto label_20ffac;
        case 0x20ffb0u: goto label_20ffb0;
        case 0x20ffb4u: goto label_20ffb4;
        case 0x20ffb8u: goto label_20ffb8;
        case 0x20ffbcu: goto label_20ffbc;
        default: break;
    }

    ctx->pc = 0x20ff20u;

label_20ff20:
    // 0x20ff20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20ff24:
    // 0x20ff24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20ff28:
    // 0x20ff28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20ff2c:
    // 0x20ff2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20ff30:
    // 0x20ff30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x20ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_20ff34:
    // 0x20ff34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20ff38:
    // 0x20ff38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20ff3c:
    if (ctx->pc == 0x20FF3Cu) {
        ctx->pc = 0x20FF40u;
        goto label_20ff40;
    }
    ctx->pc = 0x20FF38u;
    {
        const bool branch_taken_0x20ff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ff38) {
            ctx->pc = 0x20FF48u;
            goto label_20ff48;
        }
    }
    ctx->pc = 0x20FF40u;
label_20ff40:
    // 0x20ff40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ff44:
    // 0x20ff44: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x20ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_20ff48:
    // 0x20ff48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_20ff4c:
    // 0x20ff4c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x20ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20ff50:
    // 0x20ff50: 0xc119b68  jal         func_466DA0
label_20ff54:
    if (ctx->pc == 0x20FF54u) {
        ctx->pc = 0x20FF58u;
        goto label_20ff58;
    }
    ctx->pc = 0x20FF50u;
    SET_GPR_U32(ctx, 31, 0x20FF58u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20FF50u, 0x20FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF58u;
label_20ff58:
    // 0x20ff58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20ff58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ff5c:
    // 0x20ff5c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_20ff60:
    if (ctx->pc == 0x20FF60u) {
        ctx->pc = 0x20FF64u;
        goto label_20ff64;
    }
    ctx->pc = 0x20FF5Cu;
    {
        const bool branch_taken_0x20ff5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ff5c) {
            ctx->pc = 0x20FF70u;
            goto label_20ff70;
        }
    }
    ctx->pc = 0x20FF64u;
label_20ff64:
    // 0x20ff64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20ff64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ff68:
    // 0x20ff68: 0x1000000e  b           . + 4 + (0xE << 2)
label_20ff6c:
    if (ctx->pc == 0x20FF6Cu) {
        ctx->pc = 0x20FF70u;
        goto label_20ff70;
    }
    ctx->pc = 0x20FF68u;
    {
        const bool branch_taken_0x20ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ff68) {
            ctx->pc = 0x20FFA4u;
            goto label_20ffa4;
        }
    }
    ctx->pc = 0x20FF70u;
label_20ff70:
    // 0x20ff70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ff74:
    // 0x20ff74: 0xc0ba088  jal         func_2E8220
label_20ff78:
    if (ctx->pc == 0x20FF78u) {
        ctx->pc = 0x20FF7Cu;
        goto label_20ff7c;
    }
    ctx->pc = 0x20FF74u;
    SET_GPR_U32(ctx, 31, 0x20FF7Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x20FF74u, 0x20FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF7Cu;
label_20ff7c:
    // 0x20ff7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20ff7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ff80:
    // 0x20ff80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ff84:
    // 0x20ff84: 0xc0ba088  jal         func_2E8220
label_20ff88:
    if (ctx->pc == 0x20FF88u) {
        ctx->pc = 0x20FF8Cu;
        goto label_20ff8c;
    }
    ctx->pc = 0x20FF84u;
    SET_GPR_U32(ctx, 31, 0x20FF8Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x20FF84u, 0x20FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF8Cu;
label_20ff8c:
    // 0x20ff8c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_20ff90:
    if (ctx->pc == 0x20FF90u) {
        ctx->pc = 0x20FF94u;
        goto label_20ff94;
    }
    ctx->pc = 0x20FF8Cu;
    {
        const bool branch_taken_0x20ff8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ff8c) {
            ctx->pc = 0x20FF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ff48;
        }
    }
    ctx->pc = 0x20FF94u;
label_20ff94:
    // 0x20ff94: 0x200f809  jalr        $s0
label_20ff98:
    if (ctx->pc == 0x20FF98u) {
        ctx->pc = 0x20FF9Cu;
        goto label_20ff9c;
    }
    ctx->pc = 0x20FF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20FF9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF94u, 0x20FF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FF9Cu;
label_20ff9c:
    // 0x20ff9c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_20ffa0:
    if (ctx->pc == 0x20FFA0u) {
        ctx->pc = 0x20FFA4u;
        goto label_20ffa4;
    }
    ctx->pc = 0x20FF9Cu;
    {
        const bool branch_taken_0x20ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ff9c) {
            ctx->pc = 0x20FF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ff48;
        }
    }
    ctx->pc = 0x20FFA4u;
label_20ffa4:
    // 0x20ffa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ffa8:
    // 0x20ffa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ffa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ffac:
    // 0x20ffac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ffacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ffb0:
    // 0x20ffb0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20ffb4:
    // 0x20ffb4: 0x3e00008  jr          $ra
label_20ffb8:
    if (ctx->pc == 0x20FFB8u) {
        ctx->pc = 0x20FFBCu;
        goto label_20ffbc;
    }
    ctx->pc = 0x20FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FFBCu;
label_20ffbc:
    // 0x20ffbc: 0x0  nop
    ctx->pc = 0x20ffbcu;
    // NOP
    ctx->pc = 0x20ffc0u;
}
