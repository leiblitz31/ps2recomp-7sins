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

// Function: sub_003B4A50
// Address: 0x3b4a50 - 0x3b4b40
void sub_003B4A50_0x3b4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4A50_0x3b4a50");
#endif

    switch (ctx->pc) {
        case 0x3b4a50u: goto label_3b4a50;
        case 0x3b4a54u: goto label_3b4a54;
        case 0x3b4a58u: goto label_3b4a58;
        case 0x3b4a5cu: goto label_3b4a5c;
        case 0x3b4a60u: goto label_3b4a60;
        case 0x3b4a64u: goto label_3b4a64;
        case 0x3b4a68u: goto label_3b4a68;
        case 0x3b4a6cu: goto label_3b4a6c;
        case 0x3b4a70u: goto label_3b4a70;
        case 0x3b4a74u: goto label_3b4a74;
        case 0x3b4a78u: goto label_3b4a78;
        case 0x3b4a7cu: goto label_3b4a7c;
        case 0x3b4a80u: goto label_3b4a80;
        case 0x3b4a84u: goto label_3b4a84;
        case 0x3b4a88u: goto label_3b4a88;
        case 0x3b4a8cu: goto label_3b4a8c;
        case 0x3b4a90u: goto label_3b4a90;
        case 0x3b4a94u: goto label_3b4a94;
        case 0x3b4a98u: goto label_3b4a98;
        case 0x3b4a9cu: goto label_3b4a9c;
        case 0x3b4aa0u: goto label_3b4aa0;
        case 0x3b4aa4u: goto label_3b4aa4;
        case 0x3b4aa8u: goto label_3b4aa8;
        case 0x3b4aacu: goto label_3b4aac;
        case 0x3b4ab0u: goto label_3b4ab0;
        case 0x3b4ab4u: goto label_3b4ab4;
        case 0x3b4ab8u: goto label_3b4ab8;
        case 0x3b4abcu: goto label_3b4abc;
        case 0x3b4ac0u: goto label_3b4ac0;
        case 0x3b4ac4u: goto label_3b4ac4;
        case 0x3b4ac8u: goto label_3b4ac8;
        case 0x3b4accu: goto label_3b4acc;
        case 0x3b4ad0u: goto label_3b4ad0;
        case 0x3b4ad4u: goto label_3b4ad4;
        case 0x3b4ad8u: goto label_3b4ad8;
        case 0x3b4adcu: goto label_3b4adc;
        case 0x3b4ae0u: goto label_3b4ae0;
        case 0x3b4ae4u: goto label_3b4ae4;
        case 0x3b4ae8u: goto label_3b4ae8;
        case 0x3b4aecu: goto label_3b4aec;
        case 0x3b4af0u: goto label_3b4af0;
        case 0x3b4af4u: goto label_3b4af4;
        case 0x3b4af8u: goto label_3b4af8;
        case 0x3b4afcu: goto label_3b4afc;
        case 0x3b4b00u: goto label_3b4b00;
        case 0x3b4b04u: goto label_3b4b04;
        case 0x3b4b08u: goto label_3b4b08;
        case 0x3b4b0cu: goto label_3b4b0c;
        case 0x3b4b10u: goto label_3b4b10;
        case 0x3b4b14u: goto label_3b4b14;
        case 0x3b4b18u: goto label_3b4b18;
        case 0x3b4b1cu: goto label_3b4b1c;
        case 0x3b4b20u: goto label_3b4b20;
        case 0x3b4b24u: goto label_3b4b24;
        case 0x3b4b28u: goto label_3b4b28;
        case 0x3b4b2cu: goto label_3b4b2c;
        case 0x3b4b30u: goto label_3b4b30;
        case 0x3b4b34u: goto label_3b4b34;
        case 0x3b4b38u: goto label_3b4b38;
        case 0x3b4b3cu: goto label_3b4b3c;
        default: break;
    }

    ctx->pc = 0x3b4a50u;

label_3b4a50:
    // 0x3b4a50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b4a54:
    // 0x3b4a54: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b4a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b4a58:
    // 0x3b4a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b4a5c:
    // 0x3b4a5c: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x3b4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_3b4a60:
    // 0x3b4a60: 0x8cc4d3ac  lw          $a0, -0x2C54($a2)
    ctx->pc = 0x3b4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955948)));
label_3b4a64:
    // 0x3b4a64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b4a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b4a68:
    // 0x3b4a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b4a6c:
    // 0x3b4a6c: 0x40f809  jalr        $v0
label_3b4a70:
    if (ctx->pc == 0x3B4A70u) {
        ctx->pc = 0x3B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A6Cu;
        // 0x3b4a70: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A74u;
        goto label_3b4a74;
    }
    ctx->pc = 0x3B4A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4A74u);
        ctx->pc = 0x3B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A6Cu;
        // 0x3b4a70: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4A6Cu, 0x3B4A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4A74u;
label_3b4a74:
    // 0x3b4a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4a78:
    // 0x3b4a78: 0x3e00008  jr          $ra
label_3b4a7c:
    if (ctx->pc == 0x3B4A7Cu) {
        ctx->pc = 0x3B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A78u;
        // 0x3b4a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A80u;
        goto label_3b4a80;
    }
    ctx->pc = 0x3B4A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A78u;
        // 0x3b4a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4A80u;
label_3b4a80:
    // 0x3b4a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b4a84:
    // 0x3b4a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b4a88:
    // 0x3b4a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b4a8c:
    // 0x3b4a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b4a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4a90:
    // 0x3b4a90: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x3b4a90u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b4a94:
    // 0x3b4a94: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_3b4a98:
    if (ctx->pc == 0x3B4A98u) {
        ctx->pc = 0x3B4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A94u;
        // 0x3b4a98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4A9Cu;
        goto label_3b4a9c;
    }
    ctx->pc = 0x3B4A94u;
    {
        const bool branch_taken_0x3b4a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A94u;
        // 0x3b4a98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4a94) {
            ctx->pc = 0x3B4B24u;
            goto label_3b4b24;
        }
    }
    ctx->pc = 0x3B4A9Cu;
label_3b4a9c:
    // 0x3b4a9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b4aa0:
    // 0x3b4aa0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b4aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3b4aa4:
    // 0x3b4aa4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3b4aa8:
    if (ctx->pc == 0x3B4AA8u) {
        ctx->pc = 0x3B4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AA4u;
        // 0x3b4aa8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AACu;
        goto label_3b4aac;
    }
    ctx->pc = 0x3B4AA4u;
    {
        const bool branch_taken_0x3b4aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AA4u;
        // 0x3b4aa8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4aa4) {
            ctx->pc = 0x3B4B04u;
            goto label_3b4b04;
        }
    }
    ctx->pc = 0x3B4AACu;
label_3b4aac:
    // 0x3b4aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b4ab0:
    // 0x3b4ab0: 0x2442c0b0  addiu       $v0, $v0, -0x3F50
    ctx->pc = 0x3b4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951088));
label_3b4ab4:
    // 0x3b4ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b4ab8:
    // 0x3b4ab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b4abc:
    // 0x3b4abc: 0x800008  jr          $a0
label_3b4ac0:
    if (ctx->pc == 0x3B4AC0u) {
        ctx->pc = 0x3B4AC4u;
        goto label_3b4ac4;
    }
    ctx->pc = 0x3B4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4AC4u: goto label_3b4ac4;
            case 0x3B4AD4u: goto label_3b4ad4;
            case 0x3B4AE4u: goto label_3b4ae4;
            case 0x3B4AF4u: goto label_3b4af4;
            case 0x3B4B04u: goto label_3b4b04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4ABCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4AC4u;
label_3b4ac4:
    // 0x3b4ac4: 0xc0ede8c  jal         func_3B7A30
label_3b4ac8:
    if (ctx->pc == 0x3B4AC8u) {
        ctx->pc = 0x3B4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AC4u;
        // 0x3b4ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4ACCu;
        goto label_3b4acc;
    }
    ctx->pc = 0x3B4AC4u;
    SET_GPR_U32(ctx, 31, 0x3B4ACCu);
    ctx->pc = 0x3B4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AC4u;
    // 0x3b4ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7A30u, 0x3B4AC4u, 0x3B4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4ACCu;
label_3b4acc:
    // 0x3b4acc: 0x1000000e  b           . + 4 + (0xE << 2)
label_3b4ad0:
    if (ctx->pc == 0x3B4AD0u) {
        ctx->pc = 0x3B4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ACCu;
        // 0x3b4ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AD4u;
        goto label_3b4ad4;
    }
    ctx->pc = 0x3B4ACCu;
    {
        const bool branch_taken_0x3b4acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ACCu;
        // 0x3b4ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4acc) {
            ctx->pc = 0x3B4B08u;
            goto label_3b4b08;
        }
    }
    ctx->pc = 0x3B4AD4u;
label_3b4ad4:
    // 0x3b4ad4: 0xc0ee78c  jal         func_3B9E30
label_3b4ad8:
    if (ctx->pc == 0x3B4AD8u) {
        ctx->pc = 0x3B4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AD4u;
        // 0x3b4ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4ADCu;
        goto label_3b4adc;
    }
    ctx->pc = 0x3B4AD4u;
    SET_GPR_U32(ctx, 31, 0x3B4ADCu);
    ctx->pc = 0x3B4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AD4u;
    // 0x3b4ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E30u, 0x3B4AD4u, 0x3B4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4ADCu;
label_3b4adc:
    // 0x3b4adc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b4ae0:
    if (ctx->pc == 0x3B4AE0u) {
        ctx->pc = 0x3B4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ADCu;
        // 0x3b4ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AE4u;
        goto label_3b4ae4;
    }
    ctx->pc = 0x3B4ADCu;
    {
        const bool branch_taken_0x3b4adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ADCu;
        // 0x3b4ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4adc) {
            ctx->pc = 0x3B4B08u;
            goto label_3b4b08;
        }
    }
    ctx->pc = 0x3B4AE4u;
label_3b4ae4:
    // 0x3b4ae4: 0xc0ed4d0  jal         func_3B5340
label_3b4ae8:
    if (ctx->pc == 0x3B4AE8u) {
        ctx->pc = 0x3B4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AE4u;
        // 0x3b4ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AECu;
        goto label_3b4aec;
    }
    ctx->pc = 0x3B4AE4u;
    SET_GPR_U32(ctx, 31, 0x3B4AECu);
    ctx->pc = 0x3B4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AE4u;
    // 0x3b4ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5340u, 0x3B4AE4u, 0x3B4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AECu;
label_3b4aec:
    // 0x3b4aec: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b4af0:
    if (ctx->pc == 0x3B4AF0u) {
        ctx->pc = 0x3B4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AECu;
        // 0x3b4af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AF4u;
        goto label_3b4af4;
    }
    ctx->pc = 0x3B4AECu;
    {
        const bool branch_taken_0x3b4aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AECu;
        // 0x3b4af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4aec) {
            ctx->pc = 0x3B4B08u;
            goto label_3b4b08;
        }
    }
    ctx->pc = 0x3B4AF4u;
label_3b4af4:
    // 0x3b4af4: 0xc0ed0a6  jal         func_3B4298
label_3b4af8:
    if (ctx->pc == 0x3B4AF8u) {
        ctx->pc = 0x3B4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AF4u;
        // 0x3b4af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4AFCu;
        goto label_3b4afc;
    }
    ctx->pc = 0x3B4AF4u;
    SET_GPR_U32(ctx, 31, 0x3B4AFCu);
    ctx->pc = 0x3B4AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AF4u;
    // 0x3b4af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4298u, 0x3B4AF4u, 0x3B4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AFCu;
label_3b4afc:
    // 0x3b4afc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b4b00:
    if (ctx->pc == 0x3B4B00u) {
        ctx->pc = 0x3B4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AFCu;
        // 0x3b4b00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B04u;
        goto label_3b4b04;
    }
    ctx->pc = 0x3B4AFCu;
    {
        const bool branch_taken_0x3b4afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AFCu;
        // 0x3b4b00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4afc) {
            ctx->pc = 0x3B4B08u;
            goto label_3b4b08;
        }
    }
    ctx->pc = 0x3B4B04u;
label_3b4b04:
    // 0x3b4b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b4b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b08:
    // 0x3b4b08: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3b4b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3b4b0c:
    // 0x3b4b0c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b4b10:
    // 0x3b4b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b14:
    // 0x3b4b14: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x3b4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_3b4b18:
    // 0x3b4b18: 0x8ca4d3ac  lw          $a0, -0x2C54($a1)
    ctx->pc = 0x3b4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955948)));
label_3b4b1c:
    // 0x3b4b1c: 0x40f809  jalr        $v0
label_3b4b20:
    if (ctx->pc == 0x3B4B20u) {
        ctx->pc = 0x3B4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B1Cu;
        // 0x3b4b20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B24u;
        goto label_3b4b24;
    }
    ctx->pc = 0x3B4B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4B24u);
        ctx->pc = 0x3B4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B1Cu;
        // 0x3b4b20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4B1Cu, 0x3B4B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4B24u;
label_3b4b24:
    // 0x3b4b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4b28:
    // 0x3b4b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4b2c:
    // 0x3b4b2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b4b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4b30:
    // 0x3b4b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4b34:
    // 0x3b4b34: 0x3e00008  jr          $ra
label_3b4b38:
    if (ctx->pc == 0x3B4B38u) {
        ctx->pc = 0x3B4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B34u;
        // 0x3b4b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4B3Cu;
        goto label_3b4b3c;
    }
    ctx->pc = 0x3B4B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B34u;
        // 0x3b4b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4B3Cu;
label_3b4b3c:
    // 0x3b4b3c: 0x0  nop
    ctx->pc = 0x3b4b3cu;
    // NOP
    ctx->pc = 0x3b4b40u;
}
