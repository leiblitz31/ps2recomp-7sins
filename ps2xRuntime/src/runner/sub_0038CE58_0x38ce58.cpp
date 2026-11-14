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

// Function: sub_0038CE58
// Address: 0x38ce58 - 0x38cfb8
void sub_0038CE58_0x38ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CE58_0x38ce58");
#endif

    switch (ctx->pc) {
        case 0x38ce58u: goto label_38ce58;
        case 0x38ce5cu: goto label_38ce5c;
        case 0x38ce60u: goto label_38ce60;
        case 0x38ce64u: goto label_38ce64;
        case 0x38ce68u: goto label_38ce68;
        case 0x38ce6cu: goto label_38ce6c;
        case 0x38ce70u: goto label_38ce70;
        case 0x38ce74u: goto label_38ce74;
        case 0x38ce78u: goto label_38ce78;
        case 0x38ce7cu: goto label_38ce7c;
        case 0x38ce80u: goto label_38ce80;
        case 0x38ce84u: goto label_38ce84;
        case 0x38ce88u: goto label_38ce88;
        case 0x38ce8cu: goto label_38ce8c;
        case 0x38ce90u: goto label_38ce90;
        case 0x38ce94u: goto label_38ce94;
        case 0x38ce98u: goto label_38ce98;
        case 0x38ce9cu: goto label_38ce9c;
        case 0x38cea0u: goto label_38cea0;
        case 0x38cea4u: goto label_38cea4;
        case 0x38cea8u: goto label_38cea8;
        case 0x38ceacu: goto label_38ceac;
        case 0x38ceb0u: goto label_38ceb0;
        case 0x38ceb4u: goto label_38ceb4;
        case 0x38ceb8u: goto label_38ceb8;
        case 0x38cebcu: goto label_38cebc;
        case 0x38cec0u: goto label_38cec0;
        case 0x38cec4u: goto label_38cec4;
        case 0x38cec8u: goto label_38cec8;
        case 0x38ceccu: goto label_38cecc;
        case 0x38ced0u: goto label_38ced0;
        case 0x38ced4u: goto label_38ced4;
        case 0x38ced8u: goto label_38ced8;
        case 0x38cedcu: goto label_38cedc;
        case 0x38cee0u: goto label_38cee0;
        case 0x38cee4u: goto label_38cee4;
        case 0x38cee8u: goto label_38cee8;
        case 0x38ceecu: goto label_38ceec;
        case 0x38cef0u: goto label_38cef0;
        case 0x38cef4u: goto label_38cef4;
        case 0x38cef8u: goto label_38cef8;
        case 0x38cefcu: goto label_38cefc;
        case 0x38cf00u: goto label_38cf00;
        case 0x38cf04u: goto label_38cf04;
        case 0x38cf08u: goto label_38cf08;
        case 0x38cf0cu: goto label_38cf0c;
        case 0x38cf10u: goto label_38cf10;
        case 0x38cf14u: goto label_38cf14;
        case 0x38cf18u: goto label_38cf18;
        case 0x38cf1cu: goto label_38cf1c;
        case 0x38cf20u: goto label_38cf20;
        case 0x38cf24u: goto label_38cf24;
        case 0x38cf28u: goto label_38cf28;
        case 0x38cf2cu: goto label_38cf2c;
        case 0x38cf30u: goto label_38cf30;
        case 0x38cf34u: goto label_38cf34;
        case 0x38cf38u: goto label_38cf38;
        case 0x38cf3cu: goto label_38cf3c;
        case 0x38cf40u: goto label_38cf40;
        case 0x38cf44u: goto label_38cf44;
        case 0x38cf48u: goto label_38cf48;
        case 0x38cf4cu: goto label_38cf4c;
        case 0x38cf50u: goto label_38cf50;
        case 0x38cf54u: goto label_38cf54;
        case 0x38cf58u: goto label_38cf58;
        case 0x38cf5cu: goto label_38cf5c;
        case 0x38cf60u: goto label_38cf60;
        case 0x38cf64u: goto label_38cf64;
        case 0x38cf68u: goto label_38cf68;
        case 0x38cf6cu: goto label_38cf6c;
        case 0x38cf70u: goto label_38cf70;
        case 0x38cf74u: goto label_38cf74;
        case 0x38cf78u: goto label_38cf78;
        case 0x38cf7cu: goto label_38cf7c;
        case 0x38cf80u: goto label_38cf80;
        case 0x38cf84u: goto label_38cf84;
        case 0x38cf88u: goto label_38cf88;
        case 0x38cf8cu: goto label_38cf8c;
        case 0x38cf90u: goto label_38cf90;
        case 0x38cf94u: goto label_38cf94;
        case 0x38cf98u: goto label_38cf98;
        case 0x38cf9cu: goto label_38cf9c;
        case 0x38cfa0u: goto label_38cfa0;
        case 0x38cfa4u: goto label_38cfa4;
        case 0x38cfa8u: goto label_38cfa8;
        case 0x38cfacu: goto label_38cfac;
        case 0x38cfb0u: goto label_38cfb0;
        case 0x38cfb4u: goto label_38cfb4;
        default: break;
    }

    ctx->pc = 0x38ce58u;

label_38ce58:
    // 0x38ce58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38ce5c:
    // 0x38ce5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38ce60:
    // 0x38ce60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38ce64:
    // 0x38ce64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ce64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ce68:
    // 0x38ce68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38ce6c:
    // 0x38ce6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38ce6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ce70:
    // 0x38ce70: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x38ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_38ce74:
    // 0x38ce74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38ce74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38ce78:
    // 0x38ce78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_38ce7c:
    // 0x38ce7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ce80:
    // 0x38ce80: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x38ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_38ce84:
    // 0x38ce84: 0x8e150024  lw          $s5, 0x24($s0)
    ctx->pc = 0x38ce84u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_38ce88:
    // 0x38ce88: 0x1aa00041  blez        $s5, . + 4 + (0x41 << 2)
label_38ce8c:
    if (ctx->pc == 0x38CE8Cu) {
        ctx->pc = 0x38CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE88u;
        // 0x38ce8c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE90u;
        goto label_38ce90;
    }
    ctx->pc = 0x38CE88u;
    {
        const bool branch_taken_0x38ce88 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x38CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE88u;
        // 0x38ce8c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce88) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CE90u;
label_38ce90:
    // 0x38ce90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38ce90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ce94:
    // 0x38ce94: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
label_38ce98:
    if (ctx->pc == 0x38CE98u) {
        ctx->pc = 0x38CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE94u;
        // 0x38ce98: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE9Cu;
        goto label_38ce9c;
    }
    ctx->pc = 0x38CE94u;
    {
        const bool branch_taken_0x38ce94 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x38CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE94u;
        // 0x38ce98: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce94) {
            ctx->pc = 0x38CEF4u;
            goto label_38cef4;
        }
    }
    ctx->pc = 0x38CE9Cu;
label_38ce9c:
    // 0x38ce9c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
label_38cea0:
    if (ctx->pc == 0x38CEA0u) {
        ctx->pc = 0x38CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE9Cu;
        // 0x38cea0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEA4u;
        goto label_38cea4;
    }
    ctx->pc = 0x38CE9Cu;
    {
        const bool branch_taken_0x38ce9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ce9c) {
            ctx->pc = 0x38CEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CE9Cu;
            // 0x38cea0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CF24u;
            goto label_38cf24;
        }
    }
    ctx->pc = 0x38CEA4u;
label_38cea4:
    // 0x38cea4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x38cea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38cea8:
    // 0x38cea8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_38ceac:
    if (ctx->pc == 0x38CEACu) {
        ctx->pc = 0x38CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEA8u;
        // 0x38ceac: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEB0u;
        goto label_38ceb0;
    }
    ctx->pc = 0x38CEA8u;
    {
        const bool branch_taken_0x38cea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cea8) {
            ctx->pc = 0x38CEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CEA8u;
            // 0x38ceac: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CEF8u;
            goto label_38cef8;
        }
    }
    ctx->pc = 0x38CEB0u;
label_38ceb0:
    // 0x38ceb0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38ceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38ceb4:
    // 0x38ceb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_38ceb8:
    if (ctx->pc == 0x38CEB8u) {
        ctx->pc = 0x38CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEB4u;
        // 0x38ceb8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEBCu;
        goto label_38cebc;
    }
    ctx->pc = 0x38CEB4u;
    {
        const bool branch_taken_0x38ceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEB4u;
        // 0x38ceb8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ceb4) {
            ctx->pc = 0x38CED8u;
            goto label_38ced8;
        }
    }
    ctx->pc = 0x38CEBCu;
label_38cebc:
    // 0x38cebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38cebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38cec0:
    // 0x38cec0: 0x280f809  jalr        $s4
label_38cec4:
    if (ctx->pc == 0x38CEC4u) {
        ctx->pc = 0x38CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEC0u;
        // 0x38cec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEC8u;
        goto label_38cec8;
    }
    ctx->pc = 0x38CEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CEC8u);
        ctx->pc = 0x38CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEC0u;
        // 0x38cec4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CEC0u, 0x38CEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CEC8u;
label_38cec8:
    // 0x38cec8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_38cecc:
    if (ctx->pc == 0x38CECCu) {
        ctx->pc = 0x38CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEC8u;
        // 0x38cecc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CED0u;
        goto label_38ced0;
    }
    ctx->pc = 0x38CEC8u;
    {
        const bool branch_taken_0x38cec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEC8u;
        // 0x38cecc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cec8) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CED0u;
label_38ced0:
    // 0x38ced0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x38ced0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38ced4:
    // 0x38ced4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38ced8:
    // 0x38ced8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38ced8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38cedc:
    // 0x38cedc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cee0:
    // 0x38cee0: 0x280f809  jalr        $s4
label_38cee4:
    if (ctx->pc == 0x38CEE4u) {
        ctx->pc = 0x38CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEE0u;
        // 0x38cee4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEE8u;
        goto label_38cee8;
    }
    ctx->pc = 0x38CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CEE8u);
        ctx->pc = 0x38CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEE0u;
        // 0x38cee4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CEE0u, 0x38CEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CEE8u;
label_38cee8:
    // 0x38cee8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_38ceec:
    if (ctx->pc == 0x38CEECu) {
        ctx->pc = 0x38CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEE8u;
        // 0x38ceec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEF0u;
        goto label_38cef0;
    }
    ctx->pc = 0x38CEE8u;
    {
        const bool branch_taken_0x38cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEE8u;
        // 0x38ceec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cee8) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CEF0u;
label_38cef0:
    // 0x38cef0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38cef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38cef4:
    // 0x38cef4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38cef8:
    // 0x38cef8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38cef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38cefc:
    // 0x38cefc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cf00:
    // 0x38cf00: 0x280f809  jalr        $s4
label_38cf04:
    if (ctx->pc == 0x38CF04u) {
        ctx->pc = 0x38CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF00u;
        // 0x38cf04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF08u;
        goto label_38cf08;
    }
    ctx->pc = 0x38CF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CF08u);
        ctx->pc = 0x38CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF00u;
        // 0x38cf04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF00u, 0x38CF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF08u;
label_38cf08:
    // 0x38cf08: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_38cf0c:
    if (ctx->pc == 0x38CF0Cu) {
        ctx->pc = 0x38CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF08u;
        // 0x38cf0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF10u;
        goto label_38cf10;
    }
    ctx->pc = 0x38CF08u;
    {
        const bool branch_taken_0x38cf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF08u;
        // 0x38cf0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf08) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF10u;
label_38cf10:
    // 0x38cf10: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x38cf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_38cf14:
    // 0x38cf14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_38cf18:
    if (ctx->pc == 0x38CF18u) {
        ctx->pc = 0x38CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF14u;
        // 0x38cf18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF1Cu;
        goto label_38cf1c;
    }
    ctx->pc = 0x38CF14u;
    {
        const bool branch_taken_0x38cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF14u;
        // 0x38cf18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf14) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF1Cu;
label_38cf1c:
    // 0x38cf1c: 0x0  nop
    ctx->pc = 0x38cf1cu;
    // NOP
label_38cf20:
    // 0x38cf20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38cf24:
    // 0x38cf24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38cf28:
    // 0x38cf28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cf2c:
    // 0x38cf2c: 0x280f809  jalr        $s4
label_38cf30:
    if (ctx->pc == 0x38CF30u) {
        ctx->pc = 0x38CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF2Cu;
        // 0x38cf30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF34u;
        goto label_38cf34;
    }
    ctx->pc = 0x38CF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CF34u);
        ctx->pc = 0x38CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF2Cu;
        // 0x38cf30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF2Cu, 0x38CF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF34u;
label_38cf34:
    // 0x38cf34: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_38cf38:
    if (ctx->pc == 0x38CF38u) {
        ctx->pc = 0x38CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF34u;
        // 0x38cf38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF3Cu;
        goto label_38cf3c;
    }
    ctx->pc = 0x38CF34u;
    {
        const bool branch_taken_0x38cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF34u;
        // 0x38cf38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf34) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF3Cu;
label_38cf3c:
    // 0x38cf3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38cf40:
    // 0x38cf40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cf44:
    // 0x38cf44: 0x280f809  jalr        $s4
label_38cf48:
    if (ctx->pc == 0x38CF48u) {
        ctx->pc = 0x38CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF44u;
        // 0x38cf48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF4Cu;
        goto label_38cf4c;
    }
    ctx->pc = 0x38CF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CF4Cu);
        ctx->pc = 0x38CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF44u;
        // 0x38cf48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF44u, 0x38CF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF4Cu;
label_38cf4c:
    // 0x38cf4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_38cf50:
    if (ctx->pc == 0x38CF50u) {
        ctx->pc = 0x38CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF4Cu;
        // 0x38cf50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF54u;
        goto label_38cf54;
    }
    ctx->pc = 0x38CF4Cu;
    {
        const bool branch_taken_0x38cf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF4Cu;
        // 0x38cf50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf4c) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF54u;
label_38cf54:
    // 0x38cf54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38cf58:
    // 0x38cf58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cf5c:
    // 0x38cf5c: 0x280f809  jalr        $s4
label_38cf60:
    if (ctx->pc == 0x38CF60u) {
        ctx->pc = 0x38CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF5Cu;
        // 0x38cf60: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF64u;
        goto label_38cf64;
    }
    ctx->pc = 0x38CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CF64u);
        ctx->pc = 0x38CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF5Cu;
        // 0x38cf60: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF5Cu, 0x38CF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF64u;
label_38cf64:
    // 0x38cf64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_38cf68:
    if (ctx->pc == 0x38CF68u) {
        ctx->pc = 0x38CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF64u;
        // 0x38cf68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF6Cu;
        goto label_38cf6c;
    }
    ctx->pc = 0x38CF64u;
    {
        const bool branch_taken_0x38cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF64u;
        // 0x38cf68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf64) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF6Cu;
label_38cf6c:
    // 0x38cf6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x38cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_38cf70:
    // 0x38cf70: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_38cf74:
    // 0x38cf74: 0x280f809  jalr        $s4
label_38cf78:
    if (ctx->pc == 0x38CF78u) {
        ctx->pc = 0x38CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF74u;
        // 0x38cf78: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF7Cu;
        goto label_38cf7c;
    }
    ctx->pc = 0x38CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x38CF7Cu);
        ctx->pc = 0x38CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF74u;
        // 0x38cf78: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF74u, 0x38CF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF7Cu;
label_38cf7c:
    // 0x38cf7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_38cf80:
    if (ctx->pc == 0x38CF80u) {
        ctx->pc = 0x38CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF7Cu;
        // 0x38cf80: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF84u;
        goto label_38cf84;
    }
    ctx->pc = 0x38CF7Cu;
    {
        const bool branch_taken_0x38cf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF7Cu;
        // 0x38cf80: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf7c) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF84u;
label_38cf84:
    // 0x38cf84: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x38cf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_38cf88:
    // 0x38cf88: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_38cf8c:
    if (ctx->pc == 0x38CF8Cu) {
        ctx->pc = 0x38CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF88u;
        // 0x38cf8c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF90u;
        goto label_38cf90;
    }
    ctx->pc = 0x38CF88u;
    {
        const bool branch_taken_0x38cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF88u;
        // 0x38cf8c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf88) {
            ctx->pc = 0x38CF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cf20;
        }
    }
    ctx->pc = 0x38CF90u;
label_38cf90:
    // 0x38cf90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38cf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cf94:
    // 0x38cf94: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38cf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38cf98:
    // 0x38cf98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38cf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38cf9c:
    // 0x38cf9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38cf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38cfa0:
    // 0x38cfa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38cfa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38cfa4:
    // 0x38cfa4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x38cfa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38cfa8:
    // 0x38cfa8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x38cfa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38cfac:
    // 0x38cfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cfb0:
    // 0x38cfb0: 0x3e00008  jr          $ra
label_38cfb4:
    if (ctx->pc == 0x38CFB4u) {
        ctx->pc = 0x38CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFB0u;
        // 0x38cfb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CFB8u;
        goto label_fallthrough_0x38cfb0;
    }
    ctx->pc = 0x38CFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFB0u;
        // 0x38cfb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cfb0:
    ctx->pc = 0x38CFB8u;
}
