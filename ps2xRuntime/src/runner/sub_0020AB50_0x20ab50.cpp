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

// Function: sub_0020AB50
// Address: 0x20ab50 - 0x20ac20
void sub_0020AB50_0x20ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AB50_0x20ab50");
#endif

    switch (ctx->pc) {
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab90u: goto label_20ab90;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abe8u: goto label_20abe8;
        case 0x20ac04u: goto label_20ac04;
        default: break;
    }

    ctx->pc = 0x20ab50u;

    // 0x20ab50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20ab54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ab58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ab5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20ab60: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20ab64: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x20ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x20ab68: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ab6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ab70: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x20AB70u;
    SET_GPR_U32(ctx, 31, 0x20AB78u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x20AB70u, 0x20AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB78u;
label_20ab78:
    // 0x20ab78: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20ab7c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AB7Cu;
    {
        const bool branch_taken_0x20ab7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab7c) {
            ctx->pc = 0x20ABCCu;
            goto label_20abcc;
        }
    }
    ctx->pc = 0x20AB84u;
    // 0x20ab84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ab88: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x20AB88u;
    SET_GPR_U32(ctx, 31, 0x20AB90u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x20AB88u, 0x20AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB90u;
label_20ab90:
    // 0x20ab90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ab94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ab98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ab9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aba0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20aba4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aba8: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x20ABA8u;
    SET_GPR_U32(ctx, 31, 0x20ABB0u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x20ABA8u, 0x20ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABB0u;
label_20abb0:
    // 0x20abb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20abb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20abb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20abb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abbc: 0xc082b18  jal         func_20AC60
    ctx->pc = 0x20ABBCu;
    SET_GPR_U32(ctx, 31, 0x20ABC4u);
    ctx->pc = 0x20AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC60u, 0x20ABBCu, 0x20ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABC4u;
label_20abc4:
    // 0x20abc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20ABC4u;
    {
        const bool branch_taken_0x20abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20abc4) {
            ctx->pc = 0x20AC04u;
            goto label_20ac04;
        }
    }
    ctx->pc = 0x20ABCCu;
label_20abcc:
    // 0x20abcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20abd0: 0xc082b68  jal         func_20ADA0
    ctx->pc = 0x20ABD0u;
    SET_GPR_U32(ctx, 31, 0x20ABD8u);
    ctx->pc = 0x20ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADA0u, 0x20ABD0u, 0x20ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABD8u;
label_20abd8:
    // 0x20abd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20abd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20abe0: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x20ABE0u;
    SET_GPR_U32(ctx, 31, 0x20ABE8u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x20ABE0u, 0x20ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x20abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20abec: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x20abecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20abf0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20abf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20abf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abf8: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x20abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20abfc: 0xc082b08  jal         func_20AC20
    ctx->pc = 0x20ABFCu;
    SET_GPR_U32(ctx, 31, 0x20AC04u);
    ctx->pc = 0x20AC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC20u, 0x20ABFCu, 0x20AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC04u;
label_20ac04:
    // 0x20ac04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ac08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ac0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20ac0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC18u;
    // 0x20ac18: 0x0  nop
    ctx->pc = 0x20ac18u;
    // NOP
    // 0x20ac1c: 0x0  nop
    ctx->pc = 0x20ac1cu;
    // NOP
    ctx->pc = 0x20ac20u;
}
