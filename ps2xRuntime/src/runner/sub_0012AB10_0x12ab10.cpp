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

// Function: sub_0012AB10
// Address: 0x12ab10 - 0x12abc0
void sub_0012AB10_0x12ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AB10_0x12ab10");
#endif

    switch (ctx->pc) {
        case 0x12ab10u: goto label_12ab10;
        case 0x12ab14u: goto label_12ab14;
        case 0x12ab18u: goto label_12ab18;
        case 0x12ab1cu: goto label_12ab1c;
        case 0x12ab20u: goto label_12ab20;
        case 0x12ab24u: goto label_12ab24;
        case 0x12ab28u: goto label_12ab28;
        case 0x12ab2cu: goto label_12ab2c;
        case 0x12ab30u: goto label_12ab30;
        case 0x12ab34u: goto label_12ab34;
        case 0x12ab38u: goto label_12ab38;
        case 0x12ab3cu: goto label_12ab3c;
        case 0x12ab40u: goto label_12ab40;
        case 0x12ab44u: goto label_12ab44;
        case 0x12ab48u: goto label_12ab48;
        case 0x12ab4cu: goto label_12ab4c;
        case 0x12ab50u: goto label_12ab50;
        case 0x12ab54u: goto label_12ab54;
        case 0x12ab58u: goto label_12ab58;
        case 0x12ab5cu: goto label_12ab5c;
        case 0x12ab60u: goto label_12ab60;
        case 0x12ab64u: goto label_12ab64;
        case 0x12ab68u: goto label_12ab68;
        case 0x12ab6cu: goto label_12ab6c;
        case 0x12ab70u: goto label_12ab70;
        case 0x12ab74u: goto label_12ab74;
        case 0x12ab78u: goto label_12ab78;
        case 0x12ab7cu: goto label_12ab7c;
        case 0x12ab80u: goto label_12ab80;
        case 0x12ab84u: goto label_12ab84;
        case 0x12ab88u: goto label_12ab88;
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12ab90u: goto label_12ab90;
        case 0x12ab94u: goto label_12ab94;
        case 0x12ab98u: goto label_12ab98;
        case 0x12ab9cu: goto label_12ab9c;
        case 0x12aba0u: goto label_12aba0;
        case 0x12aba4u: goto label_12aba4;
        case 0x12aba8u: goto label_12aba8;
        case 0x12abacu: goto label_12abac;
        case 0x12abb0u: goto label_12abb0;
        case 0x12abb4u: goto label_12abb4;
        case 0x12abb8u: goto label_12abb8;
        case 0x12abbcu: goto label_12abbc;
        default: break;
    }

    ctx->pc = 0x12ab10u;

label_12ab10:
    // 0x12ab10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_12ab14:
    // 0x12ab14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_12ab18:
    // 0x12ab18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12ab1c:
    // 0x12ab1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12ab20:
    // 0x12ab20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x12ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_12ab24:
    // 0x12ab24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12ab28:
    // 0x12ab28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_12ab2c:
    if (ctx->pc == 0x12AB2Cu) {
        ctx->pc = 0x12AB30u;
        goto label_12ab30;
    }
    ctx->pc = 0x12AB28u;
    {
        const bool branch_taken_0x12ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ab28) {
            ctx->pc = 0x12AB38u;
            goto label_12ab38;
        }
    }
    ctx->pc = 0x12AB30u;
label_12ab30:
    // 0x12ab30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ab34:
    // 0x12ab34: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_12ab38:
    // 0x12ab38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12ab3c:
    // 0x12ab3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12ab40:
    // 0x12ab40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12ab44:
    // 0x12ab44: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12ab48:
    // 0x12ab48: 0xc119b68  jal         func_466DA0
label_12ab4c:
    if (ctx->pc == 0x12AB4Cu) {
        ctx->pc = 0x12AB50u;
        goto label_12ab50;
    }
    ctx->pc = 0x12AB48u;
    SET_GPR_U32(ctx, 31, 0x12AB50u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12AB48u, 0x12AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB50u;
label_12ab50:
    // 0x12ab50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ab54:
    // 0x12ab54: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_12ab58:
    if (ctx->pc == 0x12AB58u) {
        ctx->pc = 0x12AB5Cu;
        goto label_12ab5c;
    }
    ctx->pc = 0x12AB54u;
    {
        const bool branch_taken_0x12ab54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab54) {
            ctx->pc = 0x12AB68u;
            goto label_12ab68;
        }
    }
    ctx->pc = 0x12AB5Cu;
label_12ab5c:
    // 0x12ab5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12ab5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ab60:
    // 0x12ab60: 0x1000000e  b           . + 4 + (0xE << 2)
label_12ab64:
    if (ctx->pc == 0x12AB64u) {
        ctx->pc = 0x12AB68u;
        goto label_12ab68;
    }
    ctx->pc = 0x12AB60u;
    {
        const bool branch_taken_0x12ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab60) {
            ctx->pc = 0x12AB9Cu;
            goto label_12ab9c;
        }
    }
    ctx->pc = 0x12AB68u;
label_12ab68:
    // 0x12ab68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab6c:
    // 0x12ab6c: 0xc0ba088  jal         func_2E8220
label_12ab70:
    if (ctx->pc == 0x12AB70u) {
        ctx->pc = 0x12AB74u;
        goto label_12ab74;
    }
    ctx->pc = 0x12AB6Cu;
    SET_GPR_U32(ctx, 31, 0x12AB74u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x12AB6Cu, 0x12AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB74u;
label_12ab74:
    // 0x12ab74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12ab78:
    // 0x12ab78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ab7c:
    // 0x12ab7c: 0xc0ba088  jal         func_2E8220
label_12ab80:
    if (ctx->pc == 0x12AB80u) {
        ctx->pc = 0x12AB84u;
        goto label_12ab84;
    }
    ctx->pc = 0x12AB7Cu;
    SET_GPR_U32(ctx, 31, 0x12AB84u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x12AB7Cu, 0x12AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB84u;
label_12ab84:
    // 0x12ab84: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_12ab88:
    if (ctx->pc == 0x12AB88u) {
        ctx->pc = 0x12AB8Cu;
        goto label_12ab8c;
    }
    ctx->pc = 0x12AB84u;
    {
        const bool branch_taken_0x12ab84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab84) {
            ctx->pc = 0x12AB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab38;
        }
    }
    ctx->pc = 0x12AB8Cu;
label_12ab8c:
    // 0x12ab8c: 0x200f809  jalr        $s0
label_12ab90:
    if (ctx->pc == 0x12AB90u) {
        ctx->pc = 0x12AB94u;
        goto label_12ab94;
    }
    ctx->pc = 0x12AB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x12AB94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AB8Cu, 0x12AB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AB94u;
label_12ab94:
    // 0x12ab94: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_12ab98:
    if (ctx->pc == 0x12AB98u) {
        ctx->pc = 0x12AB9Cu;
        goto label_12ab9c;
    }
    ctx->pc = 0x12AB94u;
    {
        const bool branch_taken_0x12ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab94) {
            ctx->pc = 0x12AB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab38;
        }
    }
    ctx->pc = 0x12AB9Cu;
label_12ab9c:
    // 0x12ab9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ab9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12aba0:
    // 0x12aba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12aba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12aba4:
    // 0x12aba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12aba8:
    // 0x12aba8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_12abac:
    // 0x12abac: 0x3e00008  jr          $ra
label_12abb0:
    if (ctx->pc == 0x12ABB0u) {
        ctx->pc = 0x12ABB4u;
        goto label_12abb4;
    }
    ctx->pc = 0x12ABACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ABACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ABB4u;
label_12abb4:
    // 0x12abb4: 0x0  nop
    ctx->pc = 0x12abb4u;
    // NOP
label_12abb8:
    // 0x12abb8: 0x0  nop
    ctx->pc = 0x12abb8u;
    // NOP
label_12abbc:
    // 0x12abbc: 0x0  nop
    ctx->pc = 0x12abbcu;
    // NOP
    ctx->pc = 0x12abc0u;
}
