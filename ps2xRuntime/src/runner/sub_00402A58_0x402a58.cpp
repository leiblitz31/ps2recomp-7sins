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

// Function: sub_00402A58
// Address: 0x402a58 - 0x402d98
void sub_00402A58_0x402a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402A58_0x402a58");
#endif

    switch (ctx->pc) {
        case 0x402a98u: goto label_402a98;
        case 0x402ab4u: goto label_402ab4;
        case 0x402aecu: goto label_402aec;
        case 0x402af8u: goto label_402af8;
        case 0x402b08u: goto label_402b08;
        case 0x402b18u: goto label_402b18;
        case 0x402b30u: goto label_402b30;
        case 0x402b88u: goto label_402b88;
        case 0x402b98u: goto label_402b98;
        case 0x402ba0u: goto label_402ba0;
        case 0x402bb0u: goto label_402bb0;
        case 0x402bc4u: goto label_402bc4;
        case 0x402bd4u: goto label_402bd4;
        case 0x402becu: goto label_402bec;
        case 0x402bfcu: goto label_402bfc;
        case 0x402c20u: goto label_402c20;
        case 0x402c30u: goto label_402c30;
        case 0x402c50u: goto label_402c50;
        case 0x402c78u: goto label_402c78;
        case 0x402c88u: goto label_402c88;
        case 0x402ca0u: goto label_402ca0;
        case 0x402cd4u: goto label_402cd4;
        case 0x402d08u: goto label_402d08;
        case 0x402d18u: goto label_402d18;
        case 0x402d20u: goto label_402d20;
        case 0x402d6cu: goto label_402d6c;
        default: break;
    }

    ctx->pc = 0x402a58u;

    // 0x402a58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x402a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x402a5c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x402a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x402a60: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x402a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x402a64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x402a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402a68: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x402a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x402a6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x402a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402a70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x402a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x402a74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x402a74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402a78: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x402a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x402a7c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x402a7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402a80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x402a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x402a84: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x402a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x402a88: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x402A88u;
    {
        const bool branch_taken_0x402a88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x402A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402A88u;
        // 0x402a8c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402a88) {
            ctx->pc = 0x402AA4u;
            goto label_402aa4;
        }
    }
    ctx->pc = 0x402A90u;
    // 0x402a90: 0xc100970  jal         func_4025C0
    ctx->pc = 0x402A90u;
    SET_GPR_U32(ctx, 31, 0x402A98u);
    ctx->pc = 0x402A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402A90u;
    // 0x402a94: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4025C0u, 0x402A90u, 0x402A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402A98u;
label_402a98:
    // 0x402a98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x402a98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402a9c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x402A9Cu;
    {
        const bool branch_taken_0x402a9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x402a9c) {
            ctx->pc = 0x402ABCu;
            goto label_402abc;
        }
    }
    ctx->pc = 0x402AA4u;
label_402aa4:
    // 0x402aa4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x402aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402aac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402AACu;
    SET_GPR_U32(ctx, 31, 0x402AB4u);
    ctx->pc = 0x402AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AACu;
    // 0x402ab0: 0x24a50420  addiu       $a1, $a1, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402AACu, 0x402AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AB4u;
label_402ab4:
    // 0x402ab4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x402AB4u;
    {
        const bool branch_taken_0x402ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AB4u;
        // 0x402ab8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ab4) {
            ctx->pc = 0x402D70u;
            goto label_402d70;
        }
    }
    ctx->pc = 0x402ABCu;
label_402abc:
    // 0x402abc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x402ABCu;
    {
        const bool branch_taken_0x402abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402ABCu;
        // 0x402ac0: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402abc) {
            ctx->pc = 0x402ADCu;
            goto label_402adc;
        }
    }
    ctx->pc = 0x402AC4u;
    // 0x402ac4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x402ac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x402ac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x402AC8u;
    {
        const bool branch_taken_0x402ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AC8u;
        // 0x402acc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ac8) {
            ctx->pc = 0x402ADCu;
            goto label_402adc;
        }
    }
    ctx->pc = 0x402AD0u;
    // 0x402ad0: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x402AD0u;
    {
        const bool branch_taken_0x402ad0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x402AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AD0u;
        // 0x402ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ad0) {
            ctx->pc = 0x402B00u;
            goto label_402b00;
        }
    }
    ctx->pc = 0x402AD8u;
    // 0x402ad8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x402ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_402adc:
    // 0x402adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402ae0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x402ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402ae4: 0xc100a20  jal         func_402880
    ctx->pc = 0x402AE4u;
    SET_GPR_U32(ctx, 31, 0x402AECu);
    ctx->pc = 0x402AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AE4u;
    // 0x402ae8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402880u, 0x402AE4u, 0x402AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AECu;
label_402aec:
    // 0x402aec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x402aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402af0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x402AF0u;
    SET_GPR_U32(ctx, 31, 0x402AF8u);
    ctx->pc = 0x402AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402AF0u;
    // 0x402af4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x402AF0u, 0x402AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402AF8u;
label_402af8:
    // 0x402af8: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x402AF8u;
    {
        const bool branch_taken_0x402af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402AF8u;
        // 0x402afc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402af8) {
            ctx->pc = 0x402D70u;
            goto label_402d70;
        }
    }
    ctx->pc = 0x402B00u;
label_402b00:
    // 0x402b00: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402B00u;
    SET_GPR_U32(ctx, 31, 0x402B08u);
    ctx->pc = 0x402B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B00u;
    // 0x402b04: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402B00u, 0x402B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B08u;
label_402b08:
    // 0x402b08: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x402b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402b0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x402b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b10: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x402B10u;
    SET_GPR_U32(ctx, 31, 0x402B18u);
    ctx->pc = 0x402B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B10u;
    // 0x402b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x402B10u, 0x402B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B18u;
label_402b18:
    // 0x402b18: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x402b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b1c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x402b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x402b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b28: 0xc100194  jal         func_400650
    ctx->pc = 0x402B28u;
    SET_GPR_U32(ctx, 31, 0x402B30u);
    ctx->pc = 0x402B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B28u;
    // 0x402b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400650u, 0x402B28u, 0x402B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B30u;
label_402b30:
    // 0x402b30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x402b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x402b34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x402b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x402b38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x402b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x402b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402b40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x402b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x402b44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402b48: 0x23a3e  dsrl32      $a3, $v0, 8
    ctx->pc = 0x402b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x402b4c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x402b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x402b50: 0x21c3e  dsrl32      $v1, $v0, 16
    ctx->pc = 0x402b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x402b54: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402b54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402b58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402b5c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x402b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x402b60: 0x2163e  dsrl32      $v0, $v0, 24
    ctx->pc = 0x402b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x402b64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402b6c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402b70: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x402b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x402b74: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x402b74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x402b78: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x402b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x402b7c: 0xa3a70022  sb          $a3, 0x22($sp)
    ctx->pc = 0x402b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x402b80: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402B80u;
    SET_GPR_U32(ctx, 31, 0x402B88u);
    ctx->pc = 0x402B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B80u;
    // 0x402b84: 0xa3a80023  sb          $t0, 0x23($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402B80u, 0x402B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B88u;
label_402b88:
    // 0x402b88: 0x2785acd8  addiu       $a1, $gp, -0x5328
    ctx->pc = 0x402b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946008));
    // 0x402b8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402b90: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402B90u;
    SET_GPR_U32(ctx, 31, 0x402B98u);
    ctx->pc = 0x402B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B90u;
    // 0x402b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402B90u, 0x402B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402B98u;
label_402b98:
    // 0x402b98: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x402B98u;
    SET_GPR_U32(ctx, 31, 0x402BA0u);
    ctx->pc = 0x402B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402B98u;
    // 0x402b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x402B98u, 0x402BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BA0u;
label_402ba0:
    // 0x402ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402ba4: 0x2785acd8  addiu       $a1, $gp, -0x5328
    ctx->pc = 0x402ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946008));
    // 0x402ba8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402BA8u;
    SET_GPR_U32(ctx, 31, 0x402BB0u);
    ctx->pc = 0x402BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BA8u;
    // 0x402bac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402BA8u, 0x402BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BB0u;
label_402bb0:
    // 0x402bb0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x402BB0u;
    {
        const bool branch_taken_0x402bb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x402BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402BB0u;
        // 0x402bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402bb0) {
            ctx->pc = 0x402BD4u;
            goto label_402bd4;
        }
    }
    ctx->pc = 0x402BB8u;
    // 0x402bb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x402bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402bbc: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402BBCu;
    SET_GPR_U32(ctx, 31, 0x402BC4u);
    ctx->pc = 0x402BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BBCu;
    // 0x402bc0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402BBCu, 0x402BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BC4u;
label_402bc4:
    // 0x402bc4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x402bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402bc8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x402bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402bcc: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402BCCu;
    SET_GPR_U32(ctx, 31, 0x402BD4u);
    ctx->pc = 0x402BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BCCu;
    // 0x402bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402BCCu, 0x402BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BD4u;
label_402bd4:
    // 0x402bd4: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x402bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x402bd8: 0xa3b60044  sb          $s6, 0x44($sp)
    ctx->pc = 0x402bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 22));
    // 0x402bdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402be4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402BE4u;
    SET_GPR_U32(ctx, 31, 0x402BECu);
    ctx->pc = 0x402BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BE4u;
    // 0x402be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402BE4u, 0x402BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BECu;
label_402bec:
    // 0x402bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402bf4: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402BF4u;
    SET_GPR_U32(ctx, 31, 0x402BFCu);
    ctx->pc = 0x402BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402BF4u;
    // 0x402bf8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402BF4u, 0x402BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402BFCu;
label_402bfc:
    // 0x402bfc: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x402bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402c00: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x402C00u;
    {
        const bool branch_taken_0x402c00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C00u;
        // 0x402c04: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c00) {
            ctx->pc = 0x402C38u;
            goto label_402c38;
        }
    }
    ctx->pc = 0x402C08u;
    // 0x402c08: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x402c08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x402c0c: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x402C0Cu;
    {
        const bool branch_taken_0x402c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C0Cu;
        // 0x402c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c0c) {
            ctx->pc = 0x402D20u;
            goto label_402d20;
        }
    }
    ctx->pc = 0x402C14u;
    // 0x402c14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c18: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402C18u;
    SET_GPR_U32(ctx, 31, 0x402C20u);
    ctx->pc = 0x402C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C18u;
    // 0x402c1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402C18u, 0x402C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402C20u;
label_402c20:
    // 0x402c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x402c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c28: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402C28u;
    SET_GPR_U32(ctx, 31, 0x402C30u);
    ctx->pc = 0x402C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C28u;
    // 0x402c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402C28u, 0x402C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402C30u;
label_402c30:
    // 0x402c30: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x402C30u;
    {
        const bool branch_taken_0x402c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C30u;
        // 0x402c34: 0xde4201f0  ld          $v0, 0x1F0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c30) {
            ctx->pc = 0x402D24u;
            goto label_402d24;
        }
    }
    ctx->pc = 0x402C38u;
label_402c38:
    // 0x402c38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x402c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x402c3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x402c3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c40: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x402C40u;
    {
        const bool branch_taken_0x402c40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x402C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C40u;
        // 0x402c44: 0x26560110  addiu       $s6, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c40) {
            ctx->pc = 0x402CBCu;
            goto label_402cbc;
        }
    }
    ctx->pc = 0x402C48u;
    // 0x402c48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x402c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c4c: 0x0  nop
    ctx->pc = 0x402c4cu;
    // NOP
label_402c50:
    // 0x402c50: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x402c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x402c54: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x402c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x402c58: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x402c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x402c5c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x402C5Cu;
    {
        const bool branch_taken_0x402c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C5Cu;
        // 0x402c60: 0x8e51015c  lw          $s1, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c5c) {
            ctx->pc = 0x402C88u;
            goto label_402c88;
        }
    }
    ctx->pc = 0x402C64u;
    // 0x402c64: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x402C64u;
    {
        const bool branch_taken_0x402c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402C64u;
        // 0x402c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402c64) {
            ctx->pc = 0x402C88u;
            goto label_402c88;
        }
    }
    ctx->pc = 0x402C6Cu;
    // 0x402c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c70: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402C70u;
    SET_GPR_U32(ctx, 31, 0x402C78u);
    ctx->pc = 0x402C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C70u;
    // 0x402c74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402C70u, 0x402C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402C78u;
label_402c78:
    // 0x402c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x402c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x402c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c80: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402C80u;
    SET_GPR_U32(ctx, 31, 0x402C88u);
    ctx->pc = 0x402C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C80u;
    // 0x402c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402C80u, 0x402C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402C88u;
label_402c88:
    // 0x402c88: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x402c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x402c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402c90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x402c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x402c94: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x402c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x402c98: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x402C98u;
    SET_GPR_U32(ctx, 31, 0x402CA0u);
    ctx->pc = 0x402C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402C98u;
    // 0x402c9c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x402C98u, 0x402CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402CA0u;
label_402ca0:
    // 0x402ca0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x402ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x402ca4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x402ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x402ca8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x402ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x402cac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x402cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x402cb0: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x402cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x402cb4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x402CB4u;
    {
        const bool branch_taken_0x402cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x402CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CB4u;
        // 0x402cb8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402cb4) {
            ctx->pc = 0x402C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402c50;
        }
    }
    ctx->pc = 0x402CBCu;
label_402cbc:
    // 0x402cbc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x402cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x402cc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x402CC0u;
    {
        const bool branch_taken_0x402cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x402cc0) {
            ctx->pc = 0x402CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402CC0u;
            // 0x402cc4: 0x8e430124  lw          $v1, 0x124($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402CD8u;
            goto label_402cd8;
        }
    }
    ctx->pc = 0x402CC8u;
    // 0x402cc8: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x402cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x402ccc: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x402CCCu;
    SET_GPR_U32(ctx, 31, 0x402CD4u);
    ctx->pc = 0x402CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402CCCu;
    // 0x402cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x402CCCu, 0x402CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402CD4u;
label_402cd4:
    // 0x402cd4: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x402cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_402cd8:
    // 0x402cd8: 0x8e46015c  lw          $a2, 0x15C($s2)
    ctx->pc = 0x402cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x402cdc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x402cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x402ce0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x402CE0u;
    {
        const bool branch_taken_0x402ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CE0u;
        // 0x402ce4: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ce0) {
            ctx->pc = 0x402D18u;
            goto label_402d18;
        }
    }
    ctx->pc = 0x402CE8u;
    // 0x402ce8: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x402ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x402cec: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x402CECu;
    {
        const bool branch_taken_0x402cec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x402CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CECu;
        // 0x402cf0: 0xc38023  subu        $s0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402cec) {
            ctx->pc = 0x402D18u;
            goto label_402d18;
        }
    }
    ctx->pc = 0x402CF4u;
    // 0x402cf4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x402CF4u;
    {
        const bool branch_taken_0x402cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402CF4u;
        // 0x402cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402cf4) {
            ctx->pc = 0x402D18u;
            goto label_402d18;
        }
    }
    ctx->pc = 0x402CFCu;
    // 0x402cfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d00: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x402D00u;
    SET_GPR_U32(ctx, 31, 0x402D08u);
    ctx->pc = 0x402D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D00u;
    // 0x402d04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x402D00u, 0x402D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D08u;
label_402d08:
    // 0x402d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x402d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x402d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d10: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402D10u;
    SET_GPR_U32(ctx, 31, 0x402D18u);
    ctx->pc = 0x402D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D10u;
    // 0x402d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402D10u, 0x402D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D18u;
label_402d18:
    // 0x402d18: 0xc0f6564  jal         func_3D9590
    ctx->pc = 0x402D18u;
    SET_GPR_U32(ctx, 31, 0x402D20u);
    ctx->pc = 0x402D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D18u;
    // 0x402d1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9590u, 0x402D18u, 0x402D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D20u;
label_402d20:
    // 0x402d20: 0xde4201f0  ld          $v0, 0x1F0($s2)
    ctx->pc = 0x402d20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 496)));
label_402d24:
    // 0x402d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402d28: 0x924601f3  lbu         $a2, 0x1F3($s2)
    ctx->pc = 0x402d28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 499)));
    // 0x402d2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x402d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x402d30: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x402d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x402d34: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x402d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x402d38: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x402d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x402d3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402d40: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402d48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x402d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x402d4c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x402d4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x402d50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x402d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x402d54: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x402d54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x402d58: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x402d58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x402d5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x402d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x402d60: 0xa3a70032  sb          $a3, 0x32($sp)
    ctx->pc = 0x402d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 7));
    // 0x402d64: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x402D64u;
    SET_GPR_U32(ctx, 31, 0x402D6Cu);
    ctx->pc = 0x402D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402D64u;
    // 0x402d68: 0xa3a20033  sb          $v0, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x402D64u, 0x402D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402D6Cu;
label_402d6c:
    // 0x402d6c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x402d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_402d70:
    // 0x402d70: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x402d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x402d74: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x402d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x402d78: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x402d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x402d7c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x402d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x402d80: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x402d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x402d84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x402d84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x402d88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x402d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x402d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x402D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402D8Cu;
        // 0x402d90: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402D94u;
    // 0x402d94: 0x0  nop
    ctx->pc = 0x402d94u;
    // NOP
    ctx->pc = 0x402d98u;
}
