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

// Function: sub_00385990
// Address: 0x385990 - 0x385b88
void sub_00385990_0x385990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385990_0x385990");
#endif

    switch (ctx->pc) {
        case 0x385a9cu: goto label_385a9c;
        case 0x385ab0u: goto label_385ab0;
        case 0x385ac8u: goto label_385ac8;
        case 0x385adcu: goto label_385adc;
        case 0x385aecu: goto label_385aec;
        case 0x385b00u: goto label_385b00;
        case 0x385b10u: goto label_385b10;
        case 0x385b24u: goto label_385b24;
        case 0x385b34u: goto label_385b34;
        case 0x385b48u: goto label_385b48;
        case 0x385b58u: goto label_385b58;
        default: break;
    }

    ctx->pc = 0x385990u;

    // 0x385990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x385990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x385994: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x385994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385998: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x385998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38599c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3859a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3859a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3859a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3859a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3859a8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3859a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3859ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3859acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3859b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3859b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3859b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3859b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3859b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3859b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3859bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3859bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3859c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3859c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3859c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3859C4u;
    {
        const bool branch_taken_0x3859c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859C4u;
        // 0x3859c8: 0x24d00008  addiu       $s0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859c4) {
            ctx->pc = 0x3859D8u;
            goto label_3859d8;
        }
    }
    ctx->pc = 0x3859CCu;
    // 0x3859cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3859ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3859d0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3859d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3859d4: 0x0  nop
    ctx->pc = 0x3859d4u;
    // NOP
label_3859d8:
    // 0x3859d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3859d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3859dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3859DCu;
    {
        const bool branch_taken_0x3859dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859DCu;
        // 0x3859e0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859dc) {
            ctx->pc = 0x3859F0u;
            goto label_3859f0;
        }
    }
    ctx->pc = 0x3859E4u;
    // 0x3859e4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3859e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3859e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3859e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3859ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3859ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3859f0:
    // 0x3859f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3859f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3859f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3859F4u;
    {
        const bool branch_taken_0x3859f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859F4u;
        // 0x3859f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859f4) {
            ctx->pc = 0x385A08u;
            goto label_385a08;
        }
    }
    ctx->pc = 0x3859FCu;
    // 0x3859fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3859fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a00: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x385a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x385a04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a08:
    // 0x385a08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x385a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x385a0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A0Cu;
    {
        const bool branch_taken_0x385a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A0Cu;
        // 0x385a10: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a0c) {
            ctx->pc = 0x385A20u;
            goto label_385a20;
        }
    }
    ctx->pc = 0x385A14u;
    // 0x385a14: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x385a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a18: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x385a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x385a1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a20:
    // 0x385a20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x385a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x385a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A24u;
    {
        const bool branch_taken_0x385a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A24u;
        // 0x385a28: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a24) {
            ctx->pc = 0x385A38u;
            goto label_385a38;
        }
    }
    ctx->pc = 0x385A2Cu;
    // 0x385a2c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x385a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a30: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x385a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x385a34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a38:
    // 0x385a38: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x385a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x385a3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A3Cu;
    {
        const bool branch_taken_0x385a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A3Cu;
        // 0x385a40: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a3c) {
            ctx->pc = 0x385A50u;
            goto label_385a50;
        }
    }
    ctx->pc = 0x385A44u;
    // 0x385a44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x385a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a48: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x385a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x385a4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a50:
    // 0x385a50: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x385a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x385a54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A54u;
    {
        const bool branch_taken_0x385a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A54u;
        // 0x385a58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a54) {
            ctx->pc = 0x385A68u;
            goto label_385a68;
        }
    }
    ctx->pc = 0x385A5Cu;
    // 0x385a5c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x385a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a60: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x385a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x385a64: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a68:
    // 0x385a68: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x385a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x385a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385A6Cu;
    {
        const bool branch_taken_0x385a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A6Cu;
        // 0x385a70: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a6c) {
            ctx->pc = 0x385A80u;
            goto label_385a80;
        }
    }
    ctx->pc = 0x385A74u;
    // 0x385a74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x385a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x385a78: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x385a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x385a7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x385a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_385a80:
    // 0x385a80: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x385a80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x385a84: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x385a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x385a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385a90: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x385a90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x385a94: 0xc103404  jal         func_40D010
    ctx->pc = 0x385A94u;
    SET_GPR_U32(ctx, 31, 0x385A9Cu);
    ctx->pc = 0x385A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385A94u;
    // 0x385a98: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x385A94u, 0x385A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385A9Cu;
label_385a9c:
    // 0x385a9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x385A9Cu;
    {
        const bool branch_taken_0x385a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A9Cu;
        // 0x385aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385a9c) {
            ctx->pc = 0x385AB8u;
            goto label_385ab8;
        }
    }
    ctx->pc = 0x385AA4u;
    // 0x385aa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385aa8: 0xc103440  jal         func_40D100
    ctx->pc = 0x385AA8u;
    SET_GPR_U32(ctx, 31, 0x385AB0u);
    ctx->pc = 0x385AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385AA8u;
    // 0x385aac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x385AA8u, 0x385AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385AB0u;
label_385ab0:
    // 0x385ab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385AB0u;
    {
        const bool branch_taken_0x385ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB0u;
        // 0x385ab4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ab0) {
            ctx->pc = 0x385AC0u;
            goto label_385ac0;
        }
    }
    ctx->pc = 0x385AB8u;
label_385ab8:
    // 0x385ab8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x385AB8u;
    {
        const bool branch_taken_0x385ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB8u;
        // 0x385abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ab8) {
            ctx->pc = 0x385B6Cu;
            goto label_385b6c;
        }
    }
    ctx->pc = 0x385AC0u;
label_385ac0:
    // 0x385ac0: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x385ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x385ac4: 0x0  nop
    ctx->pc = 0x385ac4u;
    // NOP
label_385ac8:
    // 0x385ac8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x385ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385acc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x385ACCu;
    {
        const bool branch_taken_0x385acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385acc) {
            ctx->pc = 0x385AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385ACCu;
            // 0x385ad0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385AF0u;
            goto label_385af0;
        }
    }
    ctx->pc = 0x385AD4u;
    // 0x385ad4: 0xc0e14b8  jal         func_3852E0
    ctx->pc = 0x385AD4u;
    SET_GPR_U32(ctx, 31, 0x385ADCu);
    ctx->pc = 0x385AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385AD4u;
    // 0x385ad8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852E0u, 0x385AD4u, 0x385ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385ADCu;
label_385adc:
    // 0x385adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ae4: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385AE4u;
    SET_GPR_U32(ctx, 31, 0x385AECu);
    ctx->pc = 0x385AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385AE4u;
    // 0x385ae8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385AE4u, 0x385AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385AECu;
label_385aec:
    // 0x385aec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x385aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_385af0:
    // 0x385af0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x385AF0u;
    {
        const bool branch_taken_0x385af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385af0) {
            ctx->pc = 0x385AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385AF0u;
            // 0x385af4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385B14u;
            goto label_385b14;
        }
    }
    ctx->pc = 0x385AF8u;
    // 0x385af8: 0xc0e14b8  jal         func_3852E0
    ctx->pc = 0x385AF8u;
    SET_GPR_U32(ctx, 31, 0x385B00u);
    ctx->pc = 0x385AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385AF8u;
    // 0x385afc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852E0u, 0x385AF8u, 0x385B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B00u;
label_385b00:
    // 0x385b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b08: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385B08u;
    SET_GPR_U32(ctx, 31, 0x385B10u);
    ctx->pc = 0x385B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B08u;
    // 0x385b0c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385B08u, 0x385B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B10u;
label_385b10:
    // 0x385b10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x385b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_385b14:
    // 0x385b14: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x385B14u;
    {
        const bool branch_taken_0x385b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385b14) {
            ctx->pc = 0x385B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385B14u;
            // 0x385b18: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385B38u;
            goto label_385b38;
        }
    }
    ctx->pc = 0x385B1Cu;
    // 0x385b1c: 0xc0e14b8  jal         func_3852E0
    ctx->pc = 0x385B1Cu;
    SET_GPR_U32(ctx, 31, 0x385B24u);
    ctx->pc = 0x385B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B1Cu;
    // 0x385b20: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852E0u, 0x385B1Cu, 0x385B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B24u;
label_385b24:
    // 0x385b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b2c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385B2Cu;
    SET_GPR_U32(ctx, 31, 0x385B34u);
    ctx->pc = 0x385B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B2Cu;
    // 0x385b30: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385B2Cu, 0x385B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B34u;
label_385b34:
    // 0x385b34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x385b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_385b38:
    // 0x385b38: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x385B38u;
    {
        const bool branch_taken_0x385b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385b38) {
            ctx->pc = 0x385B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385B38u;
            // 0x385b3c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385B5Cu;
            goto label_385b5c;
        }
    }
    ctx->pc = 0x385B40u;
    // 0x385b40: 0xc0e14b8  jal         func_3852E0
    ctx->pc = 0x385B40u;
    SET_GPR_U32(ctx, 31, 0x385B48u);
    ctx->pc = 0x385B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B40u;
    // 0x385b44: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3852E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3852E0u, 0x385B40u, 0x385B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B48u;
label_385b48:
    // 0x385b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b50: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x385B50u;
    SET_GPR_U32(ctx, 31, 0x385B58u);
    ctx->pc = 0x385B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B50u;
    // 0x385b54: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x385B50u, 0x385B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B58u;
label_385b58:
    // 0x385b58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x385b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_385b5c:
    // 0x385b5c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x385b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x385b60: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x385B60u;
    {
        const bool branch_taken_0x385b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B60u;
        // 0x385b64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b60) {
            ctx->pc = 0x385AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385ac8;
        }
    }
    ctx->pc = 0x385B68u;
    // 0x385b68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x385b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_385b6c:
    // 0x385b6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x385b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385b70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x385b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385b74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x385b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385b78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x385b78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385b80: 0x3e00008  jr          $ra
    ctx->pc = 0x385B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B80u;
        // 0x385b84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385B88u;
}
