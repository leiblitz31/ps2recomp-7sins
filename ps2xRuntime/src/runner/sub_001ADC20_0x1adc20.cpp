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

// Function: sub_001ADC20
// Address: 0x1adc20 - 0x1adda0
void sub_001ADC20_0x1adc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADC20_0x1adc20");
#endif

    switch (ctx->pc) {
        case 0x1adc84u: goto label_1adc84;
        case 0x1adc94u: goto label_1adc94;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1add18u: goto label_1add18;
        case 0x1add28u: goto label_1add28;
        case 0x1add5cu: goto label_1add5c;
        case 0x1add8cu: goto label_1add8c;
        default: break;
    }

    ctx->pc = 0x1adc20u;

    // 0x1adc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adc28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1adc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1adc2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1adc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1adc34: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1adc34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1adc38: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x1ADC38u;
    {
        const bool branch_taken_0x1adc38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc38) {
            ctx->pc = 0x1ADD7Cu;
            goto label_1add7c;
        }
    }
    ctx->pc = 0x1ADC40u;
    // 0x1adc40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1adc44: 0x24638720  addiu       $v1, $v1, -0x78E0
    ctx->pc = 0x1adc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936352));
    // 0x1adc48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adc4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adc50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1adc54: 0x400008  jr          $v0
    ctx->pc = 0x1ADC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADC5Cu: goto label_1adc5c;
            case 0x1ADCF0u: goto label_1adcf0;
            case 0x1ADD7Cu: goto label_1add7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ADC5Cu;
label_1adc5c:
    // 0x1adc5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc60: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1adc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1adc64: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1ADC64u;
    {
        const bool branch_taken_0x1adc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adc64) {
            ctx->pc = 0x1ADD7Cu;
            goto label_1add7c;
        }
    }
    ctx->pc = 0x1ADC6Cu;
    // 0x1adc6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc70: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1adc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1adc74: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ADC74u;
    {
        const bool branch_taken_0x1adc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adc74) {
            ctx->pc = 0x1ADCE0u;
            goto label_1adce0;
        }
    }
    ctx->pc = 0x1ADC7Cu;
    // 0x1adc7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADC7Cu;
    {
        const bool branch_taken_0x1adc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc7c) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADC84u;
label_1adc84:
    // 0x1adc84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1adc8c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADC8Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC94u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADC8Cu, 0x1ADC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC94u;
label_1adc94:
    // 0x1adc94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc98: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1adc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1adc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adca0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1adca4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1adcac: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1adcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1adcb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1adcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcb4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1adcb8: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x1adcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
    // 0x1adcbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1adcbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcc0: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADCC0u;
    SET_GPR_U32(ctx, 31, 0x1ADCC8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADCC0u, 0x1ADCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCC8u;
label_1adcc8:
    // 0x1adcc8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adccc: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1adcd0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1adcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1adcd4: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x1adcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x1adcd8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1ADCD8u;
    {
        const bool branch_taken_0x1adcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adcd8) {
            ctx->pc = 0x1ADC84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc84;
        }
    }
    ctx->pc = 0x1ADCE0u;
label_1adce0:
    // 0x1adce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adce4: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1adce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x1adce8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1ADCE8u;
    {
        const bool branch_taken_0x1adce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adce8) {
            ctx->pc = 0x1ADD7Cu;
            goto label_1add7c;
        }
    }
    ctx->pc = 0x1ADCF0u;
label_1adcf0:
    // 0x1adcf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1adcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adcf4: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1adcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1adcf8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ADCF8u;
    {
        const bool branch_taken_0x1adcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adcf8) {
            ctx->pc = 0x1ADD7Cu;
            goto label_1add7c;
        }
    }
    ctx->pc = 0x1ADD00u;
    // 0x1add00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add04: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1add08: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ADD08u;
    {
        const bool branch_taken_0x1add08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add08) {
            ctx->pc = 0x1ADD74u;
            goto label_1add74;
        }
    }
    ctx->pc = 0x1ADD10u;
    // 0x1add10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ADD10u;
    {
        const bool branch_taken_0x1add10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add10) {
            ctx->pc = 0x1ADD5Cu;
            goto label_1add5c;
        }
    }
    ctx->pc = 0x1ADD18u;
label_1add18:
    // 0x1add18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add1c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1add20: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1ADD20u;
    SET_GPR_U32(ctx, 31, 0x1ADD28u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1ADD20u, 0x1ADD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD28u;
label_1add28:
    // 0x1add28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1add28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add2c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1add30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1add34: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1add34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1add38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1add3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1add40: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1add44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add48: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1add48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1add4c: 0x24c66c58  addiu       $a2, $a2, 0x6C58
    ctx->pc = 0x1add4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27736));
    // 0x1add50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1add50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add54: 0xc08c800  jal         func_232000
    ctx->pc = 0x1ADD54u;
    SET_GPR_U32(ctx, 31, 0x1ADD5Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1ADD54u, 0x1ADD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD5Cu;
label_1add5c:
    // 0x1add5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add60: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1add64: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1add68: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x1add68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
    // 0x1add6c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1ADD6Cu;
    {
        const bool branch_taken_0x1add6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add6c) {
            ctx->pc = 0x1ADD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1add18;
        }
    }
    ctx->pc = 0x1ADD74u;
label_1add74:
    // 0x1add74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add78: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x1add78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
label_1add7c:
    // 0x1add7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1add7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1add80: 0x27859480  addiu       $a1, $gp, -0x6B80
    ctx->pc = 0x1add80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939776));
    // 0x1add84: 0xc064d48  jal         func_193520
    ctx->pc = 0x1ADD84u;
    SET_GPR_U32(ctx, 31, 0x1ADD8Cu);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x1ADD84u, 0x1ADD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD8Cu;
label_1add8c:
    // 0x1add8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1add90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1add94: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADD9Cu;
    // 0x1add9c: 0x0  nop
    ctx->pc = 0x1add9cu;
    // NOP
    ctx->pc = 0x1adda0u;
}
