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

// Function: sub_0022AC40
// Address: 0x22ac40 - 0x22ace0
void sub_0022AC40_0x22ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AC40_0x22ac40");
#endif

    switch (ctx->pc) {
        case 0x22ac40u: goto label_22ac40;
        case 0x22ac44u: goto label_22ac44;
        case 0x22ac48u: goto label_22ac48;
        case 0x22ac4cu: goto label_22ac4c;
        case 0x22ac50u: goto label_22ac50;
        case 0x22ac54u: goto label_22ac54;
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac60u: goto label_22ac60;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac68u: goto label_22ac68;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac70u: goto label_22ac70;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac78u: goto label_22ac78;
        case 0x22ac7cu: goto label_22ac7c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac88u: goto label_22ac88;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac90u: goto label_22ac90;
        case 0x22ac94u: goto label_22ac94;
        case 0x22ac98u: goto label_22ac98;
        case 0x22ac9cu: goto label_22ac9c;
        case 0x22aca0u: goto label_22aca0;
        case 0x22aca4u: goto label_22aca4;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acacu: goto label_22acac;
        case 0x22acb0u: goto label_22acb0;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acb8u: goto label_22acb8;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acc0u: goto label_22acc0;
        case 0x22acc4u: goto label_22acc4;
        case 0x22acc8u: goto label_22acc8;
        case 0x22acccu: goto label_22accc;
        case 0x22acd0u: goto label_22acd0;
        case 0x22acd4u: goto label_22acd4;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acdcu: goto label_22acdc;
        default: break;
    }

    ctx->pc = 0x22ac40u;

label_22ac40:
    // 0x22ac40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22ac44:
    // 0x22ac44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22ac48:
    // 0x22ac48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ac4c:
    // 0x22ac4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ac50:
    // 0x22ac50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_22ac54:
    // 0x22ac54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22ac58:
    // 0x22ac58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22ac5c:
    if (ctx->pc == 0x22AC5Cu) {
        ctx->pc = 0x22AC60u;
        goto label_22ac60;
    }
    ctx->pc = 0x22AC58u;
    {
        const bool branch_taken_0x22ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ac58) {
            ctx->pc = 0x22AC68u;
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22AC60u;
label_22ac60:
    // 0x22ac60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ac64:
    // 0x22ac64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_22ac68:
    // 0x22ac68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22ac6c:
    // 0x22ac6c: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22ac70:
    // 0x22ac70: 0xc119b68  jal         func_466DA0
label_22ac74:
    if (ctx->pc == 0x22AC74u) {
        ctx->pc = 0x22AC78u;
        goto label_22ac78;
    }
    ctx->pc = 0x22AC70u;
    SET_GPR_U32(ctx, 31, 0x22AC78u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22AC70u, 0x22AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC78u;
label_22ac78:
    // 0x22ac78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22ac78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ac7c:
    // 0x22ac7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22ac80:
    if (ctx->pc == 0x22AC80u) {
        ctx->pc = 0x22AC84u;
        goto label_22ac84;
    }
    ctx->pc = 0x22AC7Cu;
    {
        const bool branch_taken_0x22ac7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac7c) {
            ctx->pc = 0x22AC90u;
            goto label_22ac90;
        }
    }
    ctx->pc = 0x22AC84u;
label_22ac84:
    // 0x22ac84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22ac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ac88:
    // 0x22ac88: 0x1000000e  b           . + 4 + (0xE << 2)
label_22ac8c:
    if (ctx->pc == 0x22AC8Cu) {
        ctx->pc = 0x22AC90u;
        goto label_22ac90;
    }
    ctx->pc = 0x22AC88u;
    {
        const bool branch_taken_0x22ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac88) {
            ctx->pc = 0x22ACC4u;
            goto label_22acc4;
        }
    }
    ctx->pc = 0x22AC90u;
label_22ac90:
    // 0x22ac90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ac94:
    // 0x22ac94: 0xc0ba088  jal         func_2E8220
label_22ac98:
    if (ctx->pc == 0x22AC98u) {
        ctx->pc = 0x22AC9Cu;
        goto label_22ac9c;
    }
    ctx->pc = 0x22AC94u;
    SET_GPR_U32(ctx, 31, 0x22AC9Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x22AC94u, 0x22AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC9Cu;
label_22ac9c:
    // 0x22ac9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ac9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22aca0:
    // 0x22aca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22aca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22aca4:
    // 0x22aca4: 0xc0ba088  jal         func_2E8220
label_22aca8:
    if (ctx->pc == 0x22ACA8u) {
        ctx->pc = 0x22ACACu;
        goto label_22acac;
    }
    ctx->pc = 0x22ACA4u;
    SET_GPR_U32(ctx, 31, 0x22ACACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x22ACA4u, 0x22ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACACu;
label_22acac:
    // 0x22acac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_22acb0:
    if (ctx->pc == 0x22ACB0u) {
        ctx->pc = 0x22ACB4u;
        goto label_22acb4;
    }
    ctx->pc = 0x22ACACu;
    {
        const bool branch_taken_0x22acac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22acac) {
            ctx->pc = 0x22AC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22ACB4u;
label_22acb4:
    // 0x22acb4: 0x200f809  jalr        $s0
label_22acb8:
    if (ctx->pc == 0x22ACB8u) {
        ctx->pc = 0x22ACBCu;
        goto label_22acbc;
    }
    ctx->pc = 0x22ACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x22ACBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ACB4u, 0x22ACBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ACBCu;
label_22acbc:
    // 0x22acbc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_22acc0:
    if (ctx->pc == 0x22ACC0u) {
        ctx->pc = 0x22ACC4u;
        goto label_22acc4;
    }
    ctx->pc = 0x22ACBCu;
    {
        const bool branch_taken_0x22acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22acbc) {
            ctx->pc = 0x22AC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ac68;
        }
    }
    ctx->pc = 0x22ACC4u;
label_22acc4:
    // 0x22acc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22acc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22acc8:
    // 0x22acc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22acc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22accc:
    // 0x22accc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22acccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22acd0:
    // 0x22acd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22acd4:
    // 0x22acd4: 0x3e00008  jr          $ra
label_22acd8:
    if (ctx->pc == 0x22ACD8u) {
        ctx->pc = 0x22ACDCu;
        goto label_22acdc;
    }
    ctx->pc = 0x22ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ACDCu;
label_22acdc:
    // 0x22acdc: 0x0  nop
    ctx->pc = 0x22acdcu;
    // NOP
    ctx->pc = 0x22ace0u;
}
