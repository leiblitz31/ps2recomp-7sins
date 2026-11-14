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

// Function: sub_0041CF08
// Address: 0x41cf08 - 0x41d020
void sub_0041CF08_0x41cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF08_0x41cf08");
#endif

    switch (ctx->pc) {
        case 0x41cf08u: goto label_41cf08;
        case 0x41cf0cu: goto label_41cf0c;
        case 0x41cf10u: goto label_41cf10;
        case 0x41cf14u: goto label_41cf14;
        case 0x41cf18u: goto label_41cf18;
        case 0x41cf1cu: goto label_41cf1c;
        case 0x41cf20u: goto label_41cf20;
        case 0x41cf24u: goto label_41cf24;
        case 0x41cf28u: goto label_41cf28;
        case 0x41cf2cu: goto label_41cf2c;
        case 0x41cf30u: goto label_41cf30;
        case 0x41cf34u: goto label_41cf34;
        case 0x41cf38u: goto label_41cf38;
        case 0x41cf3cu: goto label_41cf3c;
        case 0x41cf40u: goto label_41cf40;
        case 0x41cf44u: goto label_41cf44;
        case 0x41cf48u: goto label_41cf48;
        case 0x41cf4cu: goto label_41cf4c;
        case 0x41cf50u: goto label_41cf50;
        case 0x41cf54u: goto label_41cf54;
        case 0x41cf58u: goto label_41cf58;
        case 0x41cf5cu: goto label_41cf5c;
        case 0x41cf60u: goto label_41cf60;
        case 0x41cf64u: goto label_41cf64;
        case 0x41cf68u: goto label_41cf68;
        case 0x41cf6cu: goto label_41cf6c;
        case 0x41cf70u: goto label_41cf70;
        case 0x41cf74u: goto label_41cf74;
        case 0x41cf78u: goto label_41cf78;
        case 0x41cf7cu: goto label_41cf7c;
        case 0x41cf80u: goto label_41cf80;
        case 0x41cf84u: goto label_41cf84;
        case 0x41cf88u: goto label_41cf88;
        case 0x41cf8cu: goto label_41cf8c;
        case 0x41cf90u: goto label_41cf90;
        case 0x41cf94u: goto label_41cf94;
        case 0x41cf98u: goto label_41cf98;
        case 0x41cf9cu: goto label_41cf9c;
        case 0x41cfa0u: goto label_41cfa0;
        case 0x41cfa4u: goto label_41cfa4;
        case 0x41cfa8u: goto label_41cfa8;
        case 0x41cfacu: goto label_41cfac;
        case 0x41cfb0u: goto label_41cfb0;
        case 0x41cfb4u: goto label_41cfb4;
        case 0x41cfb8u: goto label_41cfb8;
        case 0x41cfbcu: goto label_41cfbc;
        case 0x41cfc0u: goto label_41cfc0;
        case 0x41cfc4u: goto label_41cfc4;
        case 0x41cfc8u: goto label_41cfc8;
        case 0x41cfccu: goto label_41cfcc;
        case 0x41cfd0u: goto label_41cfd0;
        case 0x41cfd4u: goto label_41cfd4;
        case 0x41cfd8u: goto label_41cfd8;
        case 0x41cfdcu: goto label_41cfdc;
        case 0x41cfe0u: goto label_41cfe0;
        case 0x41cfe4u: goto label_41cfe4;
        case 0x41cfe8u: goto label_41cfe8;
        case 0x41cfecu: goto label_41cfec;
        case 0x41cff0u: goto label_41cff0;
        case 0x41cff4u: goto label_41cff4;
        case 0x41cff8u: goto label_41cff8;
        case 0x41cffcu: goto label_41cffc;
        case 0x41d000u: goto label_41d000;
        case 0x41d004u: goto label_41d004;
        case 0x41d008u: goto label_41d008;
        case 0x41d00cu: goto label_41d00c;
        case 0x41d010u: goto label_41d010;
        case 0x41d014u: goto label_41d014;
        case 0x41d018u: goto label_41d018;
        case 0x41d01cu: goto label_41d01c;
        default: break;
    }

    ctx->pc = 0x41cf08u;

label_41cf08:
    // 0x41cf08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41cf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41cf0c:
    // 0x41cf0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41cf10:
    // 0x41cf10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41cf14:
    // 0x41cf14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41cf18:
    // 0x41cf18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41cf1c:
    // 0x41cf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41cf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41cf20:
    // 0x41cf20: 0x8c62e8e4  lw          $v0, -0x171C($v1)
    ctx->pc = 0x41cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961380)));
label_41cf24:
    // 0x41cf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cf28:
    // 0x41cf28: 0x40f809  jalr        $v0
label_41cf2c:
    if (ctx->pc == 0x41CF2Cu) {
        ctx->pc = 0x41CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF28u;
        // 0x41cf2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF30u;
        goto label_41cf30;
    }
    ctx->pc = 0x41CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CF30u);
        ctx->pc = 0x41CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF28u;
        // 0x41cf2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF28u, 0x41CF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CF30u;
label_41cf30:
    // 0x41cf30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_41cf34:
    if (ctx->pc == 0x41CF34u) {
        ctx->pc = 0x41CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF30u;
        // 0x41cf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF38u;
        goto label_41cf38;
    }
    ctx->pc = 0x41CF30u;
    {
        const bool branch_taken_0x41cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF30u;
        // 0x41cf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cf30) {
            ctx->pc = 0x41CF58u;
            goto label_41cf58;
        }
    }
    ctx->pc = 0x41CF38u;
label_41cf38:
    // 0x41cf38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41cf3c:
    // 0x41cf3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x41cf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_41cf40:
    // 0x41cf40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_41cf44:
    if (ctx->pc == 0x41CF44u) {
        ctx->pc = 0x41CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF40u;
        // 0x41cf44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF48u;
        goto label_41cf48;
    }
    ctx->pc = 0x41CF40u;
    {
        const bool branch_taken_0x41cf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cf40) {
            ctx->pc = 0x41CF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CF40u;
            // 0x41cf44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CF58u;
            goto label_41cf58;
        }
    }
    ctx->pc = 0x41CF48u;
label_41cf48:
    // 0x41cf48: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x41cf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_41cf4c:
    // 0x41cf4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x41cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_41cf50:
    // 0x41cf50: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x41cf50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_41cf54:
    // 0x41cf54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41cf54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cf58:
    // 0x41cf58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41cf5c:
    // 0x41cf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41cf60:
    // 0x41cf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41cf64:
    // 0x41cf64: 0x3e00008  jr          $ra
label_41cf68:
    if (ctx->pc == 0x41CF68u) {
        ctx->pc = 0x41CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF64u;
        // 0x41cf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF6Cu;
        goto label_41cf6c;
    }
    ctx->pc = 0x41CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF64u;
        // 0x41cf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF6Cu;
label_41cf6c:
    // 0x41cf6c: 0x0  nop
    ctx->pc = 0x41cf6cu;
    // NOP
label_41cf70:
    // 0x41cf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41cf74:
    // 0x41cf74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41cf78:
    // 0x41cf78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41cf7c:
    // 0x41cf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cf80:
    // 0x41cf80: 0xc106db0  jal         func_41B6C0
label_41cf84:
    if (ctx->pc == 0x41CF84u) {
        ctx->pc = 0x41CF88u;
        goto label_41cf88;
    }
    ctx->pc = 0x41CF80u;
    SET_GPR_U32(ctx, 31, 0x41CF88u);
    ctx->pc = 0x41B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B6C0u, 0x41CF80u, 0x41CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CF88u;
label_41cf88:
    // 0x41cf88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41cf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cf8c:
    // 0x41cf8c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_41cf90:
    if (ctx->pc == 0x41CF90u) {
        ctx->pc = 0x41CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF8Cu;
        // 0x41cf90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF94u;
        goto label_41cf94;
    }
    ctx->pc = 0x41CF8Cu;
    {
        const bool branch_taken_0x41cf8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41cf8c) {
            ctx->pc = 0x41CF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CF8Cu;
            // 0x41cf90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CF9Cu;
            goto label_41cf9c;
        }
    }
    ctx->pc = 0x41CF94u;
label_41cf94:
    // 0x41cf94: 0x1000001d  b           . + 4 + (0x1D << 2)
label_41cf98:
    if (ctx->pc == 0x41CF98u) {
        ctx->pc = 0x41CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF94u;
        // 0x41cf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CF9Cu;
        goto label_41cf9c;
    }
    ctx->pc = 0x41CF94u;
    {
        const bool branch_taken_0x41cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF94u;
        // 0x41cf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cf94) {
            ctx->pc = 0x41D00Cu;
            goto label_41d00c;
        }
    }
    ctx->pc = 0x41CF9Cu;
label_41cf9c:
    // 0x41cf9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41cf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41cfa0:
    // 0x41cfa0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x41cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41cfa4:
    // 0x41cfa4: 0xc10746c  jal         func_41D1B0
label_41cfa8:
    if (ctx->pc == 0x41CFA8u) {
        ctx->pc = 0x41CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFA4u;
        // 0x41cfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CFACu;
        goto label_41cfac;
    }
    ctx->pc = 0x41CFA4u;
    SET_GPR_U32(ctx, 31, 0x41CFACu);
    ctx->pc = 0x41CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CFA4u;
    // 0x41cfa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x41CFA4u, 0x41CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CFACu;
label_41cfac:
    // 0x41cfac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41cfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cfb0:
    // 0x41cfb0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_41cfb4:
    if (ctx->pc == 0x41CFB4u) {
        ctx->pc = 0x41CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFB0u;
        // 0x41cfb4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CFB8u;
        goto label_41cfb8;
    }
    ctx->pc = 0x41CFB0u;
    {
        const bool branch_taken_0x41cfb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFB0u;
        // 0x41cfb4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cfb0) {
            ctx->pc = 0x41CFC8u;
            goto label_41cfc8;
        }
    }
    ctx->pc = 0x41CFB8u;
label_41cfb8:
    // 0x41cfb8: 0xc10705c  jal         func_41C170
label_41cfbc:
    if (ctx->pc == 0x41CFBCu) {
        ctx->pc = 0x41CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFB8u;
        // 0x41cfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CFC0u;
        goto label_41cfc0;
    }
    ctx->pc = 0x41CFB8u;
    SET_GPR_U32(ctx, 31, 0x41CFC0u);
    ctx->pc = 0x41CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CFB8u;
    // 0x41cfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41CFB8u, 0x41CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CFC0u;
label_41cfc0:
    // 0x41cfc0: 0x10000012  b           . + 4 + (0x12 << 2)
label_41cfc4:
    if (ctx->pc == 0x41CFC4u) {
        ctx->pc = 0x41CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFC0u;
        // 0x41cfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CFC8u;
        goto label_41cfc8;
    }
    ctx->pc = 0x41CFC0u;
    {
        const bool branch_taken_0x41cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFC0u;
        // 0x41cfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cfc0) {
            ctx->pc = 0x41D00Cu;
            goto label_41d00c;
        }
    }
    ctx->pc = 0x41CFC8u;
label_41cfc8:
    // 0x41cfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cfcc:
    // 0x41cfcc: 0x8c62e8e4  lw          $v0, -0x171C($v1)
    ctx->pc = 0x41cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961380)));
label_41cfd0:
    // 0x41cfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41cfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cfd4:
    // 0x41cfd4: 0x40f809  jalr        $v0
label_41cfd8:
    if (ctx->pc == 0x41CFD8u) {
        ctx->pc = 0x41CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFD4u;
        // 0x41cfd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CFDCu;
        goto label_41cfdc;
    }
    ctx->pc = 0x41CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CFDCu);
        ctx->pc = 0x41CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFD4u;
        // 0x41cfd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CFD4u, 0x41CFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CFDCu;
label_41cfdc:
    // 0x41cfdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41cfe0:
    if (ctx->pc == 0x41CFE0u) {
        ctx->pc = 0x41CFE4u;
        goto label_41cfe4;
    }
    ctx->pc = 0x41CFDCu;
    {
        const bool branch_taken_0x41cfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cfdc) {
            ctx->pc = 0x41D000u;
            goto label_41d000;
        }
    }
    ctx->pc = 0x41CFE4u;
label_41cfe4:
    // 0x41cfe4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41cfe8:
    // 0x41cfe8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x41cfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_41cfec:
    // 0x41cfec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41cff0:
    if (ctx->pc == 0x41CFF0u) {
        ctx->pc = 0x41CFF4u;
        goto label_41cff4;
    }
    ctx->pc = 0x41CFECu;
    {
        const bool branch_taken_0x41cfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cfec) {
            ctx->pc = 0x41D000u;
            goto label_41d000;
        }
    }
    ctx->pc = 0x41CFF4u;
label_41cff4:
    // 0x41cff4: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x41cff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_41cff8:
    // 0x41cff8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x41cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_41cffc:
    // 0x41cffc: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x41cffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_41d000:
    // 0x41d000: 0xc10705c  jal         func_41C170
label_41d004:
    if (ctx->pc == 0x41D004u) {
        ctx->pc = 0x41D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D000u;
        // 0x41d004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D008u;
        goto label_41d008;
    }
    ctx->pc = 0x41D000u;
    SET_GPR_U32(ctx, 31, 0x41D008u);
    ctx->pc = 0x41D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D000u;
    // 0x41d004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41D000u, 0x41D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D008u;
label_41d008:
    // 0x41d008: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41d008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41d00c:
    // 0x41d00c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41d00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d010:
    // 0x41d010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d014:
    // 0x41d014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d018:
    // 0x41d018: 0x3e00008  jr          $ra
label_41d01c:
    if (ctx->pc == 0x41D01Cu) {
        ctx->pc = 0x41D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D018u;
        // 0x41d01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D020u;
        goto label_fallthrough_0x41d018;
    }
    ctx->pc = 0x41D018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D018u;
        // 0x41d01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d018:
    ctx->pc = 0x41D020u;
}
