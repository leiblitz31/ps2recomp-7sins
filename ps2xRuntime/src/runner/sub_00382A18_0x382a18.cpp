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

// Function: sub_00382A18
// Address: 0x382a18 - 0x382b88
void sub_00382A18_0x382a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382A18_0x382a18");
#endif

    switch (ctx->pc) {
        case 0x382a18u: goto label_382a18;
        case 0x382a1cu: goto label_382a1c;
        case 0x382a20u: goto label_382a20;
        case 0x382a24u: goto label_382a24;
        case 0x382a28u: goto label_382a28;
        case 0x382a2cu: goto label_382a2c;
        case 0x382a30u: goto label_382a30;
        case 0x382a34u: goto label_382a34;
        case 0x382a38u: goto label_382a38;
        case 0x382a3cu: goto label_382a3c;
        case 0x382a40u: goto label_382a40;
        case 0x382a44u: goto label_382a44;
        case 0x382a48u: goto label_382a48;
        case 0x382a4cu: goto label_382a4c;
        case 0x382a50u: goto label_382a50;
        case 0x382a54u: goto label_382a54;
        case 0x382a58u: goto label_382a58;
        case 0x382a5cu: goto label_382a5c;
        case 0x382a60u: goto label_382a60;
        case 0x382a64u: goto label_382a64;
        case 0x382a68u: goto label_382a68;
        case 0x382a6cu: goto label_382a6c;
        case 0x382a70u: goto label_382a70;
        case 0x382a74u: goto label_382a74;
        case 0x382a78u: goto label_382a78;
        case 0x382a7cu: goto label_382a7c;
        case 0x382a80u: goto label_382a80;
        case 0x382a84u: goto label_382a84;
        case 0x382a88u: goto label_382a88;
        case 0x382a8cu: goto label_382a8c;
        case 0x382a90u: goto label_382a90;
        case 0x382a94u: goto label_382a94;
        case 0x382a98u: goto label_382a98;
        case 0x382a9cu: goto label_382a9c;
        case 0x382aa0u: goto label_382aa0;
        case 0x382aa4u: goto label_382aa4;
        case 0x382aa8u: goto label_382aa8;
        case 0x382aacu: goto label_382aac;
        case 0x382ab0u: goto label_382ab0;
        case 0x382ab4u: goto label_382ab4;
        case 0x382ab8u: goto label_382ab8;
        case 0x382abcu: goto label_382abc;
        case 0x382ac0u: goto label_382ac0;
        case 0x382ac4u: goto label_382ac4;
        case 0x382ac8u: goto label_382ac8;
        case 0x382accu: goto label_382acc;
        case 0x382ad0u: goto label_382ad0;
        case 0x382ad4u: goto label_382ad4;
        case 0x382ad8u: goto label_382ad8;
        case 0x382adcu: goto label_382adc;
        case 0x382ae0u: goto label_382ae0;
        case 0x382ae4u: goto label_382ae4;
        case 0x382ae8u: goto label_382ae8;
        case 0x382aecu: goto label_382aec;
        case 0x382af0u: goto label_382af0;
        case 0x382af4u: goto label_382af4;
        case 0x382af8u: goto label_382af8;
        case 0x382afcu: goto label_382afc;
        case 0x382b00u: goto label_382b00;
        case 0x382b04u: goto label_382b04;
        case 0x382b08u: goto label_382b08;
        case 0x382b0cu: goto label_382b0c;
        case 0x382b10u: goto label_382b10;
        case 0x382b14u: goto label_382b14;
        case 0x382b18u: goto label_382b18;
        case 0x382b1cu: goto label_382b1c;
        case 0x382b20u: goto label_382b20;
        case 0x382b24u: goto label_382b24;
        case 0x382b28u: goto label_382b28;
        case 0x382b2cu: goto label_382b2c;
        case 0x382b30u: goto label_382b30;
        case 0x382b34u: goto label_382b34;
        case 0x382b38u: goto label_382b38;
        case 0x382b3cu: goto label_382b3c;
        case 0x382b40u: goto label_382b40;
        case 0x382b44u: goto label_382b44;
        case 0x382b48u: goto label_382b48;
        case 0x382b4cu: goto label_382b4c;
        case 0x382b50u: goto label_382b50;
        case 0x382b54u: goto label_382b54;
        case 0x382b58u: goto label_382b58;
        case 0x382b5cu: goto label_382b5c;
        case 0x382b60u: goto label_382b60;
        case 0x382b64u: goto label_382b64;
        case 0x382b68u: goto label_382b68;
        case 0x382b6cu: goto label_382b6c;
        case 0x382b70u: goto label_382b70;
        case 0x382b74u: goto label_382b74;
        case 0x382b78u: goto label_382b78;
        case 0x382b7cu: goto label_382b7c;
        case 0x382b80u: goto label_382b80;
        case 0x382b84u: goto label_382b84;
        default: break;
    }

    ctx->pc = 0x382a18u;

label_382a18:
    // 0x382a18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_382a1c:
    // 0x382a1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x382a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_382a20:
    // 0x382a20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x382a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_382a24:
    // 0x382a24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x382a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_382a28:
    // 0x382a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_382a2c:
    // 0x382a2c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x382a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_382a30:
    // 0x382a30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x382a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_382a34:
    // 0x382a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x382a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382a38:
    // 0x382a38: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x382a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_382a3c:
    // 0x382a3c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x382a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_382a40:
    // 0x382a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382a44:
    // 0x382a44: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x382a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_382a48:
    // 0x382a48: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x382a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_382a4c:
    // 0x382a4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x382a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_382a50:
    // 0x382a50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_382a54:
    if (ctx->pc == 0x382A54u) {
        ctx->pc = 0x382A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A50u;
        // 0x382a54: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382A58u;
        goto label_382a58;
    }
    ctx->pc = 0x382A50u;
    {
        const bool branch_taken_0x382a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A50u;
        // 0x382a54: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a50) {
            ctx->pc = 0x382A68u;
            goto label_382a68;
        }
    }
    ctx->pc = 0x382A58u;
label_382a58:
    // 0x382a58: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x382a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_382a5c:
    // 0x382a5c: 0x40f809  jalr        $v0
label_382a60:
    if (ctx->pc == 0x382A60u) {
        ctx->pc = 0x382A64u;
        goto label_382a64;
    }
    ctx->pc = 0x382A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382A64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382A5Cu, 0x382A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382A64u;
label_382a64:
    // 0x382a64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x382a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_382a68:
    // 0x382a68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x382a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_382a6c:
    // 0x382a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x382a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_382a70:
    // 0x382a70: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_382a74:
    if (ctx->pc == 0x382A74u) {
        ctx->pc = 0x382A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A70u;
        // 0x382a74: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382A78u;
        goto label_382a78;
    }
    ctx->pc = 0x382A70u;
    {
        const bool branch_taken_0x382a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x382A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A70u;
        // 0x382a74: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a70) {
            ctx->pc = 0x382AC4u;
            goto label_382ac4;
        }
    }
    ctx->pc = 0x382A78u;
label_382a78:
    // 0x382a78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382a7c:
    // 0x382a7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x382a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382a80:
    // 0x382a80: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_382a84:
    if (ctx->pc == 0x382A84u) {
        ctx->pc = 0x382A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A80u;
        // 0x382a84: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382A88u;
        goto label_382a88;
    }
    ctx->pc = 0x382A80u;
    {
        const bool branch_taken_0x382a80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A80u;
        // 0x382a84: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a80) {
            ctx->pc = 0x382AC4u;
            goto label_382ac4;
        }
    }
    ctx->pc = 0x382A88u;
label_382a88:
    // 0x382a88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x382a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_382a8c:
    // 0x382a8c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x382a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_382a90:
    // 0x382a90: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x382a90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_382a94:
    // 0x382a94: 0x0  nop
    ctx->pc = 0x382a94u;
    // NOP
label_382a98:
    // 0x382a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x382a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382a9c:
    // 0x382a9c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_382aa0:
    if (ctx->pc == 0x382AA0u) {
        ctx->pc = 0x382AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A9Cu;
        // 0x382aa0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382AA4u;
        goto label_382aa4;
    }
    ctx->pc = 0x382A9Cu;
    {
        const bool branch_taken_0x382a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a9c) {
            ctx->pc = 0x382AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382A9Cu;
            // 0x382aa0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382AB4u;
            goto label_382ab4;
        }
    }
    ctx->pc = 0x382AA4u;
label_382aa4:
    // 0x382aa4: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x382aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_382aa8:
    // 0x382aa8: 0x40f809  jalr        $v0
label_382aac:
    if (ctx->pc == 0x382AACu) {
        ctx->pc = 0x382AB0u;
        goto label_382ab0;
    }
    ctx->pc = 0x382AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382AB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382AA8u, 0x382AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382AB0u;
label_382ab0:
    // 0x382ab0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_382ab4:
    // 0x382ab4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x382ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_382ab8:
    // 0x382ab8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x382ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_382abc:
    // 0x382abc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_382ac0:
    if (ctx->pc == 0x382AC0u) {
        ctx->pc = 0x382AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382ABCu;
        // 0x382ac0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382AC4u;
        goto label_382ac4;
    }
    ctx->pc = 0x382ABCu;
    {
        const bool branch_taken_0x382abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382ABCu;
        // 0x382ac0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382abc) {
            ctx->pc = 0x382A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382a98;
        }
    }
    ctx->pc = 0x382AC4u;
label_382ac4:
    // 0x382ac4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x382ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_382ac8:
    // 0x382ac8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_382acc:
    if (ctx->pc == 0x382ACCu) {
        ctx->pc = 0x382ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AC8u;
        // 0x382acc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382AD0u;
        goto label_382ad0;
    }
    ctx->pc = 0x382AC8u;
    {
        const bool branch_taken_0x382ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AC8u;
        // 0x382acc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ac8) {
            ctx->pc = 0x382AE0u;
            goto label_382ae0;
        }
    }
    ctx->pc = 0x382AD0u;
label_382ad0:
    // 0x382ad0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x382ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_382ad4:
    // 0x382ad4: 0x40f809  jalr        $v0
label_382ad8:
    if (ctx->pc == 0x382AD8u) {
        ctx->pc = 0x382ADCu;
        goto label_382adc;
    }
    ctx->pc = 0x382AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382ADCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382AD4u, 0x382ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382ADCu;
label_382adc:
    // 0x382adc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x382adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_382ae0:
    // 0x382ae0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x382ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_382ae4:
    // 0x382ae4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x382ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_382ae8:
    // 0x382ae8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x382ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_382aec:
    // 0x382aec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x382aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382af0:
    // 0x382af0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x382af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_382af4:
    // 0x382af4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_382af8:
    if (ctx->pc == 0x382AF8u) {
        ctx->pc = 0x382AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AF4u;
        // 0x382af8: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382AFCu;
        goto label_382afc;
    }
    ctx->pc = 0x382AF4u;
    {
        const bool branch_taken_0x382af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AF4u;
        // 0x382af8: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382af4) {
            ctx->pc = 0x382B3Cu;
            goto label_382b3c;
        }
    }
    ctx->pc = 0x382AFCu;
label_382afc:
    // 0x382afc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x382afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_382b00:
    // 0x382b00: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x382b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_382b04:
    // 0x382b04: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x382b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_382b08:
    // 0x382b08: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x382b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_382b0c:
    // 0x382b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x382b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_382b10:
    // 0x382b10: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x382b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_382b14:
    // 0x382b14: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x382b14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_382b18:
    // 0x382b18: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x382b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_382b1c:
    // 0x382b1c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x382b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_382b20:
    // 0x382b20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x382b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382b24:
    // 0x382b24: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x382b24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_382b28:
    // 0x382b28: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x382b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_382b2c:
    // 0x382b2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x382b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_382b30:
    // 0x382b30: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x382b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_382b34:
    // 0x382b34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_382b38:
    if (ctx->pc == 0x382B38u) {
        ctx->pc = 0x382B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B34u;
        // 0x382b38: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382B3Cu;
        goto label_382b3c;
    }
    ctx->pc = 0x382B34u;
    {
        const bool branch_taken_0x382b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B34u;
        // 0x382b38: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b34) {
            ctx->pc = 0x382B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382b08;
        }
    }
    ctx->pc = 0x382B3Cu;
label_382b3c:
    // 0x382b3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x382b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382b40:
    // 0x382b40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x382b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_382b44:
    // 0x382b44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x382b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_382b48:
    // 0x382b48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x382b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_382b4c:
    // 0x382b4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x382b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_382b50:
    // 0x382b50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x382b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_382b54:
    // 0x382b54: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x382b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_382b58:
    // 0x382b58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x382b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_382b5c:
    // 0x382b5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382b60:
    // 0x382b60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x382b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382b64:
    // 0x382b64: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x382b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382b68:
    // 0x382b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382b6c:
    // 0x382b6c: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x382b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_382b70:
    // 0x382b70: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x382b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_382b74:
    // 0x382b74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x382b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_382b78:
    // 0x382b78: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x382b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_382b7c:
    // 0x382b7c: 0x3e00008  jr          $ra
label_382b80:
    if (ctx->pc == 0x382B80u) {
        ctx->pc = 0x382B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B7Cu;
        // 0x382b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382B84u;
        goto label_382b84;
    }
    ctx->pc = 0x382B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B7Cu;
        // 0x382b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382B84u;
label_382b84:
    // 0x382b84: 0x0  nop
    ctx->pc = 0x382b84u;
    // NOP
    ctx->pc = 0x382b88u;
}
