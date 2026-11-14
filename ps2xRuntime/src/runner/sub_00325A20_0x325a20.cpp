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

// Function: sub_00325A20
// Address: 0x325a20 - 0x325c88
void sub_00325A20_0x325a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325A20_0x325a20");
#endif

    switch (ctx->pc) {
        case 0x325a60u: goto label_325a60;
        case 0x325a9cu: goto label_325a9c;
        case 0x325ab4u: goto label_325ab4;
        case 0x325b14u: goto label_325b14;
        case 0x325b48u: goto label_325b48;
        case 0x325b50u: goto label_325b50;
        case 0x325bd0u: goto label_325bd0;
        case 0x325be8u: goto label_325be8;
        case 0x325c04u: goto label_325c04;
        case 0x325c24u: goto label_325c24;
        default: break;
    }

    ctx->pc = 0x325a20u;

    // 0x325a20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x325a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x325a24: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x325a28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x325a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x325a2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x325a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325a30: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x325a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x325a34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x325a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x325a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x325a3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x325a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a40: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x325a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x325a44: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x325a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x325a48: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x325a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x325a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x325a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x325a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x325a54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x325a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325a58: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x325a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x325a5c: 0x0  nop
    ctx->pc = 0x325a5cu;
    // NOP
label_325a60:
    // 0x325a60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x325a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x325a64: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x325a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x325a68: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x325A68u;
    {
        const bool branch_taken_0x325a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x325A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A68u;
        // 0x325a6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a68) {
            ctx->pc = 0x325A88u;
            goto label_325a88;
        }
    }
    ctx->pc = 0x325A70u;
    // 0x325a70: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x325a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x325a74: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x325a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325a78: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x325a78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x325a7c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x325A7Cu;
    {
        const bool branch_taken_0x325a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A7Cu;
        // 0x325a80: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a7c) {
            ctx->pc = 0x325A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325a60;
        }
    }
    ctx->pc = 0x325A84u;
    // 0x325a84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x325a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325a88:
    // 0x325a88: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x325a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x325a8c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x325A8Cu;
    {
        const bool branch_taken_0x325a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325a8c) {
            ctx->pc = 0x325A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325A8Cu;
            // 0x325a90: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325AA4u;
            goto label_325aa4;
        }
    }
    ctx->pc = 0x325A94u;
    // 0x325a94: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x325A94u;
    SET_GPR_U32(ctx, 31, 0x325A9Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x325A94u, 0x325A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A9Cu;
label_325a9c:
    // 0x325a9c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x325a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x325aa0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x325aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_325aa4:
    // 0x325aa4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325AA4u;
    {
        const bool branch_taken_0x325aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325aa4) {
            ctx->pc = 0x325ABCu;
            goto label_325abc;
        }
    }
    ctx->pc = 0x325AACu;
    // 0x325aac: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x325AACu;
    SET_GPR_U32(ctx, 31, 0x325AB4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x325AACu, 0x325AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AB4u;
label_325ab4:
    // 0x325ab4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x325ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x325ab8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x325ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_325abc:
    // 0x325abc: 0x5220005e  beql        $s1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x325ABCu;
    {
        const bool branch_taken_0x325abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x325abc) {
            ctx->pc = 0x325AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325ABCu;
            // 0x325ac0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325C38u;
            goto label_325c38;
        }
    }
    ctx->pc = 0x325AC4u;
    // 0x325ac4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x325ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x325ac8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x325accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x325ad0: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x325ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x325ad4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x325ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x325ad8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x325ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x325adc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x325adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x325ae0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x325AE0u;
    {
        const bool branch_taken_0x325ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AE0u;
        // 0x325ae4: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ae0) {
            ctx->pc = 0x325C54u;
            goto label_325c54;
        }
    }
    ctx->pc = 0x325AE8u;
    // 0x325ae8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x325AE8u;
    {
        const bool branch_taken_0x325ae8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x325ae8) {
            ctx->pc = 0x325AFCu;
            goto label_325afc;
        }
    }
    ctx->pc = 0x325AF0u;
    // 0x325af0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x325af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x325af4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x325af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x325af8: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x325af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_325afc:
    // 0x325afc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x325AFCu;
    {
        const bool branch_taken_0x325afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AFCu;
        // 0x325b00: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325afc) {
            ctx->pc = 0x325C58u;
            goto label_325c58;
        }
    }
    ctx->pc = 0x325B04u;
    // 0x325b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x325b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b0c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x325B0Cu;
    SET_GPR_U32(ctx, 31, 0x325B14u);
    ctx->pc = 0x325B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B0Cu;
    // 0x325b10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x325B0Cu, 0x325B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B14u;
label_325b14:
    // 0x325b14: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x325b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x325b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x325b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b1c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x325B1Cu;
    {
        const bool branch_taken_0x325b1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B1Cu;
        // 0x325b20: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b1c) {
            ctx->pc = 0x325B38u;
            goto label_325b38;
        }
    }
    ctx->pc = 0x325B24u;
    // 0x325b24: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x325b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x325b28: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x325b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x325b2c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x325b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x325b30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x325B30u;
    {
        const bool branch_taken_0x325b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B30u;
        // 0x325b34: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b30) {
            ctx->pc = 0x325BA0u;
            goto label_325ba0;
        }
    }
    ctx->pc = 0x325B38u;
label_325b38:
    // 0x325b38: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x325b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x325b3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x325b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x325b40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x325B40u;
    {
        const bool branch_taken_0x325b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B40u;
        // 0x325b44: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b40) {
            ctx->pc = 0x325BA0u;
            goto label_325ba0;
        }
    }
    ctx->pc = 0x325B48u;
label_325b48:
    // 0x325b48: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x325b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b4c: 0x0  nop
    ctx->pc = 0x325b4cu;
    // NOP
label_325b50:
    // 0x325b50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x325b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x325b54: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x325b54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325b58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x325B58u;
    {
        const bool branch_taken_0x325b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B58u;
        // 0x325b5c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b58) {
            ctx->pc = 0x325B7Cu;
            goto label_325b7c;
        }
    }
    ctx->pc = 0x325B60u;
    // 0x325b60: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x325b60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x325b64: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x325b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x325b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x325b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x325b74: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x325b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x325b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_325b7c:
    // 0x325b7c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x325b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x325b80: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x325b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325B84u;
    {
        const bool branch_taken_0x325b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B84u;
        // 0x325b88: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b84) {
            ctx->pc = 0x325BA0u;
            goto label_325ba0;
        }
    }
    ctx->pc = 0x325B8Cu;
    // 0x325b8c: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x325b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x325b90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x325b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325b94: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x325b94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x325b98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x325b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x325b9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x325b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_325ba0:
    // 0x325ba0: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x325ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x325ba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x325BA4u;
    {
        const bool branch_taken_0x325ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BA4u;
        // 0x325ba8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ba4) {
            ctx->pc = 0x325BC8u;
            goto label_325bc8;
        }
    }
    ctx->pc = 0x325BACu;
    // 0x325bac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x325bacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325bb0: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x325BB0u;
    {
        const bool branch_taken_0x325bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BB0u;
        // 0x325bb4: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bb0) {
            ctx->pc = 0x325B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325b48;
        }
    }
    ctx->pc = 0x325BB8u;
    // 0x325bb8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x325bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x325bbc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x325bbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325bc0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x325BC0u;
    {
        const bool branch_taken_0x325bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BC0u;
        // 0x325bc4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bc0) {
            ctx->pc = 0x325B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325b50;
        }
    }
    ctx->pc = 0x325BC8u;
label_325bc8:
    // 0x325bc8: 0xc1082ca  jal         func_420B28
    ctx->pc = 0x325BC8u;
    SET_GPR_U32(ctx, 31, 0x325BD0u);
    ctx->pc = 0x325BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BC8u;
    // 0x325bcc: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420B28u, 0x325BC8u, 0x325BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BD0u;
label_325bd0:
    // 0x325bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bd4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325BD4u;
    {
        const bool branch_taken_0x325bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BD4u;
        // 0x325bd8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325bd4) {
            ctx->pc = 0x325BECu;
            goto label_325bec;
        }
    }
    ctx->pc = 0x325BDCu;
    // 0x325bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325be0: 0xc10828e  jal         func_420A38
    ctx->pc = 0x325BE0u;
    SET_GPR_U32(ctx, 31, 0x325BE8u);
    ctx->pc = 0x325BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BE0u;
    // 0x325be4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A38u, 0x325BE0u, 0x325BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BE8u;
label_325be8:
    // 0x325be8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x325be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_325bec:
    // 0x325bec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x325becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x325bf0: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x325BF0u;
    {
        const bool branch_taken_0x325bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325bf0) {
            ctx->pc = 0x325BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325BF0u;
            // 0x325bf4: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325C2Cu;
            goto label_325c2c;
        }
    }
    ctx->pc = 0x325BF8u;
    // 0x325bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x325bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bfc: 0xc0c9bf4  jal         func_326FD0
    ctx->pc = 0x325BFCu;
    SET_GPR_U32(ctx, 31, 0x325C04u);
    ctx->pc = 0x325C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BFCu;
    // 0x325c00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FD0u, 0x325BFCu, 0x325C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C04u;
label_325c04:
    // 0x325c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325C04u;
    {
        const bool branch_taken_0x325c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C04u;
        // 0x325c08: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c04) {
            ctx->pc = 0x325C14u;
            goto label_325c14;
        }
    }
    ctx->pc = 0x325C0Cu;
    // 0x325c0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x325C0Cu;
    {
        const bool branch_taken_0x325c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C0Cu;
        // 0x325c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c0c) {
            ctx->pc = 0x325C58u;
            goto label_325c58;
        }
    }
    ctx->pc = 0x325C14u;
label_325c14:
    // 0x325c14: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x325C14u;
    {
        const bool branch_taken_0x325c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C14u;
        // 0x325c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c14) {
            ctx->pc = 0x325C34u;
            goto label_325c34;
        }
    }
    ctx->pc = 0x325C1Cu;
    // 0x325c1c: 0xc10826c  jal         func_4209B0
    ctx->pc = 0x325C1Cu;
    SET_GPR_U32(ctx, 31, 0x325C24u);
    ctx->pc = 0x325C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C1Cu;
    // 0x325c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4209B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4209B0u, 0x325C1Cu, 0x325C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C24u;
label_325c24:
    // 0x325c24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x325C24u;
    {
        const bool branch_taken_0x325c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C24u;
        // 0x325c28: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c24) {
            ctx->pc = 0x325C38u;
            goto label_325c38;
        }
    }
    ctx->pc = 0x325C2Cu;
label_325c2c:
    // 0x325c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x325c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x325c30: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x325c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_325c34:
    // 0x325c34: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x325c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_325c38:
    // 0x325c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x325c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x325c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x325c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x325c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325c44: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x325c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x325c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x325c4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x325c4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x325c50: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x325c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_325c54:
    // 0x325c54: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x325c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_325c58:
    // 0x325c58: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x325c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x325c5c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x325c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325c60: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x325c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325c64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x325c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325c68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x325c68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x325c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325c70: 0x3e00008  jr          $ra
    ctx->pc = 0x325C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C70u;
        // 0x325c74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325C78u;
    // 0x325c78: 0xaf84a640  sw          $a0, -0x59C0($gp)
    ctx->pc = 0x325c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944320), GPR_U32(ctx, 4));
    // 0x325c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x325C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C7Cu;
        // 0x325c80: 0xaf85a644  sw          $a1, -0x59BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325C84u;
    // 0x325c84: 0x0  nop
    ctx->pc = 0x325c84u;
    // NOP
    ctx->pc = 0x325c88u;
}
