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

// Function: sub_00498A88
// Address: 0x498a88 - 0x498ba0
void sub_00498A88_0x498a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498A88_0x498a88");
#endif

    switch (ctx->pc) {
        case 0x498ab0u: goto label_498ab0;
        case 0x498adcu: goto label_498adc;
        case 0x498b4cu: goto label_498b4c;
        case 0x498b84u: goto label_498b84;
        default: break;
    }

    ctx->pc = 0x498a88u;

    // 0x498a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x498a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x498a8c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x498a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x498a90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x498a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x498a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x498a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x498a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x498a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498aa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498aa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x498aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498aa8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x498AA8u;
    SET_GPR_U32(ctx, 31, 0x498AB0u);
    ctx->pc = 0x498AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498AA8u;
    // 0x498aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x498AA8u, 0x498AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498AB0u;
label_498ab0:
    // 0x498ab0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x498ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x498ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x498AB4u;
    {
        const bool branch_taken_0x498ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498AB4u;
        // 0x498ab8: 0x3b1880a  movz        $s1, $sp, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ab4) {
            ctx->pc = 0x498AC8u;
            goto label_498ac8;
        }
    }
    ctx->pc = 0x498ABCu;
    // 0x498abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498ac0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x498AC0u;
    {
        const bool branch_taken_0x498ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498AC0u;
        // 0x498ac4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ac0) {
            ctx->pc = 0x498B88u;
            goto label_498b88;
        }
    }
    ctx->pc = 0x498AC8u;
label_498ac8:
    // 0x498ac8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x498ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x498acc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x498ACCu;
    {
        const bool branch_taken_0x498acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x498acc) {
            ctx->pc = 0x498AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498ACCu;
            // 0x498ad0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498AF4u;
            goto label_498af4;
        }
    }
    ctx->pc = 0x498AD4u;
    // 0x498ad4: 0xc1275a0  jal         func_49D680
    ctx->pc = 0x498AD4u;
    SET_GPR_U32(ctx, 31, 0x498ADCu);
    ctx->pc = 0x49D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D680u, 0x498AD4u, 0x498ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498ADCu;
label_498adc:
    // 0x498adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x498adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498ae0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x498AE0u;
    {
        const bool branch_taken_0x498ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x498ae0) {
            ctx->pc = 0x498AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498AE0u;
            // 0x498ae4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498AF4u;
            goto label_498af4;
        }
    }
    ctx->pc = 0x498AE8u;
    // 0x498ae8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x498aec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x498aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x498af0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x498af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498af4:
    // 0x498af4: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x498af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x498af8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x498AF8u;
    {
        const bool branch_taken_0x498af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x498AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498AF8u;
        // 0x498afc: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498af8) {
            ctx->pc = 0x498B18u;
            goto label_498b18;
        }
    }
    ctx->pc = 0x498B00u;
    // 0x498b00: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x498b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498b04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498b08: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x498b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x498b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x498b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x498B10u;
    {
        const bool branch_taken_0x498b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B10u;
        // 0x498b14: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b10) {
            ctx->pc = 0x498B1Cu;
            goto label_498b1c;
        }
    }
    ctx->pc = 0x498B18u;
label_498b18:
    // 0x498b18: 0x24c30028  addiu       $v1, $a2, 0x28
    ctx->pc = 0x498b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
label_498b1c:
    // 0x498b1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498b20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x498b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x498b24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x498B24u;
    {
        const bool branch_taken_0x498b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B24u;
        // 0x498b28: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498b24) {
            ctx->pc = 0x498B4Cu;
            goto label_498b4c;
        }
    }
    ctx->pc = 0x498B2Cu;
    // 0x498b2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x498b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x498b30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x498b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x498b34: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x498B34u;
    {
        const bool branch_taken_0x498b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498b34) {
            ctx->pc = 0x498B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498B34u;
            // 0x498b38: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498B50u;
            goto label_498b50;
        }
    }
    ctx->pc = 0x498B3Cu;
    // 0x498b3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x498b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x498b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498b44: 0xc12702a  jal         func_49C0A8
    ctx->pc = 0x498B44u;
    SET_GPR_U32(ctx, 31, 0x498B4Cu);
    ctx->pc = 0x498B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498B44u;
    // 0x498b48: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C0A8u, 0x498B44u, 0x498B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498B4Cu;
label_498b4c:
    // 0x498b4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x498b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_498b50:
    // 0x498b50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x498b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x498b54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x498b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x498b58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x498b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x498b5c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x498b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x498b60: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x498b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x498b64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x498b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x498b68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x498b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x498b6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x498B6Cu;
    {
        const bool branch_taken_0x498b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x498b6c) {
            ctx->pc = 0x498B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498B6Cu;
            // 0x498b70: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498B88u;
            goto label_498b88;
        }
    }
    ctx->pc = 0x498B74u;
    // 0x498b74: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x498b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x498b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x498b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b7c: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x498B7Cu;
    SET_GPR_U32(ctx, 31, 0x498B84u);
    ctx->pc = 0x498B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498B7Cu;
    // 0x498b80: 0x248481b8  addiu       $a0, $a0, -0x7E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x498B7Cu, 0x498B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498B84u;
label_498b84:
    // 0x498b84: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x498b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_498b88:
    // 0x498b88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x498b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498b8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x498b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498b94: 0x3e00008  jr          $ra
    ctx->pc = 0x498B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498B94u;
        // 0x498b98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498B9Cu;
    // 0x498b9c: 0x0  nop
    ctx->pc = 0x498b9cu;
    // NOP
    ctx->pc = 0x498ba0u;
}
