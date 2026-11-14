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

// Function: sub_002F3A88
// Address: 0x2f3a88 - 0x2f50f8
void sub_002F3A88_0x2f3a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3A88_0x2f3a88");
#endif

    switch (ctx->pc) {
        case 0x2f3ac8u: goto label_2f3ac8;
        case 0x2f3af8u: goto label_2f3af8;
        case 0x2f3b34u: goto label_2f3b34;
        case 0x2f3b58u: goto label_2f3b58;
        case 0x2f3b60u: goto label_2f3b60;
        case 0x2f3b80u: goto label_2f3b80;
        case 0x2f3be0u: goto label_2f3be0;
        case 0x2f3c1cu: goto label_2f3c1c;
        case 0x2f3c20u: goto label_2f3c20;
        case 0x2f3c2cu: goto label_2f3c2c;
        case 0x2f3c30u: goto label_2f3c30;
        case 0x2f3ce8u: goto label_2f3ce8;
        case 0x2f3d38u: goto label_2f3d38;
        case 0x2f3e64u: goto label_2f3e64;
        case 0x2f3e7cu: goto label_2f3e7c;
        case 0x2f3eacu: goto label_2f3eac;
        case 0x2f3ee8u: goto label_2f3ee8;
        case 0x2f3f54u: goto label_2f3f54;
        case 0x2f40f4u: goto label_2f40f4;
        case 0x2f4120u: goto label_2f4120;
        case 0x2f4230u: goto label_2f4230;
        case 0x2f4238u: goto label_2f4238;
        case 0x2f4278u: goto label_2f4278;
        case 0x2f4280u: goto label_2f4280;
        case 0x2f429cu: goto label_2f429c;
        case 0x2f42c8u: goto label_2f42c8;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f4840u: goto label_2f4840;
        case 0x2f48e4u: goto label_2f48e4;
        case 0x2f4948u: goto label_2f4948;
        case 0x2f4980u: goto label_2f4980;
        case 0x2f49b8u: goto label_2f49b8;
        case 0x2f4a1cu: goto label_2f4a1c;
        case 0x2f4a6cu: goto label_2f4a6c;
        case 0x2f4ac8u: goto label_2f4ac8;
        case 0x2f4b08u: goto label_2f4b08;
        case 0x2f4b40u: goto label_2f4b40;
        case 0x2f4ba4u: goto label_2f4ba4;
        case 0x2f4c34u: goto label_2f4c34;
        case 0x2f4c90u: goto label_2f4c90;
        case 0x2f4cf0u: goto label_2f4cf0;
        case 0x2f4d74u: goto label_2f4d74;
        case 0x2f4d94u: goto label_2f4d94;
        case 0x2f4de4u: goto label_2f4de4;
        case 0x2f4e20u: goto label_2f4e20;
        case 0x2f4e58u: goto label_2f4e58;
        case 0x2f4ebcu: goto label_2f4ebc;
        case 0x2f4f08u: goto label_2f4f08;
        case 0x2f4f58u: goto label_2f4f58;
        case 0x2f4fa0u: goto label_2f4fa0;
        case 0x2f4fd8u: goto label_2f4fd8;
        case 0x2f5038u: goto label_2f5038;
        case 0x2f5074u: goto label_2f5074;
        case 0x2f50a4u: goto label_2f50a4;
        default: break;
    }

    ctx->pc = 0x2f3a88u;

    // 0x2f3a88: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2f3a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x2f3a8c: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x2f3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x2f3a90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f3a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a94: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x2f3a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x2f3a98: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f3a98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a9c: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x2f3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    // 0x2f3aa0: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x2f3aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x2f3aa4: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x2f3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x2f3aa8: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x2f3aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x2f3aac: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x2f3aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x2f3ab0: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x2f3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x2f3ab4: 0xffb70278  sd          $s7, 0x278($sp)
    ctx->pc = 0x2f3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 23));
    // 0x2f3ab8: 0xffbe0280  sd          $fp, 0x280($sp)
    ctx->pc = 0x2f3ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 30));
    // 0x2f3abc: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x2f3abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
    // 0x2f3ac0: 0xc0bb40e  jal         func_2ED038
    ctx->pc = 0x2F3AC0u;
    SET_GPR_U32(ctx, 31, 0x2F3AC8u);
    ctx->pc = 0x2F3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AC0u;
    // 0x2f3ac4: 0xafa501e8  sw          $a1, 0x1E8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED038u, 0x2F3AC0u, 0x2F3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AC8u;
label_2f3ac8:
    // 0x2f3ac8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f3acc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3ad0: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x2f3ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f3ad4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x2f3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x2f3ad8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2f3ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2f3adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3ADCu;
    {
        const bool branch_taken_0x2f3adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3ADCu;
        // 0x2f3ae0: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3adc) {
            ctx->pc = 0x2F3AF0u;
            goto label_2f3af0;
        }
    }
    ctx->pc = 0x2F3AE4u;
    // 0x2f3ae4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2f3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f3ae8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3AE8u;
    {
        const bool branch_taken_0x2f3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ae8) {
            ctx->pc = 0x2F3AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AE8u;
            // 0x2f3aec: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3B0Cu;
            goto label_2f3b0c;
        }
    }
    ctx->pc = 0x2F3AF0u;
label_2f3af0:
    // 0x2f3af0: 0xc0bd8c4  jal         func_2F6310
    ctx->pc = 0x2F3AF0u;
    SET_GPR_U32(ctx, 31, 0x2F3AF8u);
    ctx->pc = 0x2F3AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AF0u;
    // 0x2f3af4: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6310u, 0x2F3AF0u, 0x2F3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AF8u;
label_2f3af8:
    // 0x2f3af8: 0x14400573  bnez        $v0, . + 4 + (0x573 << 2)
    ctx->pc = 0x2F3AF8u;
    {
        const bool branch_taken_0x2f3af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AF8u;
        // 0x2f3afc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3af8) {
            ctx->pc = 0x2F50C8u;
            goto label_2f50c8;
        }
    }
    ctx->pc = 0x2F3B00u;
    // 0x2f3b00: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x2f3b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f3b04: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2f3b04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f3b08: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x2f3b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
label_2f3b0c:
    // 0x2f3b0c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2f3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f3b10: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3B10u;
    {
        const bool branch_taken_0x2f3b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B10u;
        // 0x2f3b14: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b10) {
            ctx->pc = 0x2F3B40u;
            goto label_2f3b40;
        }
    }
    ctx->pc = 0x2F3B18u;
    // 0x2f3b18: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x2f3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f3b1c: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x2f3b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x2f3b20: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3B20u;
    {
        const bool branch_taken_0x2f3b20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B20u;
        // 0x2f3b24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b20) {
            ctx->pc = 0x2F3B40u;
            goto label_2f3b40;
        }
    }
    ctx->pc = 0x2F3B28u;
    // 0x2f3b28: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f3b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b2c: 0xc0bce56  jal         func_2F3958
    ctx->pc = 0x2F3B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B34u);
    ctx->pc = 0x2F3B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B2Cu;
    // 0x2f3b30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3958u, 0x2F3B2Cu, 0x2F3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B34u;
label_2f3b34:
    // 0x2f3b34: 0x10000565  b           . + 4 + (0x565 << 2)
    ctx->pc = 0x2F3B34u;
    {
        const bool branch_taken_0x2f3b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B34u;
        // 0x2f3b38: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b34) {
            ctx->pc = 0x2F50CCu;
            goto label_2f50cc;
        }
    }
    ctx->pc = 0x2F3B3Cu;
    // 0x2f3b3c: 0x0  nop
    ctx->pc = 0x2f3b3cu;
    // NOP
label_2f3b40:
    // 0x2f3b40: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f3b44: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2f3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2f3b48: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2f3b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2f3b50: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x2f3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x2f3b54: 0x0  nop
    ctx->pc = 0x2f3b54u;
    // NOP
label_2f3b58:
    // 0x2f3b58: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2f3b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b5c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x2f3b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2f3b60:
    // 0x2f3b60: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3b64: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f3b68: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f3b6c: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x2f3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2f3b70: 0x8c67ea98  lw          $a3, -0x1568($v1)
    ctx->pc = 0x2f3b70u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4EEA98u));
    // 0x2f3b74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f3b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b78: 0xc0bb70c  jal         func_2EDC30
    ctx->pc = 0x2F3B78u;
    SET_GPR_U32(ctx, 31, 0x2F3B80u);
    ctx->pc = 0x2F3B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B78u;
    // 0x2f3b7c: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDC30u, 0x2F3B78u, 0x2F3B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B80u;
label_2f3b80:
    // 0x2f3b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b84: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3B84u;
    {
        const bool branch_taken_0x2f3b84 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2f3b84) {
            ctx->pc = 0x2F3B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3B84u;
            // 0x2f3b88: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3BA0u;
            goto label_2f3ba0;
        }
    }
    ctx->pc = 0x2F3B8Cu;
    // 0x2f3b8c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x2f3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x2f3b90: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F3B90u;
    {
        const bool branch_taken_0x2f3b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B90u;
        // 0x2f3b94: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b90) {
            ctx->pc = 0x2F3B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b60;
        }
    }
    ctx->pc = 0x2F3B98u;
    // 0x2f3b98: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2f3b9c: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x2f3b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2f3ba0:
    // 0x2f3ba0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F3BA0u;
    {
        const bool branch_taken_0x2f3ba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ba0) {
            ctx->pc = 0x2F3BFCu;
            goto label_2f3bfc;
        }
    }
    ctx->pc = 0x2F3BA8u;
    // 0x2f3ba8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x2f3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x2f3bac: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2f3bb0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f3bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f3bb4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f3bb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3bc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2f3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2f3bc4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f3bc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f3bc8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f3bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f3bcc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3BCCu;
    {
        const bool branch_taken_0x2f3bcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BCCu;
        // 0x2f3bd0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bcc) {
            ctx->pc = 0x2F3BF0u;
            goto label_2f3bf0;
        }
    }
    ctx->pc = 0x2F3BD4u;
    // 0x2f3bd4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f3bd8: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F3BD8u;
    SET_GPR_U32(ctx, 31, 0x2F3BE0u);
    ctx->pc = 0x2F3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3BD8u;
    // 0x2f3bdc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F3BD8u, 0x2F3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BE0u;
label_2f3be0:
    // 0x2f3be0: 0x14400534  bnez        $v0, . + 4 + (0x534 << 2)
    ctx->pc = 0x2F3BE0u;
    {
        const bool branch_taken_0x2f3be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BE0u;
        // 0x2f3be4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3be0) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F3BE8u;
    // 0x2f3be8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f3bec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f3becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bf0:
    // 0x2f3bf0: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2f3bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f3bf4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2f3bf8: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x2f3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_2f3bfc:
    // 0x2f3bfc: 0x1a000525  blez        $s0, . + 4 + (0x525 << 2)
    ctx->pc = 0x2F3BFCu;
    {
        const bool branch_taken_0x2f3bfc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BFCu;
        // 0x2f3c00: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bfc) {
            ctx->pc = 0x2F5094u;
            goto label_2f5094;
        }
    }
    ctx->pc = 0x2F3C04u;
    // 0x2f3c04: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2f3c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3c08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f3c0c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x2f3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x2f3c10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2f3c10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c14: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x2f3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x2f3c18: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2f3c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3c1c:
    // 0x2f3c1c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2f3c1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f3c20:
    // 0x2f3c20: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2f3c24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f3c28: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x2f3c28u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_2f3c2c:
    // 0x2f3c2c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_2f3c30:
    // 0x2f3c30: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x2f3c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x2f3c34: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2F3C34u;
    {
        const bool branch_taken_0x2f3c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C34u;
        // 0x2f3c38: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c34) {
            ctx->pc = 0x2F4300u;
            goto label_2f4300;
        }
    }
    ctx->pc = 0x2F3C3Cu;
    // 0x2f3c3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f3c40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3c44: 0x8c639410  lw          $v1, -0x6BF0($v1)
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939664)));
    // 0x2f3c48: 0x600008  jr          $v1
    ctx->pc = 0x2F3C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3C50u: goto label_2f3c50;
            case 0x2F3C68u: goto label_2f3c68;
            case 0x2F3C70u: goto label_2f3c70;
            case 0x2F3C8Cu: goto label_2f3c8c;
            case 0x2F3C98u: goto label_2f3c98;
            case 0x2F3CA8u: goto label_2f3ca8;
            case 0x2F3D28u: goto label_2f3d28;
            case 0x2F3D30u: goto label_2f3d30;
            case 0x2F3D68u: goto label_2f3d68;
            case 0x2F3D70u: goto label_2f3d70;
            case 0x2F3D78u: goto label_2f3d78;
            case 0x2F3D8Cu: goto label_2f3d8c;
            case 0x2F3DA0u: goto label_2f3da0;
            case 0x2F3DC0u: goto label_2f3dc0;
            case 0x2F3DC4u: goto label_2f3dc4;
            case 0x2F3E18u: goto label_2f3e18;
            case 0x2F3FF8u: goto label_2f3ff8;
            case 0x2F4058u: goto label_2f4058;
            case 0x2F405Cu: goto label_2f405c;
            case 0x2F40A0u: goto label_2f40a0;
            case 0x2F40C8u: goto label_2f40c8;
            case 0x2F4128u: goto label_2f4128;
            case 0x2F412Cu: goto label_2f412c;
            case 0x2F4170u: goto label_2f4170;
            case 0x2F4180u: goto label_2f4180;
            case 0x2F4300u: goto label_2f4300;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C50u;
label_2f3c50:
    // 0x2f3c50: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x2f3c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2f3c54: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F3C54u;
    {
        const bool branch_taken_0x2f3c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c54) {
            ctx->pc = 0x2F3C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C54u;
            // 0x2f3c58: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c20;
        }
    }
    ctx->pc = 0x2F3C5Cu;
    // 0x2f3c5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F3C5Cu;
    {
        const bool branch_taken_0x2f3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C5Cu;
        // 0x2f3c60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c5c) {
            ctx->pc = 0x2F3C9Cu;
            goto label_2f3c9c;
        }
    }
    ctx->pc = 0x2F3C64u;
    // 0x2f3c64: 0x0  nop
    ctx->pc = 0x2f3c64u;
    // NOP
label_2f3c68:
    // 0x2f3c68: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F3C68u;
    {
        const bool branch_taken_0x2f3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C68u;
        // 0x2f3c6c: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c68) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3C70u;
label_2f3c70:
    // 0x2f3c70: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f3c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c74: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f3c74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f3c78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3c7c: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2F3C7Cu;
    {
        const bool branch_taken_0x2f3c7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C7Cu;
        // 0x2f3c80: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c7c) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3C84u;
    // 0x2f3c84: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2f3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f3c88: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2f3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_2f3c8c:
    // 0x2f3c8c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F3C8Cu;
    {
        const bool branch_taken_0x2f3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C8Cu;
        // 0x2f3c90: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c8c) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3C94u;
    // 0x2f3c94: 0x0  nop
    ctx->pc = 0x2f3c94u;
    // NOP
label_2f3c98:
    // 0x2f3c98: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2f3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2f3c9c:
    // 0x2f3c9c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2f3c9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3ca0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2F3CA0u;
    {
        const bool branch_taken_0x2f3ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA0u;
        // 0x2f3ca4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca0) {
            ctx->pc = 0x2F3C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c20;
        }
    }
    ctx->pc = 0x2F3CA8u;
label_2f3ca8:
    // 0x2f3ca8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3ca8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3cac: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2f3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2f3cb0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3CB0u;
    {
        const bool branch_taken_0x2f3cb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CB0u;
        // 0x2f3cb4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cb0) {
            ctx->pc = 0x2F3CD8u;
            goto label_2f3cd8;
        }
    }
    ctx->pc = 0x2F3CB8u;
    // 0x2f3cb8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f3cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f3cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3cc0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2f3cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3cc4: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x2f3cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2f3cc8: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2F3CC8u;
    {
        const bool branch_taken_0x2f3cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CC8u;
        // 0x2f3ccc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cc8) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3CD0u;
    // 0x2f3cd0: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F3CD0u;
    {
        const bool branch_taken_0x2f3cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CD0u;
        // 0x2f3cd4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cd0) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3CD8u;
label_2f3cd8:
    // 0x2f3cd8: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x2f3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x2f3cdc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f3cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f3ce0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3CE0u;
    {
        const bool branch_taken_0x2f3ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CE0u;
        // 0x2f3ce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ce0) {
            ctx->pc = 0x2F3D10u;
            goto label_2f3d10;
        }
    }
    ctx->pc = 0x2F3CE8u;
label_2f3ce8:
    // 0x2f3ce8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f3cec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f3cf0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f3cf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f3cf8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3cf8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3cfc: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x2f3cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f3d00: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x2f3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x2f3d04: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f3d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f3d08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F3D08u;
    {
        const bool branch_taken_0x2f3d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D08u;
        // 0x2f3d0c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d08) {
            ctx->pc = 0x2F3CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3ce8;
        }
    }
    ctx->pc = 0x2F3D10u;
label_2f3d10:
    // 0x2f3d10: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2f3d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d14: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x2f3d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2f3d18: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2F3D18u;
    {
        const bool branch_taken_0x2f3d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3d18) {
            ctx->pc = 0x2F3D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3D18u;
            // 0x2f3d1c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c2c;
        }
    }
    ctx->pc = 0x2F3D20u;
    // 0x2f3d20: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x2F3D20u;
    {
        const bool branch_taken_0x2f3d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D20u;
        // 0x2f3d24: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d20) {
            ctx->pc = 0x2F3C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c30;
        }
    }
    ctx->pc = 0x2F3D28u;
label_2f3d28:
    // 0x2f3d28: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x2F3D28u;
    {
        const bool branch_taken_0x2f3d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D28u;
        // 0x2f3d2c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d28) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3D30u;
label_2f3d30:
    // 0x2f3d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f3d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3d34: 0x0  nop
    ctx->pc = 0x2f3d34u;
    // NOP
label_2f3d38:
    // 0x2f3d38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f3d3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f3d40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f3d44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f3d48: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x2f3d48u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3d4c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x2f3d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f3d50: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x2f3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x2f3d54: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f3d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f3d58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F3D58u;
    {
        const bool branch_taken_0x2f3d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D58u;
        // 0x2f3d5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d58) {
            ctx->pc = 0x2F3D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3d38;
        }
    }
    ctx->pc = 0x2F3D60u;
    // 0x2f3d60: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x2F3D60u;
    {
        const bool branch_taken_0x2f3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D60u;
        // 0x2f3d64: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d60) {
            ctx->pc = 0x2F3C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c2c;
        }
    }
    ctx->pc = 0x2F3D68u;
label_2f3d68:
    // 0x2f3d68: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x2F3D68u;
    {
        const bool branch_taken_0x2f3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D68u;
        // 0x2f3d6c: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d68) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3D70u;
label_2f3d70:
    // 0x2f3d70: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
    ctx->pc = 0x2F3D70u;
    {
        const bool branch_taken_0x2f3d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D70u;
        // 0x2f3d74: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d70) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3D78u;
label_2f3d78:
    // 0x2f3d78: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f3d7c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2f3d80: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3D80u;
    {
        const bool branch_taken_0x2f3d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D80u;
        // 0x2f3d84: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d80) {
            ctx->pc = 0x2F3D98u;
            goto label_2f3d98;
        }
    }
    ctx->pc = 0x2F3D88u;
    // 0x2f3d88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f3d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f3d8c:
    // 0x2f3d8c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x2F3D8Cu;
    {
        const bool branch_taken_0x2f3d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D8Cu;
        // 0x2f3d90: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d8c) {
            ctx->pc = 0x2F3C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c1c;
        }
    }
    ctx->pc = 0x2F3D94u;
    // 0x2f3d94: 0x0  nop
    ctx->pc = 0x2f3d94u;
    // NOP
label_2f3d98:
    // 0x2f3d98: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
    ctx->pc = 0x2F3D98u;
    {
        const bool branch_taken_0x2f3d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D98u;
        // 0x2f3d9c: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d98) {
            ctx->pc = 0x2F3C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3c20;
        }
    }
    ctx->pc = 0x2F3DA0u;
label_2f3da0:
    // 0x2f3da0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f3da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3da4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f3da4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f3da8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f3da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3dac: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x2f3dacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f3db0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2f3db0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3db4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x2F3DB4u;
    {
        const bool branch_taken_0x2f3db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DB4u;
        // 0x2f3db8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3db4) {
            ctx->pc = 0x2F4310u;
            goto label_2f4310;
        }
    }
    ctx->pc = 0x2F3DBCu;
    // 0x2f3dbc: 0x0  nop
    ctx->pc = 0x2f3dbcu;
    // NOP
label_2f3dc0:
    // 0x2f3dc0: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x2f3dc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_2f3dc4:
    // 0x2f3dc4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x2f3dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x2f3dc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3DC8u;
    {
        const bool branch_taken_0x2f3dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC8u;
        // 0x2f3dcc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dc8) {
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DD0u;
    // 0x2f3dd0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f3dd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f3dd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F3DD4u;
    {
        const bool branch_taken_0x2f3dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DD4u;
        // 0x2f3dd8: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dd4) {
            ctx->pc = 0x2F3E00u;
            goto label_2f3e00;
        }
    }
    ctx->pc = 0x2F3DDCu;
    // 0x2f3ddc: 0x0  nop
    ctx->pc = 0x2f3ddcu;
    // NOP
label_2f3de0:
    // 0x2f3de0: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x2f3de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x2f3de4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3DE4u;
    {
        const bool branch_taken_0x2f3de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DE4u;
        // 0x2f3de8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3de4) {
            ctx->pc = 0x2F3DF8u;
            goto label_2f3df8;
        }
    }
    ctx->pc = 0x2F3DECu;
    // 0x2f3dec: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f3decu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f3df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3DF0u;
    {
        const bool branch_taken_0x2f3df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DF0u;
        // 0x2f3df4: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3df0) {
            ctx->pc = 0x2F3E00u;
            goto label_2f3e00;
        }
    }
    ctx->pc = 0x2F3DF8u;
label_2f3df8:
    // 0x2f3df8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f3df8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f3dfc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f3dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3e00:
    // 0x2f3e00: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2F3E00u;
    {
        const bool branch_taken_0x2f3e00 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E00u;
        // 0x2f3e04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e00) {
            ctx->pc = 0x2F41E0u;
            goto label_2f41e0;
        }
    }
    ctx->pc = 0x2F3E08u;
    // 0x2f3e08: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f3e0c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x2f3e0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x2f3e10: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x2F3E10u;
    {
        const bool branch_taken_0x2f3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E10u;
        // 0x2f3e14: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e10) {
            ctx->pc = 0x2F41E0u;
            goto label_2f41e0;
        }
    }
    ctx->pc = 0x2F3E18u;
label_2f3e18:
    // 0x2f3e18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f3e1c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E1Cu;
    {
        const bool branch_taken_0x2f3e1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E1Cu;
        // 0x2f3e20: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e1c) {
            ctx->pc = 0x2F3E30u;
            goto label_2f3e30;
        }
    }
    ctx->pc = 0x2F3E24u;
    // 0x2f3e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3E24u;
    {
        const bool branch_taken_0x2f3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E24u;
        // 0x2f3e28: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e24) {
            ctx->pc = 0x2F3E48u;
            goto label_2f3e48;
        }
    }
    ctx->pc = 0x2F3E2Cu;
    // 0x2f3e2c: 0x0  nop
    ctx->pc = 0x2f3e2cu;
    // NOP
label_2f3e30:
    // 0x2f3e30: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3E30u;
    {
        const bool branch_taken_0x2f3e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E30u;
        // 0x2f3e34: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e30) {
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3E38u;
    // 0x2f3e38: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E38u;
    {
        const bool branch_taken_0x2f3e38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E38u;
        // 0x2f3e3c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e38) {
            ctx->pc = 0x2F3E4Cu;
            goto label_2f3e4c;
        }
    }
    ctx->pc = 0x2F3E40u;
label_2f3e40:
    // 0x2f3e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3e44: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x2f3e44u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_2f3e48:
    // 0x2f3e48: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x2f3e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_2f3e4c:
    // 0x2f3e4c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f3e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e50: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2f3e50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3e54: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x2f3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x2f3e58: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x2f3e58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f3e5c: 0xc0bc152  jal         func_2F0548
    ctx->pc = 0x2F3E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F3E64u);
    ctx->pc = 0x2F3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E5Cu;
    // 0x2f3e60: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0548u, 0x2F3E5Cu, 0x2F3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E64u;
label_2f3e64:
    // 0x2f3e64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3E64u;
    {
        const bool branch_taken_0x2f3e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e64) {
            ctx->pc = 0x2F3EA0u;
            goto label_2f3ea0;
        }
    }
    ctx->pc = 0x2F3E6Cu;
    // 0x2f3e6c: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x2f3e6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f3e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e74: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F3E74u;
    SET_GPR_U32(ctx, 31, 0x2F3E7Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F3E74u, 0x2F3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E7Cu;
label_2f3e7c:
    // 0x2f3e7c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E7Cu;
    {
        const bool branch_taken_0x2f3e7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E7Cu;
        // 0x2f3e80: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e7c) {
            ctx->pc = 0x2F3E90u;
            goto label_2f3e90;
        }
    }
    ctx->pc = 0x2F3E84u;
    // 0x2f3e84: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f3e88: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x2f3e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f3e8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f3e90:
    // 0x2f3e90: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2f3e90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3e94: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x2F3E94u;
    {
        const bool branch_taken_0x2f3e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E94u;
        // 0x2f3e98: 0x24559390  addiu       $s5, $v0, -0x6C70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e94) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F3E9Cu;
    // 0x2f3e9c: 0x0  nop
    ctx->pc = 0x2f3e9cu;
    // NOP
label_2f3ea0:
    // 0x2f3ea0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x2f3ea0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f3ea4: 0xc0bc164  jal         func_2F0590
    ctx->pc = 0x2F3EA4u;
    SET_GPR_U32(ctx, 31, 0x2F3EACu);
    ctx->pc = 0x2F0590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0590u, 0x2F3EA4u, 0x2F3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EACu;
label_2f3eac:
    // 0x2f3eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3EACu;
    {
        const bool branch_taken_0x2f3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EACu;
        // 0x2f3eb0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eac) {
            ctx->pc = 0x2F3EC0u;
            goto label_2f3ec0;
        }
    }
    ctx->pc = 0x2F3EB4u;
    // 0x2f3eb4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x2f3eb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3eb8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2F3EB8u;
    {
        const bool branch_taken_0x2f3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EB8u;
        // 0x2f3ebc: 0x24559398  addiu       $s5, $v0, -0x6C68 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eb8) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F3EC0u;
label_2f3ec0:
    // 0x2f3ec0: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x2f3ec0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
    // 0x2f3ec4: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x2f3ec8: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x2f3ec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f3ecc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f3eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ed0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2f3ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ed4: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x2f3ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2f3ed8: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x2f3ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x2f3edc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2f3edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ee0: 0xc0bd43e  jal         func_2F50F8
    ctx->pc = 0x2F3EE0u;
    SET_GPR_U32(ctx, 31, 0x2F3EE8u);
    ctx->pc = 0x2F3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EE0u;
    // 0x2f3ee4: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F50F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F50F8u, 0x2F3EE0u, 0x2F3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EE8u;
label_2f3ee8:
    // 0x2f3ee8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f3ee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3eec: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2f3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2f3ef0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3EF0u;
    {
        const bool branch_taken_0x2f3ef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EF0u;
        // 0x2f3ef4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ef0) {
            ctx->pc = 0x2F3F00u;
            goto label_2f3f00;
        }
    }
    ctx->pc = 0x2F3EF8u;
    // 0x2f3ef8: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3EF8u;
    {
        const bool branch_taken_0x2f3ef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EF8u;
        // 0x2f3efc: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ef8) {
            ctx->pc = 0x2F3F30u;
            goto label_2f3f30;
        }
    }
    ctx->pc = 0x2F3F00u;
label_2f3f00:
    // 0x2f3f00: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x2f3f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f3f04: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x2f3f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x2f3f08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3F08u;
    {
        const bool branch_taken_0x2f3f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F08u;
        // 0x2f3f0c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f08) {
            ctx->pc = 0x2F3F20u;
            goto label_2f3f20;
        }
    }
    ctx->pc = 0x2F3F10u;
    // 0x2f3f10: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x2f3f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f3f14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3F14u;
    {
        const bool branch_taken_0x2f3f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f14) {
            ctx->pc = 0x2F3F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3F14u;
            // 0x2f3f18: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F30u;
            goto label_2f3f30;
        }
    }
    ctx->pc = 0x2F3F1Cu;
    // 0x2f3f1c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2f3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2f3f20:
    // 0x2f3f20: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x2f3f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
    // 0x2f3f24: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x2f3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2f3f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f2c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x2f3f2cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2f3f30:
    // 0x2f3f30: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x2f3f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x2f3f34: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F3F34u;
    {
        const bool branch_taken_0x2f3f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f34) {
            ctx->pc = 0x2F3F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3F34u;
            // 0x2f3f38: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3F80u;
            goto label_2f3f80;
        }
    }
    ctx->pc = 0x2F3F3Cu;
    // 0x2f3f3c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f3f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f3f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f48: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2f3f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f4c: 0xc0bd4ae  jal         func_2F52B8
    ctx->pc = 0x2F3F4Cu;
    SET_GPR_U32(ctx, 31, 0x2F3F54u);
    ctx->pc = 0x2F3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F4Cu;
    // 0x2f3f50: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52B8u, 0x2F3F4Cu, 0x2F3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F54u;
label_2f3f54:
    // 0x2f3f54: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x2f3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x2f3f58: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f3f5c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x2f3f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2f3f60: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2f3f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f3f64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F64u;
    {
        const bool branch_taken_0x2f3f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F64u;
        // 0x2f3f68: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f64) {
            ctx->pc = 0x2F3F78u;
            goto label_2f3f78;
        }
    }
    ctx->pc = 0x2F3F6Cu;
    // 0x2f3f6c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f3f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f3f70: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F3F70u;
    {
        const bool branch_taken_0x2f3f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F70u;
        // 0x2f3f74: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f70) {
            ctx->pc = 0x2F3FE4u;
            goto label_2f3fe4;
        }
    }
    ctx->pc = 0x2F3F78u;
label_2f3f78:
    // 0x2f3f78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F3F78u;
    {
        const bool branch_taken_0x2f3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F78u;
        // 0x2f3f7c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f78) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3F80u;
label_2f3f80:
    // 0x2f3f80: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3F80u;
    {
        const bool branch_taken_0x2f3f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F80u;
        // 0x2f3f84: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f80) {
            ctx->pc = 0x2F3FB0u;
            goto label_2f3fb0;
        }
    }
    ctx->pc = 0x2F3F88u;
    // 0x2f3f88: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F3F88u;
    {
        const bool branch_taken_0x2f3f88 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F88u;
        // 0x2f3f8c: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f88) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3F90u;
    // 0x2f3f90: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3F90u;
    {
        const bool branch_taken_0x2f3f90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F90u;
        // 0x2f3f94: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f90) {
            ctx->pc = 0x2F3FA4u;
            goto label_2f3fa4;
        }
    }
    ctx->pc = 0x2F3F98u;
    // 0x2f3f98: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f3f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f3f9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3F9Cu;
    {
        const bool branch_taken_0x2f3f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F9Cu;
        // 0x2f3fa0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f9c) {
            ctx->pc = 0x2F3FE4u;
            goto label_2f3fe4;
        }
    }
    ctx->pc = 0x2F3FA4u;
label_2f3fa4:
    // 0x2f3fa4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x2f3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2f3fa8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F3FA8u;
    {
        const bool branch_taken_0x2f3fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FA8u;
        // 0x2f3fac: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fa8) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3FB0u;
label_2f3fb0:
    // 0x2f3fb0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2f3fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f3fb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3FB4u;
    {
        const bool branch_taken_0x2f3fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FB4u;
        // 0x2f3fb8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fb4) {
            ctx->pc = 0x2F3FD0u;
            goto label_2f3fd0;
        }
    }
    ctx->pc = 0x2F3FBCu;
    // 0x2f3fbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3FBCu;
    {
        const bool branch_taken_0x2f3fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FBCu;
        // 0x2f3fc0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fbc) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3FC4u;
    // 0x2f3fc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3FC4u;
    {
        const bool branch_taken_0x2f3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FC4u;
        // 0x2f3fc8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fc4) {
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3FCCu;
    // 0x2f3fcc: 0x0  nop
    ctx->pc = 0x2f3fccu;
    // NOP
label_2f3fd0:
    // 0x2f3fd0: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3FD0u;
    {
        const bool branch_taken_0x2f3fd0 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x2f3fd0) {
            ctx->pc = 0x2F3FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3FD0u;
            // 0x2f3fd4: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3FE0u;
            goto label_2f3fe0;
        }
    }
    ctx->pc = 0x2F3FD8u;
    // 0x2f3fd8: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x2f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f3fdc: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x2f3fdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2f3fe0:
    // 0x2f3fe0: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x2f3fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_2f3fe4:
    // 0x2f3fe4: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x2F3FE4u;
    {
        const bool branch_taken_0x2f3fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FE4u;
        // 0x2f3fe8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fe4) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F3FECu;
    // 0x2f3fec: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2F3FECu;
    {
        const bool branch_taken_0x2f3fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FECu;
        // 0x2f3ff0: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3fec) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F3FF4u;
    // 0x2f3ff4: 0x0  nop
    ctx->pc = 0x2f3ff4u;
    // NOP
label_2f3ff8:
    // 0x2f3ff8: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x2f3ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x2f3ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3FFCu;
    {
        const bool branch_taken_0x2f3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FFCu;
        // 0x2f4000: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ffc) {
            ctx->pc = 0x2F4020u;
            goto label_2f4020;
        }
    }
    ctx->pc = 0x2F4004u;
    // 0x2f4004: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x2f4004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4008: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4008u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f400c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4010: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x2f4010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f4014: 0x1000fed0  b           . + 4 + (-0x130 << 2)
    ctx->pc = 0x2F4014u;
    {
        const bool branch_taken_0x2f4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4014u;
        // 0x2f4018: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4014) {
            ctx->pc = 0x2F3B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b58;
        }
    }
    ctx->pc = 0x2F401Cu;
    // 0x2f401c: 0x0  nop
    ctx->pc = 0x2f401cu;
    // NOP
label_2f4020:
    // 0x2f4020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4020u;
    {
        const bool branch_taken_0x2f4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4020u;
        // 0x2f4024: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4020) {
            ctx->pc = 0x2F4040u;
            goto label_2f4040;
        }
    }
    ctx->pc = 0x2F4028u;
    // 0x2f4028: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f402c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4030: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2f4030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f4034: 0x1000fec8  b           . + 4 + (-0x138 << 2)
    ctx->pc = 0x2F4034u;
    {
        const bool branch_taken_0x2f4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4034u;
        // 0x2f4038: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4034) {
            ctx->pc = 0x2F3B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b58;
        }
    }
    ctx->pc = 0x2F403Cu;
    // 0x2f403c: 0x0  nop
    ctx->pc = 0x2f403cu;
    // NOP
label_2f4040:
    // 0x2f4040: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f4044: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f4048: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2f4048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f404c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
    ctx->pc = 0x2F404Cu;
    {
        const bool branch_taken_0x2f404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F404Cu;
        // 0x2f4050: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f404c) {
            ctx->pc = 0x2F3B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b58;
        }
    }
    ctx->pc = 0x2F4054u;
    // 0x2f4054: 0x0  nop
    ctx->pc = 0x2f4054u;
    // NOP
label_2f4058:
    // 0x2f4058: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x2f4058u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_2f405c:
    // 0x2f405c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x2f405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x2f4060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4060u;
    {
        const bool branch_taken_0x2f4060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4060u;
        // 0x2f4064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4060) {
            ctx->pc = 0x2F4078u;
            goto label_2f4078;
        }
    }
    ctx->pc = 0x2F4068u;
    // 0x2f4068: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f406c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F406Cu;
    {
        const bool branch_taken_0x2f406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F406Cu;
        // 0x2f4070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f406c) {
            ctx->pc = 0x2F4098u;
            goto label_2f4098;
        }
    }
    ctx->pc = 0x2F4074u;
    // 0x2f4074: 0x0  nop
    ctx->pc = 0x2f4074u;
    // NOP
label_2f4078:
    // 0x2f4078: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x2f4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x2f407c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F407Cu;
    {
        const bool branch_taken_0x2f407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F407Cu;
        // 0x2f4080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f407c) {
            ctx->pc = 0x2F4090u;
            goto label_2f4090;
        }
    }
    ctx->pc = 0x2F4084u;
    // 0x2f4084: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f4088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4088u;
    {
        const bool branch_taken_0x2f4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4088u;
        // 0x2f408c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4088) {
            ctx->pc = 0x2F4098u;
            goto label_2f4098;
        }
    }
    ctx->pc = 0x2F4090u;
label_2f4090:
    // 0x2f4090: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f4094: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x2f4094u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4098:
    // 0x2f4098: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2F4098u;
    {
        const bool branch_taken_0x2f4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4098u;
        // 0x2f409c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4098) {
            ctx->pc = 0x2F41DCu;
            goto label_2f41dc;
        }
    }
    ctx->pc = 0x2F40A0u;
label_2f40a0:
    // 0x2f40a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f40a4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x2f40a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40a8: 0x244293a0  addiu       $v0, $v0, -0x6C60
    ctx->pc = 0x2f40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939552));
    // 0x2f40ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f40acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f40b0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f40b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f40b4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x2f40b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x2f40b8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x2f40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2f40bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f40c0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2F40C0u;
    {
        const bool branch_taken_0x2f40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40C0u;
        // 0x2f40c4: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40c0) {
            ctx->pc = 0x2F41DCu;
            goto label_2f41dc;
        }
    }
    ctx->pc = 0x2F40C8u;
label_2f40c8:
    // 0x2f40c8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2f40c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40cc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2f40ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f40d0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F40D0u;
    {
        const bool branch_taken_0x2f40d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40D0u;
        // 0x2f40d4: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40d0) {
            ctx->pc = 0x2F40E0u;
            goto label_2f40e0;
        }
    }
    ctx->pc = 0x2F40D8u;
    // 0x2f40d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f40dc: 0x245593b8  addiu       $s5, $v0, -0x6C48
    ctx->pc = 0x2f40dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939576));
label_2f40e0:
    // 0x2f40e0: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x2F40E0u;
    {
        const bool branch_taken_0x2f40e0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2F40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40E0u;
        // 0x2f40e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40e0) {
            ctx->pc = 0x2F4118u;
            goto label_2f4118;
        }
    }
    ctx->pc = 0x2F40E8u;
    // 0x2f40e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f40e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40ec: 0xc0bb71a  jal         func_2EDC68
    ctx->pc = 0x2F40ECu;
    SET_GPR_U32(ctx, 31, 0x2F40F4u);
    ctx->pc = 0x2F40F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40ECu;
    // 0x2f40f0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDC68u, 0x2F40ECu, 0x2F40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40F4u;
label_2f40f4:
    // 0x2f40f4: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2F40F4u;
    {
        const bool branch_taken_0x2f40f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40F4u;
        // 0x2f40f8: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40f4) {
            ctx->pc = 0x2F4310u;
            goto label_2f4310;
        }
    }
    ctx->pc = 0x2F40FCu;
    // 0x2f40fc: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x2f40fcu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2f4100: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x2f4100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2f4104: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x2F4104u;
    {
        const bool branch_taken_0x2f4104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4104) {
            ctx->pc = 0x2F4108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4104u;
            // 0x2f4108: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F410Cu;
    // 0x2f410c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2F410Cu;
    {
        const bool branch_taken_0x2f410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F410Cu;
        // 0x2f4110: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f410c) {
            ctx->pc = 0x2F4310u;
            goto label_2f4310;
        }
    }
    ctx->pc = 0x2F4114u;
    // 0x2f4114: 0x0  nop
    ctx->pc = 0x2f4114u;
    // NOP
label_2f4118:
    // 0x2f4118: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2F4118u;
    SET_GPR_U32(ctx, 31, 0x2F4120u);
    ctx->pc = 0x2F411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4118u;
    // 0x2f411c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2F4118u, 0x2F4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4120u;
label_2f4120:
    // 0x2f4120: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2F4120u;
    {
        const bool branch_taken_0x2f4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4120u;
        // 0x2f4124: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4120) {
            ctx->pc = 0x2F4310u;
            goto label_2f4310;
        }
    }
    ctx->pc = 0x2F4128u;
label_2f4128:
    // 0x2f4128: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x2f4128u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_2f412c:
    // 0x2f412c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x2f412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x2f4130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4130u;
    {
        const bool branch_taken_0x2f4130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4130u;
        // 0x2f4134: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4130) {
            ctx->pc = 0x2F4148u;
            goto label_2f4148;
        }
    }
    ctx->pc = 0x2F4138u;
    // 0x2f4138: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f413c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F413Cu;
    {
        const bool branch_taken_0x2f413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F413Cu;
        // 0x2f4140: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f413c) {
            ctx->pc = 0x2F4168u;
            goto label_2f4168;
        }
    }
    ctx->pc = 0x2F4144u;
    // 0x2f4144: 0x0  nop
    ctx->pc = 0x2f4144u;
    // NOP
label_2f4148:
    // 0x2f4148: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x2f4148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x2f414c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F414Cu;
    {
        const bool branch_taken_0x2f414c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F414Cu;
        // 0x2f4150: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f414c) {
            ctx->pc = 0x2F4160u;
            goto label_2f4160;
        }
    }
    ctx->pc = 0x2F4154u;
    // 0x2f4154: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f4158: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4158u;
    {
        const bool branch_taken_0x2f4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4158u;
        // 0x2f415c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4158) {
            ctx->pc = 0x2F4168u;
            goto label_2f4168;
        }
    }
    ctx->pc = 0x2F4160u;
label_2f4160:
    // 0x2f4160: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f4164: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x2f4164u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4168:
    // 0x2f4168: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F4168u;
    {
        const bool branch_taken_0x2f4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4168u;
        // 0x2f416c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4168) {
            ctx->pc = 0x2F41DCu;
            goto label_2f41dc;
        }
    }
    ctx->pc = 0x2F4170u;
label_2f4170:
    // 0x2f4170: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f4174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4174u;
    {
        const bool branch_taken_0x2f4174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4174u;
        // 0x2f4178: 0x244293c0  addiu       $v0, $v0, -0x6C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4174) {
            ctx->pc = 0x2F4188u;
            goto label_2f4188;
        }
    }
    ctx->pc = 0x2F417Cu;
    // 0x2f417c: 0x0  nop
    ctx->pc = 0x2f417cu;
    // NOP
label_2f4180:
    // 0x2f4180: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f4184: 0x244293a0  addiu       $v0, $v0, -0x6C60
    ctx->pc = 0x2f4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939552));
label_2f4188:
    // 0x2f4188: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x2f4188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2f418c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x2f418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
    // 0x2f4190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4190u;
    {
        const bool branch_taken_0x2f4190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4190u;
        // 0x2f4194: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4190) {
            ctx->pc = 0x2F41A8u;
            goto label_2f41a8;
        }
    }
    ctx->pc = 0x2F4198u;
    // 0x2f4198: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f4198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f419c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F419Cu;
    {
        const bool branch_taken_0x2f419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F419Cu;
        // 0x2f41a0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f419c) {
            ctx->pc = 0x2F41C8u;
            goto label_2f41c8;
        }
    }
    ctx->pc = 0x2F41A4u;
    // 0x2f41a4: 0x0  nop
    ctx->pc = 0x2f41a4u;
    // NOP
label_2f41a8:
    // 0x2f41a8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x2f41a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x2f41ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F41ACu;
    {
        const bool branch_taken_0x2f41ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41ACu;
        // 0x2f41b0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41ac) {
            ctx->pc = 0x2F41C0u;
            goto label_2f41c0;
        }
    }
    ctx->pc = 0x2F41B4u;
    // 0x2f41b4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f41b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f41b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F41B8u;
    {
        const bool branch_taken_0x2f41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41B8u;
        // 0x2f41bc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41b8) {
            ctx->pc = 0x2F41C8u;
            goto label_2f41c8;
        }
    }
    ctx->pc = 0x2F41C0u;
label_2f41c0:
    // 0x2f41c0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2f41c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2f41c4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x2f41c4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f41c8:
    // 0x2f41c8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f41cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F41CCu;
    {
        const bool branch_taken_0x2f41cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41CCu;
        // 0x2f41d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41cc) {
            ctx->pc = 0x2F41DCu;
            goto label_2f41dc;
        }
    }
    ctx->pc = 0x2F41D4u;
    // 0x2f41d4: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x2f41d8: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x2f41d8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_2f41dc:
    // 0x2f41dc: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2f41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2f41e0:
    // 0x2f41e0: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F41E0u;
    {
        const bool branch_taken_0x2f41e0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2F41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41E0u;
        // 0x2f41e4: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41e0) {
            ctx->pc = 0x2F41F0u;
            goto label_2f41f0;
        }
    }
    ctx->pc = 0x2F41E8u;
    // 0x2f41e8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x2f41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2f41ec: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x2f41ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_2f41f0:
    // 0x2f41f0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F41F0u;
    {
        const bool branch_taken_0x2f41f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F0u;
        // 0x2f41f4: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41f0) {
            ctx->pc = 0x2F4204u;
            goto label_2f4204;
        }
    }
    ctx->pc = 0x2F41F8u;
    // 0x2f41f8: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x2f41f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2f41fc: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x2F41FCu;
    {
        const bool branch_taken_0x2f41fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41FCu;
        // 0x2f4200: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41fc) {
            ctx->pc = 0x2F42F4u;
            goto label_2f42f4;
        }
    }
    ctx->pc = 0x2F4204u;
label_2f4204:
    // 0x2f4204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4208: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F4208u;
    {
        const bool branch_taken_0x2f4208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4208u;
        // 0x2f420c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4208) {
            ctx->pc = 0x2F42A4u;
            goto label_2f42a4;
        }
    }
    ctx->pc = 0x2F4210u;
    // 0x2f4210: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4210u;
    {
        const bool branch_taken_0x2f4210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4210u;
        // 0x2f4214: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4210) {
            ctx->pc = 0x2F4238u;
            goto label_2f4238;
        }
    }
    ctx->pc = 0x2F4218u;
    // 0x2f4218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f421c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F421Cu;
    {
        const bool branch_taken_0x2f421c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F421Cu;
        // 0x2f4220: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f421c) {
            ctx->pc = 0x2F42C0u;
            goto label_2f42c0;
        }
    }
    ctx->pc = 0x2F4224u;
    // 0x2f4224: 0x245593d8  addiu       $s5, $v0, -0x6C28
    ctx->pc = 0x2f4224u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939608));
    // 0x2f4228: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2F4228u;
    SET_GPR_U32(ctx, 31, 0x2F4230u);
    ctx->pc = 0x2F422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4228u;
    // 0x2f422c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2F4228u, 0x2F4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4230u;
label_2f4230:
    // 0x2f4230: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F4230u;
    {
        const bool branch_taken_0x2f4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4230u;
        // 0x2f4234: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4230) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F4238u;
label_2f4238:
    // 0x2f4238: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x2f4238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x2f423c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x2f423cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x2f4240: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2f4240u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2f4244: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2f4244u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2f4248: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f424c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F424Cu;
    {
        const bool branch_taken_0x2f424c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F424Cu;
        // 0x2f4250: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f424c) {
            ctx->pc = 0x2F4238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4238;
        }
    }
    ctx->pc = 0x2F4254u;
    // 0x2f4254: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f4258: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F4258u;
    {
        const bool branch_taken_0x2f4258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4258u;
        // 0x2f425c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4258) {
            ctx->pc = 0x2F42F0u;
            goto label_2f42f0;
        }
    }
    ctx->pc = 0x2F4260u;
    // 0x2f4260: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F4260u;
    {
        const bool branch_taken_0x2f4260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4260) {
            ctx->pc = 0x2F4264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4260u;
            // 0x2f4264: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F42F4u;
            goto label_2f42f4;
        }
    }
    ctx->pc = 0x2F4268u;
    // 0x2f4268: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2f426c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F426Cu;
    {
        const bool branch_taken_0x2f426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F426Cu;
        // 0x2f4270: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f426c) {
            ctx->pc = 0x2F42F0u;
            goto label_2f42f0;
        }
    }
    ctx->pc = 0x2F4274u;
    // 0x2f4274: 0x0  nop
    ctx->pc = 0x2f4274u;
    // NOP
label_2f4278:
    // 0x2f4278: 0xc0be980  jal         func_2FA600
    ctx->pc = 0x2F4278u;
    SET_GPR_U32(ctx, 31, 0x2F4280u);
    ctx->pc = 0x2F427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4278u;
    // 0x2f427c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA600u, 0x2F4278u, 0x2F4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4280u;
label_2f4280:
    // 0x2f4280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4284: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x2f4284u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x2f4288: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2f4288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2f428c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4290: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f4290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4294: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x2F4294u;
    SET_GPR_U32(ctx, 31, 0x2F429Cu);
    ctx->pc = 0x2F4298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4294u;
    // 0x2f4298: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x2F4294u, 0x2F429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F429Cu;
label_2f429c:
    // 0x2f429c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f429cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42a0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2f42a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2f42a4:
    // 0x2f42a4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F42A4u;
    {
        const bool branch_taken_0x2f42a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42A4u;
        // 0x2f42a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42a4) {
            ctx->pc = 0x2F4278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4278;
        }
    }
    ctx->pc = 0x2F42ACu;
    // 0x2f42ac: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x2f42acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x2f42b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2f42b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2f42b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f42b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F42B8u;
    {
        const bool branch_taken_0x2f42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B8u;
        // 0x2f42bc: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42b8) {
            ctx->pc = 0x2F42F0u;
            goto label_2f42f0;
        }
    }
    ctx->pc = 0x2F42C0u;
label_2f42c0:
    // 0x2f42c0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2f42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f42c4: 0x0  nop
    ctx->pc = 0x2f42c4u;
    // NOP
label_2f42c8:
    // 0x2f42c8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x2f42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2f42cc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x2f42ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x2f42d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f42d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f42d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f42d8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2f42d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2f42dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f42e0: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x2f42e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x2f42e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f42e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f42e8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F42E8u;
    {
        const bool branch_taken_0x2f42e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42E8u;
        // 0x2f42ec: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42e8) {
            ctx->pc = 0x2F42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f42c8;
        }
    }
    ctx->pc = 0x2F42F0u;
label_2f42f0:
    // 0x2f42f0: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x2f42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_2f42f4:
    // 0x2f42f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F42F4u;
    {
        const bool branch_taken_0x2f42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42F4u;
        // 0x2f42f8: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42f4) {
            ctx->pc = 0x2F4314u;
            goto label_2f4314;
        }
    }
    ctx->pc = 0x2F42FCu;
    // 0x2f42fc: 0x0  nop
    ctx->pc = 0x2f42fcu;
    // NOP
label_2f4300:
    // 0x2f4300: 0x12200363  beqz        $s1, . + 4 + (0x363 << 2)
    ctx->pc = 0x2F4300u;
    {
        const bool branch_taken_0x2f4300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4300u;
        // 0x2f4304: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4300) {
            ctx->pc = 0x2F5090u;
            goto label_2f5090;
        }
    }
    ctx->pc = 0x2F4308u;
    // 0x2f4308: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2f4308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f430c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x2f430cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_2f4310:
    // 0x2f4310: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x2f4310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2f4314:
    // 0x2f4314: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2f4318: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2f4318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f431c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f431cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4320: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x2f4320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2f4324: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2f4324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2f4328: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x2f4328u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x2f432c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x2f432cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x2f4330: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x2f4330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
    // 0x2f4334: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4334u;
    {
        const bool branch_taken_0x2f4334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4334u;
        // 0x2f4338: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4334) {
            ctx->pc = 0x2F4348u;
            goto label_2f4348;
        }
    }
    ctx->pc = 0x2F433Cu;
    // 0x2f433c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f433cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f4340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4340u;
    {
        const bool branch_taken_0x2f4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4340u;
        // 0x2f4344: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4340) {
            ctx->pc = 0x2F4358u;
            goto label_2f4358;
        }
    }
    ctx->pc = 0x2F4348u;
label_2f4348:
    // 0x2f4348: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x2f4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2f434c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x2f434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x2f4350: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2f4350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4354: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x2f4354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
label_2f4358:
    // 0x2f4358: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x2f4358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
    // 0x2f435c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F435Cu;
    {
        const bool branch_taken_0x2f435c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F435Cu;
        // 0x2f4360: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f435c) {
            ctx->pc = 0x2F4448u;
            goto label_2f4448;
        }
    }
    ctx->pc = 0x2F4364u;
    // 0x2f4364: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x2f4364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2f4368: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x2f4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2f436c: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x2f436cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f4370: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F4370u;
    {
        const bool branch_taken_0x2f4370 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4370u;
        // 0x2f4374: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4370) {
            ctx->pc = 0x2F4448u;
            goto label_2f4448;
        }
    }
    ctx->pc = 0x2F4378u;
    // 0x2f4378: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F4378u;
    {
        const bool branch_taken_0x2f4378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4378u;
        // 0x2f437c: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4378) {
            ctx->pc = 0x2F43F8u;
            goto label_2f43f8;
        }
    }
    ctx->pc = 0x2F4380u;
    // 0x2f4380: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f4380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4384: 0x24f49370  addiu       $s4, $a3, -0x6C90
    ctx->pc = 0x2f4384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939504));
    // 0x2f4388: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x2f4388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x2f438c: 0x0  nop
    ctx->pc = 0x2f438cu;
    // NOP
label_2f4390:
    // 0x2f4390: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x2f4390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2f4394: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4398: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f439c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f43a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f43a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f43a8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f43a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f43ac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f43acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f43b0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F43B0u;
    {
        const bool branch_taken_0x2f43b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B0u;
        // 0x2f43b4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43b0) {
            ctx->pc = 0x2F43E0u;
            goto label_2f43e0;
        }
    }
    ctx->pc = 0x2F43B8u;
    // 0x2f43b8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f43bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f43bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f43c0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x2f43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x2f43c4: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F43C4u;
    SET_GPR_U32(ctx, 31, 0x2F43CCu);
    ctx->pc = 0x2F43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F43C4u;
    // 0x2f43c8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F43C4u, 0x2F43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F43CCu;
label_2f43cc:
    // 0x2f43cc: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x2f43ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2f43d0: 0x14400337  bnez        $v0, . + 4 + (0x337 << 2)
    ctx->pc = 0x2F43D0u;
    {
        const bool branch_taken_0x2f43d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43D0u;
        // 0x2f43d4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43d0) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F43D8u;
    // 0x2f43d8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f43dc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f43dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f43e0:
    // 0x2f43e0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f43e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f43e4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f43e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f43e8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F43E8u;
    {
        const bool branch_taken_0x2f43e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f43e8) {
            ctx->pc = 0x2F43ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F43E8u;
            // 0x2f43ec: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4390;
        }
    }
    ctx->pc = 0x2F43F0u;
    // 0x2f43f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F43F0u;
    {
        const bool branch_taken_0x2f43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43f0) {
            ctx->pc = 0x2F43FCu;
            goto label_2f43fc;
        }
    }
    ctx->pc = 0x2F43F8u;
label_2f43f8:
    // 0x2f43f8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f43fc:
    // 0x2f43fc: 0x24e29370  addiu       $v0, $a3, -0x6C90
    ctx->pc = 0x2f43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939504));
    // 0x2f4400: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4404: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4408: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f440c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4410: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4414: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f4414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4418: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4418u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f441c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f441cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4420: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4420u;
    {
        const bool branch_taken_0x2f4420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4420u;
        // 0x2f4424: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4420) {
            ctx->pc = 0x2F4444u;
            goto label_2f4444;
        }
    }
    ctx->pc = 0x2F4428u;
    // 0x2f4428: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f442c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F442Cu;
    SET_GPR_U32(ctx, 31, 0x2F4434u);
    ctx->pc = 0x2F4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F442Cu;
    // 0x2f4430: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F442Cu, 0x2F4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4434u;
label_2f4434:
    // 0x2f4434: 0x1440031f  bnez        $v0, . + 4 + (0x31F << 2)
    ctx->pc = 0x2F4434u;
    {
        const bool branch_taken_0x2f4434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4434u;
        // 0x2f4438: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4434) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F443Cu;
    // 0x2f443c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4440: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4444:
    // 0x2f4444: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x2f4444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_2f4448:
    // 0x2f4448: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F4448u;
    {
        const bool branch_taken_0x2f4448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4448u;
        // 0x2f444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4448) {
            ctx->pc = 0x2F44A0u;
            goto label_2f44a0;
        }
    }
    ctx->pc = 0x2F4450u;
    // 0x2f4450: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x2f4450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x2f4454: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4458: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2f4458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2f445c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f445cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4460: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f446c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4470: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4470u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4474: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4478: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F4478u;
    {
        const bool branch_taken_0x2f4478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4478u;
        // 0x2f447c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4478) {
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F4480u;
    // 0x2f4480: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4484: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4484u;
    SET_GPR_U32(ctx, 31, 0x2F448Cu);
    ctx->pc = 0x2F4488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4484u;
    // 0x2f4488: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4484u, 0x2F448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F448Cu;
label_2f448c:
    // 0x2f448c: 0x14400309  bnez        $v0, . + 4 + (0x309 << 2)
    ctx->pc = 0x2F448Cu;
    {
        const bool branch_taken_0x2f448c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F448Cu;
        // 0x2f4490: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f448c) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4494u;
    // 0x2f4494: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4498: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2F4498u;
    {
        const bool branch_taken_0x2f4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4498u;
        // 0x2f449c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4498) {
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F44A0u;
label_2f44a0:
    // 0x2f44a0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x2f44a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x2f44a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F44A4u;
    {
        const bool branch_taken_0x2f44a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44A4u;
        // 0x2f44a8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44a4) {
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F44ACu;
    // 0x2f44ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f44acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f44b0: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x2f44b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f44b4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2f44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2f44b8: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x2f44b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f44bc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x2f44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x2f44c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2f44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2f44c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f44c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f44c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f44cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f44d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f44d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2f44d8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f44d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f44dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f44e0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F44E0u;
    {
        const bool branch_taken_0x2f44e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44E0u;
        // 0x2f44e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44e0) {
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F44E8u;
    // 0x2f44e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f44ec: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F44ECu;
    SET_GPR_U32(ctx, 31, 0x2F44F4u);
    ctx->pc = 0x2F44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44ECu;
    // 0x2f44f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F44ECu, 0x2F44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44F4u;
label_2f44f4:
    // 0x2f44f4: 0x144002ef  bnez        $v0, . + 4 + (0x2EF << 2)
    ctx->pc = 0x2F44F4u;
    {
        const bool branch_taken_0x2f44f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44F4u;
        // 0x2f44f8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44f4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F44FCu;
    // 0x2f44fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f44fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4500: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f4500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4504:
    // 0x2f4504: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f4508: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f450c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2F450Cu;
    {
        const bool branch_taken_0x2f450c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F450Cu;
        // 0x2f4510: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f450c) {
            ctx->pc = 0x2F45F8u;
            goto label_2f45f8;
        }
    }
    ctx->pc = 0x2F4514u;
    // 0x2f4514: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2f4514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2f4518: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x2f4518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2f451c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x2f451cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f4520: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F4520u;
    {
        const bool branch_taken_0x2f4520 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4520u;
        // 0x2f4524: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4520) {
            ctx->pc = 0x2F45F8u;
            goto label_2f45f8;
        }
    }
    ctx->pc = 0x2F4528u;
    // 0x2f4528: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f452c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F452Cu;
    {
        const bool branch_taken_0x2f452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F452Cu;
        // 0x2f4530: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f452c) {
            ctx->pc = 0x2F45A8u;
            goto label_2f45a8;
        }
    }
    ctx->pc = 0x2F4534u;
    // 0x2f4534: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f4534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4538: 0x24f49380  addiu       $s4, $a3, -0x6C80
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f453c: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x2f453cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_2f4540:
    // 0x2f4540: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x2f4540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2f4544: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4548: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f454c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4554: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4558: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4558u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f455c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4560: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F4560u;
    {
        const bool branch_taken_0x2f4560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4560u;
        // 0x2f4564: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4560) {
            ctx->pc = 0x2F4590u;
            goto label_2f4590;
        }
    }
    ctx->pc = 0x2F4568u;
    // 0x2f4568: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f456c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4570: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x2f4570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x2f4574: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4574u;
    SET_GPR_U32(ctx, 31, 0x2F457Cu);
    ctx->pc = 0x2F4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4574u;
    // 0x2f4578: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4574u, 0x2F457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F457Cu;
label_2f457c:
    // 0x2f457c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x2f457cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2f4580: 0x144002cb  bnez        $v0, . + 4 + (0x2CB << 2)
    ctx->pc = 0x2F4580u;
    {
        const bool branch_taken_0x2f4580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4580u;
        // 0x2f4584: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4580) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4588u;
    // 0x2f4588: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f4588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f458c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f458cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4590:
    // 0x2f4590: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4594: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4598: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F4598u;
    {
        const bool branch_taken_0x2f4598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4598) {
            ctx->pc = 0x2F459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4598u;
            // 0x2f459c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4540;
        }
    }
    ctx->pc = 0x2F45A0u;
    // 0x2f45a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F45A0u;
    {
        const bool branch_taken_0x2f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A0u;
        // 0x2f45a4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a0) {
            ctx->pc = 0x2F45ACu;
            goto label_2f45ac;
        }
    }
    ctx->pc = 0x2F45A8u;
label_2f45a8:
    // 0x2f45a8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f45ac:
    // 0x2f45ac: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f45acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f45b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f45b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f45b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f45b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f45bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f45c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f45c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f45c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f45c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f45cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f45d0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F45D0u;
    {
        const bool branch_taken_0x2f45d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45D0u;
        // 0x2f45d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45d0) {
            ctx->pc = 0x2F45F4u;
            goto label_2f45f4;
        }
    }
    ctx->pc = 0x2F45D8u;
    // 0x2f45d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f45dc: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F45DCu;
    SET_GPR_U32(ctx, 31, 0x2F45E4u);
    ctx->pc = 0x2F45E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F45DCu;
    // 0x2f45e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F45DCu, 0x2F45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F45E4u;
label_2f45e4:
    // 0x2f45e4: 0x144002b3  bnez        $v0, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x2F45E4u;
    {
        const bool branch_taken_0x2f45e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45E4u;
        // 0x2f45e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45e4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F45ECu;
    // 0x2f45ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f45f0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f45f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f45f4:
    // 0x2f45f4: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x2f45f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2f45f8:
    // 0x2f45f8: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x2f45f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2f45fc: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F45FCu;
    {
        const bool branch_taken_0x2f45fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45FCu;
        // 0x2f4600: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45fc) {
            ctx->pc = 0x2F46D8u;
            goto label_2f46d8;
        }
    }
    ctx->pc = 0x2F4604u;
    // 0x2f4604: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4608: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F4608u;
    {
        const bool branch_taken_0x2f4608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4608u;
        // 0x2f460c: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4608) {
            ctx->pc = 0x2F4688u;
            goto label_2f4688;
        }
    }
    ctx->pc = 0x2F4610u;
    // 0x2f4610: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f4610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4614: 0x24f49380  addiu       $s4, $a3, -0x6C80
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4618: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x2f4618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x2f461c: 0x0  nop
    ctx->pc = 0x2f461cu;
    // NOP
label_2f4620:
    // 0x2f4620: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x2f4620u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2f4624: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4628: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f462c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4634: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4638: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4638u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f463c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f463cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4640: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F4640u;
    {
        const bool branch_taken_0x2f4640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4640u;
        // 0x2f4644: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4640) {
            ctx->pc = 0x2F4670u;
            goto label_2f4670;
        }
    }
    ctx->pc = 0x2F4648u;
    // 0x2f4648: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f464c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4650: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x2f4650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    // 0x2f4654: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4654u;
    SET_GPR_U32(ctx, 31, 0x2F465Cu);
    ctx->pc = 0x2F4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4654u;
    // 0x2f4658: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4654u, 0x2F465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F465Cu;
label_2f465c:
    // 0x2f465c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x2f465cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2f4660: 0x14400293  bnez        $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x2F4660u;
    {
        const bool branch_taken_0x2f4660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4660u;
        // 0x2f4664: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4660) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4668u;
    // 0x2f4668: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f466c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f466cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4670:
    // 0x2f4670: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4674: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4678: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F4678u;
    {
        const bool branch_taken_0x2f4678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4678) {
            ctx->pc = 0x2F467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4678u;
            // 0x2f467c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4620;
        }
    }
    ctx->pc = 0x2F4680u;
    // 0x2f4680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4680u;
    {
        const bool branch_taken_0x2f4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4680u;
        // 0x2f4684: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4680) {
            ctx->pc = 0x2F468Cu;
            goto label_2f468c;
        }
    }
    ctx->pc = 0x2F4688u;
label_2f4688:
    // 0x2f4688: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f468c:
    // 0x2f468c: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4690: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4690u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4694: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4698: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f469c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f46a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f46a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f46a8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f46a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f46ac: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f46acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f46b0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F46B0u;
    {
        const bool branch_taken_0x2f46b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B0u;
        // 0x2f46b4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46b0) {
            ctx->pc = 0x2F46D4u;
            goto label_2f46d4;
        }
    }
    ctx->pc = 0x2F46B8u;
    // 0x2f46b8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f46bc: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F46BCu;
    SET_GPR_U32(ctx, 31, 0x2F46C4u);
    ctx->pc = 0x2F46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46BCu;
    // 0x2f46c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F46BCu, 0x2F46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46C4u;
label_2f46c4:
    // 0x2f46c4: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x2F46C4u;
    {
        const bool branch_taken_0x2f46c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46C4u;
        // 0x2f46c8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46c4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F46CCu;
    // 0x2f46cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f46ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f46d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f46d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f46d4:
    // 0x2f46d4: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x2f46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
label_2f46d8:
    // 0x2f46d8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F46D8u;
    {
        const bool branch_taken_0x2f46d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f46d8) {
            ctx->pc = 0x2F46DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46D8u;
            // 0x2f46dc: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4700u;
            goto label_2f4700;
        }
    }
    ctx->pc = 0x2F46E0u;
    // 0x2f46e0: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x2f46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
    // 0x2f46e4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2f46e8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f46ec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f46f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f46f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f46f8: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x2F46F8u;
    {
        const bool branch_taken_0x2f46f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46F8u;
        // 0x2f46fc: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46f8) {
            ctx->pc = 0x2F4F38u;
            goto label_2f4f38;
        }
    }
    ctx->pc = 0x2F4700u;
label_2f4700:
    // 0x2f4700: 0x14400181  bnez        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x2F4700u;
    {
        const bool branch_taken_0x2f4700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4700u;
        // 0x2f4704: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4700) {
            ctx->pc = 0x2F4D08u;
            goto label_2f4d08;
        }
    }
    ctx->pc = 0x2F4708u;
    // 0x2f4708: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f470c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4710: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F4710u;
    SET_GPR_U32(ctx, 31, 0x2F4718u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F4710u, 0x2F4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4718u;
label_2f4718:
    // 0x2f4718: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F4718u;
    {
        const bool branch_taken_0x2f4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4718u;
        // 0x2f471c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4718) {
            ctx->pc = 0x2F4898u;
            goto label_2f4898;
        }
    }
    ctx->pc = 0x2F4720u;
    // 0x2f4720: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4724: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f4728: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x2f472c: 0x244293f8  addiu       $v0, $v0, -0x6C08
    ctx->pc = 0x2f472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939640));
    // 0x2f4730: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4734: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4738: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f473c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4748: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4748u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f474c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4750: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4750u;
    {
        const bool branch_taken_0x2f4750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4750u;
        // 0x2f4754: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4750) {
            ctx->pc = 0x2F4774u;
            goto label_2f4774;
        }
    }
    ctx->pc = 0x2F4758u;
    // 0x2f4758: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f475c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F475Cu;
    SET_GPR_U32(ctx, 31, 0x2F4764u);
    ctx->pc = 0x2F4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F475Cu;
    // 0x2f4760: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F475Cu, 0x2F4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4764u;
label_2f4764:
    // 0x2f4764: 0x14400253  bnez        $v0, . + 4 + (0x253 << 2)
    ctx->pc = 0x2F4764u;
    {
        const bool branch_taken_0x2f4764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4764u;
        // 0x2f4768: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4764) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F476Cu;
    // 0x2f476c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4770: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f4770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4774:
    // 0x2f4774: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2f4774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4778: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2f4778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f477c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f477cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f4780: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4780u;
    {
        const bool branch_taken_0x2f4780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4780) {
            ctx->pc = 0x2F4784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4780u;
            // 0x2f4784: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4798u;
            goto label_2f4798;
        }
    }
    ctx->pc = 0x2F4788u;
    // 0x2f4788: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f4788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f478c: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2F478Cu;
    {
        const bool branch_taken_0x2f478c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F478Cu;
        // 0x2f4790: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f478c) {
            ctx->pc = 0x2F4F6Cu;
            goto label_2f4f6c;
        }
    }
    ctx->pc = 0x2F4794u;
    // 0x2f4794: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f4798:
    // 0x2f4798: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f479c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x2f479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2f47a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f47a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f47a8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2f47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2f47ac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f47acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f47b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f47b4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f47b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f47b8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f47bc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F47BCu;
    {
        const bool branch_taken_0x2f47bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47BCu;
        // 0x2f47c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47bc) {
            ctx->pc = 0x2F47E0u;
            goto label_2f47e0;
        }
    }
    ctx->pc = 0x2F47C4u;
    // 0x2f47c4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f47c8: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F47C8u;
    SET_GPR_U32(ctx, 31, 0x2F47D0u);
    ctx->pc = 0x2F47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47C8u;
    // 0x2f47cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F47C8u, 0x2F47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D0u;
label_2f47d0:
    // 0x2f47d0: 0x14400238  bnez        $v0, . + 4 + (0x238 << 2)
    ctx->pc = 0x2F47D0u;
    {
        const bool branch_taken_0x2f47d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47D0u;
        // 0x2f47d4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47d0) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F47D8u;
    // 0x2f47d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f47d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f47dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f47dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f47e0:
    // 0x2f47e0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f47e4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f47e8: 0x1a0001e0  blez        $s0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2F47E8u;
    {
        const bool branch_taken_0x2f47e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47E8u;
        // 0x2f47ec: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47e8) {
            ctx->pc = 0x2F4F6Cu;
            goto label_2f4f6c;
        }
    }
    ctx->pc = 0x2F47F0u;
    // 0x2f47f0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f47f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f47f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F47F4u;
    {
        const bool branch_taken_0x2f47f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47F4u;
        // 0x2f47f8: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47f4) {
            ctx->pc = 0x2F4868u;
            goto label_2f4868;
        }
    }
    ctx->pc = 0x2F47FCu;
    // 0x2f47fc: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f47fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4800: 0x24f19380  addiu       $s1, $a3, -0x6C80
    ctx->pc = 0x2f4800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4804: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x2f4804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_2f4808:
    // 0x2f4808: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f4808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f480c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4810: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4814: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f481c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4820: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4820u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4824: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4828: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4828u;
    {
        const bool branch_taken_0x2f4828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4828u;
        // 0x2f482c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4828) {
            ctx->pc = 0x2F4850u;
            goto label_2f4850;
        }
    }
    ctx->pc = 0x2F4830u;
    // 0x2f4830: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4834: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f4834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4838: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4838u;
    SET_GPR_U32(ctx, 31, 0x2F4840u);
    ctx->pc = 0x2F483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4838u;
    // 0x2f483c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4838u, 0x2F4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4840u;
label_2f4840:
    // 0x2f4840: 0x1440021b  bnez        $v0, . + 4 + (0x21B << 2)
    ctx->pc = 0x2F4840u;
    {
        const bool branch_taken_0x2f4840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4840u;
        // 0x2f4844: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4840) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4848u;
    // 0x2f4848: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f4848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f484c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f484cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4850:
    // 0x2f4850: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4854: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4858: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F4858u;
    {
        const bool branch_taken_0x2f4858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4858) {
            ctx->pc = 0x2F485Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4858u;
            // 0x2f485c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4808;
        }
    }
    ctx->pc = 0x2F4860u;
    // 0x2f4860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4860u;
    {
        const bool branch_taken_0x2f4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4860u;
        // 0x2f4864: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4860) {
            ctx->pc = 0x2F486Cu;
            goto label_2f486c;
        }
    }
    ctx->pc = 0x2F4868u;
label_2f4868:
    // 0x2f4868: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f486c:
    // 0x2f486c: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4870: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4874: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4878: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f487c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4880: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4884: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4888: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4888u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f488c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f488cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4890: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x2F4890u;
    {
        const bool branch_taken_0x2f4890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4890u;
        // 0x2f4894: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4890) {
            ctx->pc = 0x2F4F44u;
            goto label_2f4f44;
        }
    }
    ctx->pc = 0x2F4898u;
label_2f4898:
    // 0x2f4898: 0x1c600079  bgtz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2F4898u;
    {
        const bool branch_taken_0x2f4898 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2F489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4898u;
        // 0x2f489c: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4898) {
            ctx->pc = 0x2F4A80u;
            goto label_2f4a80;
        }
    }
    ctx->pc = 0x2F48A0u;
    // 0x2f48a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f48a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f48a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f48a8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x2f48ac: 0x244293f8  addiu       $v0, $v0, -0x6C08
    ctx->pc = 0x2f48acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939640));
    // 0x2f48b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f48b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f48b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f48b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f48bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f48c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f48c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f48c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f48c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f48cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f48d0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F48D0u;
    {
        const bool branch_taken_0x2f48d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D0u;
        // 0x2f48d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48d0) {
            ctx->pc = 0x2F48F4u;
            goto label_2f48f4;
        }
    }
    ctx->pc = 0x2F48D8u;
    // 0x2f48d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f48dc: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F48DCu;
    SET_GPR_U32(ctx, 31, 0x2F48E4u);
    ctx->pc = 0x2F48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48DCu;
    // 0x2f48e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F48DCu, 0x2F48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48E4u;
label_2f48e4:
    // 0x2f48e4: 0x144001f3  bnez        $v0, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x2F48E4u;
    {
        const bool branch_taken_0x2f48e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48E4u;
        // 0x2f48e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48e4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F48ECu;
    // 0x2f48ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f48ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f48f0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f48f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f48f4:
    // 0x2f48f4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2f48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f48f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F48F8u;
    {
        const bool branch_taken_0x2f48f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f48f8) {
            ctx->pc = 0x2F48FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F48F8u;
            // 0x2f48fc: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4910u;
            goto label_2f4910;
        }
    }
    ctx->pc = 0x2F4900u;
    // 0x2f4900: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f4900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4904: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x2F4904u;
    {
        const bool branch_taken_0x2f4904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4904u;
        // 0x2f4908: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4904) {
            ctx->pc = 0x2F4F6Cu;
            goto label_2f4f6c;
        }
    }
    ctx->pc = 0x2F490Cu;
    // 0x2f490c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f490cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f4910:
    // 0x2f4910: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4914: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2f4918: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f491c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4920: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2f4920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x2f4924: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f492c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f492cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4930: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4934: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4934u;
    {
        const bool branch_taken_0x2f4934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4934u;
        // 0x2f4938: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4934) {
            ctx->pc = 0x2F4958u;
            goto label_2f4958;
        }
    }
    ctx->pc = 0x2F493Cu;
    // 0x2f493c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4940: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4940u;
    SET_GPR_U32(ctx, 31, 0x2F4948u);
    ctx->pc = 0x2F4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4940u;
    // 0x2f4944: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4940u, 0x2F4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4948u;
label_2f4948:
    // 0x2f4948: 0x144001da  bnez        $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x2F4948u;
    {
        const bool branch_taken_0x2f4948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4948u;
        // 0x2f494c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4948) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4950u;
    // 0x2f4950: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4954: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4958:
    // 0x2f4958: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2f4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f495c: 0x28023  negu        $s0, $v0
    ctx->pc = 0x2f495cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2f4960: 0x5a000033  blezl       $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F4960u;
    {
        const bool branch_taken_0x2f4960 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2f4960) {
            ctx->pc = 0x2F4964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4960u;
            // 0x2f4964: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4A30u;
            goto label_2f4a30;
        }
    }
    ctx->pc = 0x2F4968u;
    // 0x2f4968: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f496c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F496Cu;
    {
        const bool branch_taken_0x2f496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F496Cu;
        // 0x2f4970: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f496c) {
            ctx->pc = 0x2F49E0u;
            goto label_2f49e0;
        }
    }
    ctx->pc = 0x2F4974u;
    // 0x2f4974: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f4974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4978: 0x24f19380  addiu       $s1, $a3, -0x6C80
    ctx->pc = 0x2f4978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f497c: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x2f497cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_2f4980:
    // 0x2f4980: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f4980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f4984: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4988: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f498c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4994: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4998: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f499c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f49a0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F49A0u;
    {
        const bool branch_taken_0x2f49a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49A0u;
        // 0x2f49a4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49a0) {
            ctx->pc = 0x2F49C8u;
            goto label_2f49c8;
        }
    }
    ctx->pc = 0x2F49A8u;
    // 0x2f49a8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f49ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f49acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f49b0: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F49B0u;
    SET_GPR_U32(ctx, 31, 0x2F49B8u);
    ctx->pc = 0x2F49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49B0u;
    // 0x2f49b4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F49B0u, 0x2F49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49B8u;
label_2f49b8:
    // 0x2f49b8: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x2F49B8u;
    {
        const bool branch_taken_0x2f49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49B8u;
        // 0x2f49bc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49b8) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F49C0u;
    // 0x2f49c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f49c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f49c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f49c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f49c8:
    // 0x2f49c8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f49cc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f49ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f49d0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F49D0u;
    {
        const bool branch_taken_0x2f49d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f49d0) {
            ctx->pc = 0x2F49D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F49D0u;
            // 0x2f49d4: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4980;
        }
    }
    ctx->pc = 0x2F49D8u;
    // 0x2f49d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F49D8u;
    {
        const bool branch_taken_0x2f49d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49D8u;
        // 0x2f49dc: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49d8) {
            ctx->pc = 0x2F49E4u;
            goto label_2f49e4;
        }
    }
    ctx->pc = 0x2F49E0u;
label_2f49e0:
    // 0x2f49e0: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f49e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f49e4:
    // 0x2f49e4: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f49e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f49e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f49ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f49f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f49f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f49f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f49fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4a00: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4a00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4a04: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4a08: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4A08u;
    {
        const bool branch_taken_0x2f4a08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A08u;
        // 0x2f4a0c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a08) {
            ctx->pc = 0x2F4A2Cu;
            goto label_2f4a2c;
        }
    }
    ctx->pc = 0x2F4A10u;
    // 0x2f4a10: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4a14: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4A14u;
    SET_GPR_U32(ctx, 31, 0x2F4A1Cu);
    ctx->pc = 0x2F4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A14u;
    // 0x2f4a18: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4A14u, 0x2F4A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A1Cu;
label_2f4a1c:
    // 0x2f4a1c: 0x144001a5  bnez        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2F4A1Cu;
    {
        const bool branch_taken_0x2f4a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A1Cu;
        // 0x2f4a20: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a1c) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4A24u;
    // 0x2f4a24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4a28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f4a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4a2c:
    // 0x2f4a2c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f4a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_2f4a30:
    // 0x2f4a30: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4a34: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4a38: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4a38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4a3c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4a40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4a44: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2f4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4a48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4a4c: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x2f4a4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4a50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f4a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f4a58: 0x14a00143  bnez        $a1, . + 4 + (0x143 << 2)
    ctx->pc = 0x2F4A58u;
    {
        const bool branch_taken_0x2f4a58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A58u;
        // 0x2f4a5c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a58) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4A60u;
    // 0x2f4a60: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4a64: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4A64u;
    SET_GPR_U32(ctx, 31, 0x2F4A6Cu);
    ctx->pc = 0x2F4A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A64u;
    // 0x2f4a68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4A64u, 0x2F4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4A6Cu;
label_2f4a6c:
    // 0x2f4a6c: 0x14400191  bnez        $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x2F4A6Cu;
    {
        const bool branch_taken_0x2f4a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A6Cu;
        // 0x2f4a70: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a6c) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4A74u;
    // 0x2f4a74: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4a78: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2F4A78u;
    {
        const bool branch_taken_0x2f4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A78u;
        // 0x2f4a7c: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a78) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4A80u;
label_2f4a80:
    // 0x2f4a80: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2f4a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4a84: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F4A84u;
    {
        const bool branch_taken_0x2f4a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A84u;
        // 0x2f4a88: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a84) {
            ctx->pc = 0x2F4BF8u;
            goto label_2f4bf8;
        }
    }
    ctx->pc = 0x2F4A8Cu;
    // 0x2f4a8c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4a90: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4a94: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4a98: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4a9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4aa0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2f4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4aa8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4aa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4aac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f4ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4ab4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4AB4u;
    {
        const bool branch_taken_0x2f4ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AB4u;
        // 0x2f4ab8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ab4) {
            ctx->pc = 0x2F4ADCu;
            goto label_2f4adc;
        }
    }
    ctx->pc = 0x2F4ABCu;
    // 0x2f4abc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4ac0: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4AC0u;
    SET_GPR_U32(ctx, 31, 0x2F4AC8u);
    ctx->pc = 0x2F4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AC0u;
    // 0x2f4ac4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4AC0u, 0x2F4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4AC8u;
label_2f4ac8:
    // 0x2f4ac8: 0x1440017a  bnez        $v0, . + 4 + (0x17A << 2)
    ctx->pc = 0x2F4AC8u;
    {
        const bool branch_taken_0x2f4ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AC8u;
        // 0x2f4acc: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ac8) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4AD0u;
    // 0x2f4ad0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f4ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4ad4: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2f4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4ad8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4adc:
    // 0x2f4adc: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2f4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4ae0: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f4ae4: 0x1a000034  blez        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4AE4u;
    {
        const bool branch_taken_0x2f4ae4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AE4u;
        // 0x2f4ae8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ae4) {
            ctx->pc = 0x2F4BB8u;
            goto label_2f4bb8;
        }
    }
    ctx->pc = 0x2F4AECu;
    // 0x2f4aec: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4af0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4AF0u;
    {
        const bool branch_taken_0x2f4af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AF0u;
        // 0x2f4af4: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4af0) {
            ctx->pc = 0x2F4B68u;
            goto label_2f4b68;
        }
    }
    ctx->pc = 0x2F4AF8u;
    // 0x2f4af8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f4af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4afc: 0x24f19380  addiu       $s1, $a3, -0x6C80
    ctx->pc = 0x2f4afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4b00: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x2f4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x2f4b04: 0x0  nop
    ctx->pc = 0x2f4b04u;
    // NOP
label_2f4b08:
    // 0x2f4b08: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f4b0c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4b10: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4b14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4b18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4b1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4b20: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4b20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4b24: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4b28: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4B28u;
    {
        const bool branch_taken_0x2f4b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B28u;
        // 0x2f4b2c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b28) {
            ctx->pc = 0x2F4B50u;
            goto label_2f4b50;
        }
    }
    ctx->pc = 0x2F4B30u;
    // 0x2f4b30: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4b34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4b38: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4B38u;
    SET_GPR_U32(ctx, 31, 0x2F4B40u);
    ctx->pc = 0x2F4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B38u;
    // 0x2f4b3c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4B38u, 0x2F4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B40u;
label_2f4b40:
    // 0x2f4b40: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x2F4B40u;
    {
        const bool branch_taken_0x2f4b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B40u;
        // 0x2f4b44: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b40) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4B48u;
    // 0x2f4b48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4b4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4b4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b50:
    // 0x2f4b50: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4b54: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4b58: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F4B58u;
    {
        const bool branch_taken_0x2f4b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4b58) {
            ctx->pc = 0x2F4B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4B58u;
            // 0x2f4b5c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4b08;
        }
    }
    ctx->pc = 0x2F4B60u;
    // 0x2f4b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4B60u;
    {
        const bool branch_taken_0x2f4b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b60) {
            ctx->pc = 0x2F4B6Cu;
            goto label_2f4b6c;
        }
    }
    ctx->pc = 0x2F4B68u;
label_2f4b68:
    // 0x2f4b68: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f4b6c:
    // 0x2f4b6c: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4b70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4b74: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4b78: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4b7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4b84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4b88: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4b88u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4b8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4b90: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4B90u;
    {
        const bool branch_taken_0x2f4b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B90u;
        // 0x2f4b94: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b90) {
            ctx->pc = 0x2F4BB4u;
            goto label_2f4bb4;
        }
    }
    ctx->pc = 0x2F4B98u;
    // 0x2f4b98: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4b9c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4B9Cu;
    SET_GPR_U32(ctx, 31, 0x2F4BA4u);
    ctx->pc = 0x2F4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B9Cu;
    // 0x2f4ba0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4B9Cu, 0x2F4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4BA4u;
label_2f4ba4:
    // 0x2f4ba4: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2F4BA4u;
    {
        const bool branch_taken_0x2f4ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BA4u;
        // 0x2f4ba8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ba4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4BACu;
    // 0x2f4bac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4bb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f4bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4bb4:
    // 0x2f4bb4: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f4bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_2f4bb8:
    // 0x2f4bb8: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2F4BB8u;
    {
        const bool branch_taken_0x2f4bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BB8u;
        // 0x2f4bbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bb8) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4BC0u;
    // 0x2f4bc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f4bc4: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2f4bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2f4bc8: 0x24429400  addiu       $v0, $v0, -0x6C00
    ctx->pc = 0x2f4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939648));
    // 0x2f4bcc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4bd0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4bd4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4be0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4be4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4be4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4be8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4bec: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F4BECu;
    {
        const bool branch_taken_0x2f4bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BECu;
        // 0x2f4bf0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bec) {
            ctx->pc = 0x2F4F44u;
            goto label_2f4f44;
        }
    }
    ctx->pc = 0x2F4BF4u;
    // 0x2f4bf4: 0x0  nop
    ctx->pc = 0x2f4bf4u;
    // NOP
label_2f4bf8:
    // 0x2f4bf8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x2f4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4bfc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4c00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4c04: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4c0c: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x2f4c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4c14: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4c14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4c18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f4c1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f4c20: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4C20u;
    {
        const bool branch_taken_0x2f4c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C20u;
        // 0x2f4c24: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c20) {
            ctx->pc = 0x2F4C48u;
            goto label_2f4c48;
        }
    }
    ctx->pc = 0x2F4C28u;
    // 0x2f4c28: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4c2c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4C2Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C34u);
    ctx->pc = 0x2F4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C2Cu;
    // 0x2f4c30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4C2Cu, 0x2F4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C34u;
label_2f4c34:
    // 0x2f4c34: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x2F4C34u;
    {
        const bool branch_taken_0x2f4c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C34u;
        // 0x2f4c38: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c34) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4C3Cu;
    // 0x2f4c3c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4c40: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x2f4c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4c44: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f4c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c48:
    // 0x2f4c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4c4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f4c50: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2f4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2f4c54: 0x24429400  addiu       $v0, $v0, -0x6C00
    ctx->pc = 0x2f4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939648));
    // 0x2f4c58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4c5c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4c60: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4c64: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x2f4c64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x2f4c68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4c6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4c74: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4c74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4c78: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4c7c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4C7Cu;
    {
        const bool branch_taken_0x2f4c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C7Cu;
        // 0x2f4c80: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c7c) {
            ctx->pc = 0x2F4CA0u;
            goto label_2f4ca0;
        }
    }
    ctx->pc = 0x2F4C84u;
    // 0x2f4c84: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4c88: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4C88u;
    SET_GPR_U32(ctx, 31, 0x2F4C90u);
    ctx->pc = 0x2F4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C88u;
    // 0x2f4c8c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4C88u, 0x2F4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C90u;
label_2f4c90:
    // 0x2f4c90: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2F4C90u;
    {
        const bool branch_taken_0x2f4c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C90u;
        // 0x2f4c94: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c90) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4C98u;
    // 0x2f4c98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4c9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f4c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ca0:
    // 0x2f4ca0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2f4ca4: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4ca8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4cac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4cb0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4cb4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4cb8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4cbc: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2f4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4cc0: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2f4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2f4cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4cc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4ccc: 0x28660008  slti        $a2, $v1, 0x8
    ctx->pc = 0x2f4cccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4cd0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2f4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f4cd4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f4cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2f4cd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f4cdc: 0x14c000a2  bnez        $a2, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2F4CDCu;
    {
        const bool branch_taken_0x2f4cdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CDCu;
        // 0x2f4ce0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cdc) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4CE4u;
    // 0x2f4ce4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4ce8: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4CE8u;
    SET_GPR_U32(ctx, 31, 0x2F4CF0u);
    ctx->pc = 0x2F4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CE8u;
    // 0x2f4cec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4CE8u, 0x2F4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CF0u;
label_2f4cf0:
    // 0x2f4cf0: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x2F4CF0u;
    {
        const bool branch_taken_0x2f4cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CF0u;
        // 0x2f4cf4: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cf0) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4CF8u;
    // 0x2f4cf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4cfc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2F4CFCu;
    {
        const bool branch_taken_0x2f4cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CFCu;
        // 0x2f4d00: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cfc) {
            ctx->pc = 0x2F4F68u;
            goto label_2f4f68;
        }
    }
    ctx->pc = 0x2F4D04u;
    // 0x2f4d04: 0x0  nop
    ctx->pc = 0x2f4d04u;
    // NOP
label_2f4d08:
    // 0x2f4d08: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f4d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f4d0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4D0Cu;
    {
        const bool branch_taken_0x2f4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4d0c) {
            ctx->pc = 0x2F4D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4D0Cu;
            // 0x2f4d10: 0x92a30000  lbu         $v1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4D24u;
            goto label_2f4d24;
        }
    }
    ctx->pc = 0x2F4D14u;
    // 0x2f4d14: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2f4d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2f4d18: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2F4D18u;
    {
        const bool branch_taken_0x2f4d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D18u;
        // 0x2f4d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d18) {
            ctx->pc = 0x2F4ED0u;
            goto label_2f4ed0;
        }
    }
    ctx->pc = 0x2F4D20u;
    // 0x2f4d20: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x2f4d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2f4d24:
    // 0x2f4d24: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f4d24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2f4d28: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2f4d2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4d30: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x2f4d30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f4d34: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x2f4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2f4d38: 0xa3a401c1  sb          $a0, 0x1C1($sp)
    ctx->pc = 0x2f4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f4d3c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x2f4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x2f4d40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4d44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4d44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4d48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4d4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4d54: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2f4d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2f4d58: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4d58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4d5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4d60: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4D60u;
    {
        const bool branch_taken_0x2f4d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D60u;
        // 0x2f4d64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d60) {
            ctx->pc = 0x2F4D84u;
            goto label_2f4d84;
        }
    }
    ctx->pc = 0x2F4D68u;
    // 0x2f4d68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4d6c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D74u);
    ctx->pc = 0x2F4D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D6Cu;
    // 0x2f4d70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4D6Cu, 0x2F4D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D74u;
label_2f4d74:
    // 0x2f4d74: 0x144000cf  bnez        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2F4D74u;
    {
        const bool branch_taken_0x2f4d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D74u;
        // 0x2f4d78: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d74) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4D7Cu;
    // 0x2f4d7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f4d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4d80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f4d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d84:
    // 0x2f4d84: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x2f4d84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2f4d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d8c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D94u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2F4D8Cu, 0x2F4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D94u;
label_2f4d94:
    // 0x2f4d94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F4D94u;
    {
        const bool branch_taken_0x2f4d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D94u;
        // 0x2f4d98: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d94) {
            ctx->pc = 0x2F4DF8u;
            goto label_2f4df8;
        }
    }
    ctx->pc = 0x2F4D9Cu;
    // 0x2f4d9c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2f4da0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2f4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f4da8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4dac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4db0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4db4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4db8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2f4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2f4dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4dc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f4dc4: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x2f4dc4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f4dcc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f4dd0: 0x14a00051  bnez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F4DD0u;
    {
        const bool branch_taken_0x2f4dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DD0u;
        // 0x2f4dd4: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dd0) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4DD8u;
    // 0x2f4dd8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4ddc: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4DDCu;
    SET_GPR_U32(ctx, 31, 0x2F4DE4u);
    ctx->pc = 0x2F4DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DDCu;
    // 0x2f4de0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4DDCu, 0x2F4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DE4u;
label_2f4de4:
    // 0x2f4de4: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2F4DE4u;
    {
        const bool branch_taken_0x2f4de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DE4u;
        // 0x2f4de8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4de4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4DECu;
    // 0x2f4dec: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4df0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F4DF0u;
    {
        const bool branch_taken_0x2f4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DF0u;
        // 0x2f4df4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4df0) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4DF8u;
label_2f4df8:
    // 0x2f4df8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2f4df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f4dfc: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F4DFCu;
    {
        const bool branch_taken_0x2f4dfc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DFCu;
        // 0x2f4e00: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dfc) {
            ctx->pc = 0x2F4F1Cu;
            goto label_2f4f1c;
        }
    }
    ctx->pc = 0x2F4E04u;
    // 0x2f4e04: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4e08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4E08u;
    {
        const bool branch_taken_0x2f4e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E08u;
        // 0x2f4e0c: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e08) {
            ctx->pc = 0x2F4E80u;
            goto label_2f4e80;
        }
    }
    ctx->pc = 0x2F4E10u;
    // 0x2f4e10: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f4e10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4e14: 0x24f19380  addiu       $s1, $a3, -0x6C80
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4e18: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x2f4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x2f4e1c: 0x0  nop
    ctx->pc = 0x2f4e1cu;
    // NOP
label_2f4e20:
    // 0x2f4e20: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f4e24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4e28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4e2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4e34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4e38: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4e38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4e3c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4e40: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4E40u;
    {
        const bool branch_taken_0x2f4e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E40u;
        // 0x2f4e44: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e40) {
            ctx->pc = 0x2F4E68u;
            goto label_2f4e68;
        }
    }
    ctx->pc = 0x2F4E48u;
    // 0x2f4e48: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4e4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4e50: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4E50u;
    SET_GPR_U32(ctx, 31, 0x2F4E58u);
    ctx->pc = 0x2F4E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E50u;
    // 0x2f4e54: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4E50u, 0x2F4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E58u;
label_2f4e58:
    // 0x2f4e58: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2F4E58u;
    {
        const bool branch_taken_0x2f4e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E58u;
        // 0x2f4e5c: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e58) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4E60u;
    // 0x2f4e60: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4e64: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2f4e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e68:
    // 0x2f4e68: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4e6c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4e70: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F4E70u;
    {
        const bool branch_taken_0x2f4e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e70) {
            ctx->pc = 0x2F4E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E70u;
            // 0x2f4e74: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4e20;
        }
    }
    ctx->pc = 0x2F4E78u;
    // 0x2f4e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4E78u;
    {
        const bool branch_taken_0x2f4e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E78u;
        // 0x2f4e7c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e78) {
            ctx->pc = 0x2F4E84u;
            goto label_2f4e84;
        }
    }
    ctx->pc = 0x2F4E80u;
label_2f4e80:
    // 0x2f4e80: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f4e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f4e84:
    // 0x2f4e84: 0x24e29380  addiu       $v0, $a3, -0x6C80
    ctx->pc = 0x2f4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939520));
    // 0x2f4e88: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f4e8c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4e90: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4e94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4e98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4e9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4ea0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4ea0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4ea4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4ea8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F4EA8u;
    {
        const bool branch_taken_0x2f4ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA8u;
        // 0x2f4eac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea8) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4EB0u;
    // 0x2f4eb0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4eb4: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4EB4u;
    SET_GPR_U32(ctx, 31, 0x2F4EBCu);
    ctx->pc = 0x2F4EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4EB4u;
    // 0x2f4eb8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4EB4u, 0x2F4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4EBCu;
label_2f4ebc:
    // 0x2f4ebc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2F4EBCu;
    {
        const bool branch_taken_0x2f4ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EBCu;
        // 0x2f4ec0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ebc) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4EC4u;
    // 0x2f4ec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4ec8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F4EC8u;
    {
        const bool branch_taken_0x2f4ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EC8u;
        // 0x2f4ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ec8) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4ED0u;
label_2f4ed0:
    // 0x2f4ed0: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2f4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2f4ed4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2f4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2f4ed8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4edc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4ee0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f4ee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4eec: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f4eecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4ef0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f4ef4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4EF4u;
    {
        const bool branch_taken_0x2f4ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EF4u;
        // 0x2f4ef8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ef4) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4EFCu;
    // 0x2f4efc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4f00: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4F00u;
    SET_GPR_U32(ctx, 31, 0x2F4F08u);
    ctx->pc = 0x2F4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F00u;
    // 0x2f4f04: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4F00u, 0x2F4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F08u;
label_2f4f08:
    // 0x2f4f08: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2F4F08u;
    {
        const bool branch_taken_0x2f4f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F08u;
        // 0x2f4f0c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f08) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4F10u;
    // 0x2f4f10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4f14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f18:
    // 0x2f4f18: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2f4f1c:
    // 0x2f4f1c: 0xae7d0000  sw          $sp, 0x0($s3)
    ctx->pc = 0x2f4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 29));
    // 0x2f4f20: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x2f4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x2f4f24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4f28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4f2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4f34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f4f38:
    // 0x2f4f38: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4f38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4f3c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4f40: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2f4f44:
    // 0x2f4f44: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4F44u;
    {
        const bool branch_taken_0x2f4f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F44u;
        // 0x2f4f48: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f44) {
            ctx->pc = 0x2F4F6Cu;
            goto label_2f4f6c;
        }
    }
    ctx->pc = 0x2F4F4Cu;
    // 0x2f4f4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4f50: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4F50u;
    SET_GPR_U32(ctx, 31, 0x2F4F58u);
    ctx->pc = 0x2F4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F50u;
    // 0x2f4f54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4F50u, 0x2F4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F58u;
label_2f4f58:
    // 0x2f4f58: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F4F58u;
    {
        const bool branch_taken_0x2f4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F58u;
        // 0x2f4f5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f58) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F4F60u;
    // 0x2f4f60: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4f64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f4f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f68:
    // 0x2f4f68: 0x32e20004  andi        $v0, $s7, 0x4
    ctx->pc = 0x2f4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_2f4f6c:
    // 0x2f4f6c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F4F6Cu;
    {
        const bool branch_taken_0x2f4f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F6Cu;
        // 0x2f4f70: 0x8fa301f0  lw          $v1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f6c) {
            ctx->pc = 0x2F5040u;
            goto label_2f5040;
        }
    }
    ctx->pc = 0x2F4F74u;
    // 0x2f4f74: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2f4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2f4f78: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f4f7c: 0x1a000032  blez        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F4F7Cu;
    {
        const bool branch_taken_0x2f4f7c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2F4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F7Cu;
        // 0x2f4f80: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f7c) {
            ctx->pc = 0x2F5048u;
            goto label_2f5048;
        }
    }
    ctx->pc = 0x2F4F84u;
    // 0x2f4f84: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4f88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F4F88u;
    {
        const bool branch_taken_0x2f4f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F88u;
        // 0x2f4f8c: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f88) {
            ctx->pc = 0x2F5000u;
            goto label_2f5000;
        }
    }
    ctx->pc = 0x2F4F90u;
    // 0x2f4f90: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f4f94: 0x24f19370  addiu       $s1, $a3, -0x6C90
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939504));
    // 0x2f4f98: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x2f4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x2f4f9c: 0x0  nop
    ctx->pc = 0x2f4f9cu;
    // NOP
label_2f4fa0:
    // 0x2f4fa0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x2f4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x2f4fa4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2f4fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2f4fa8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f4fac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f4fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f4fb4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f4fb8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2f4fb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f4fbc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2f4fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2f4fc0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4FC0u;
    {
        const bool branch_taken_0x2f4fc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FC0u;
        // 0x2f4fc4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fc0) {
            ctx->pc = 0x2F4FE8u;
            goto label_2f4fe8;
        }
    }
    ctx->pc = 0x2F4FC8u;
    // 0x2f4fc8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f4fcc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2f4fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f4fd0: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F4FD0u;
    SET_GPR_U32(ctx, 31, 0x2F4FD8u);
    ctx->pc = 0x2F4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FD0u;
    // 0x2f4fd4: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F4FD0u, 0x2F4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FD8u;
label_2f4fd8:
    // 0x2f4fd8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F4FD8u;
    {
        const bool branch_taken_0x2f4fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FD8u;
        // 0x2f4fdc: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fd8) {
            ctx->pc = 0x2F50B0u;
            goto label_2f50b0;
        }
    }
    ctx->pc = 0x2F4FE0u;
    // 0x2f4fe0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f4fe4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f4fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4fe8:
    // 0x2f4fe8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x2f4fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x2f4fec: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f4fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f4ff0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F4FF0u;
    {
        const bool branch_taken_0x2f4ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ff0) {
            ctx->pc = 0x2F4FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4FF0u;
            // 0x2f4ff4: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4fa0;
        }
    }
    ctx->pc = 0x2F4FF8u;
    // 0x2f4ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4FF8u;
    {
        const bool branch_taken_0x2f4ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FF8u;
        // 0x2f4ffc: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ff8) {
            ctx->pc = 0x2F5004u;
            goto label_2f5004;
        }
    }
    ctx->pc = 0x2F5000u;
label_2f5000:
    // 0x2f5000: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x2f5000u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_2f5004:
    // 0x2f5004: 0x24e29370  addiu       $v0, $a3, -0x6C90
    ctx->pc = 0x2f5004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939504));
    // 0x2f5008: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f5008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2f500c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2f500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f5010: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5018: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f501c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x2f501cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f5020: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2f5020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2f5024: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5024u;
    {
        const bool branch_taken_0x2f5024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5024u;
        // 0x2f5028: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5024) {
            ctx->pc = 0x2F5040u;
            goto label_2f5040;
        }
    }
    ctx->pc = 0x2F502Cu;
    // 0x2f502c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f5030: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F5030u;
    SET_GPR_U32(ctx, 31, 0x2F5038u);
    ctx->pc = 0x2F5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5030u;
    // 0x2f5034: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F5030u, 0x2F5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5038u;
label_2f5038:
    // 0x2f5038: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F5038u;
    {
        const bool branch_taken_0x2f5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5038u;
        // 0x2f503c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5038) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F5040u;
label_2f5040:
    // 0x2f5040: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2f5044: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2f5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2f5048:
    // 0x2f5048: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2f5048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2f504c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2f5050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5054: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x2f5054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f5058: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x2f5058u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x2f505c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2f505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f5060: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5060u;
    {
        const bool branch_taken_0x2f5060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5060u;
        // 0x2f5064: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5060) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F5068u;
    // 0x2f5068: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x2f5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2f506c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F506Cu;
    SET_GPR_U32(ctx, 31, 0x2F5074u);
    ctx->pc = 0x2F5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F506Cu;
    // 0x2f5070: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F506Cu, 0x2F5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5074u;
label_2f5074:
    // 0x2f5074: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F5074u;
    {
        const bool branch_taken_0x2f5074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5074u;
        // 0x2f5078: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5074) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F507Cu;
label_2f507c:
    // 0x2f507c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2f507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f5080: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f5080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2f5084: 0x1000fab4  b           . + 4 + (-0x54C << 2)
    ctx->pc = 0x2F5084u;
    {
        const bool branch_taken_0x2f5084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5084u;
        // 0x2f5088: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5084) {
            ctx->pc = 0x2F3B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b58;
        }
    }
    ctx->pc = 0x2F508Cu;
    // 0x2f508c: 0x0  nop
    ctx->pc = 0x2f508cu;
    // NOP
label_2f5090:
    // 0x2f5090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f5094:
    // 0x2f5094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5094u;
    {
        const bool branch_taken_0x2f5094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5094u;
        // 0x2f5098: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5094) {
            ctx->pc = 0x2F50ACu;
            goto label_2f50ac;
        }
    }
    ctx->pc = 0x2F509Cu;
    // 0x2f509c: 0xc0bce44  jal         func_2F3910
    ctx->pc = 0x2F509Cu;
    SET_GPR_U32(ctx, 31, 0x2F50A4u);
    ctx->pc = 0x2F50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F509Cu;
    // 0x2f50a0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3910u, 0x2F509Cu, 0x2F50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50A4u;
label_2f50a4:
    // 0x2f50a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F50A4u;
    {
        const bool branch_taken_0x2f50a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50A4u;
        // 0x2f50a8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50a4) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F50ACu;
label_2f50ac:
    // 0x2f50ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f50acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2f50b0:
    // 0x2f50b0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2f50b4:
    // 0x2f50b4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x2f50b8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x2f50b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f50bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f50c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2f50c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2f50c4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2f50c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2f50c8:
    // 0x2f50c8: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x2f50c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2f50cc:
    // 0x2f50cc: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x2f50ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2f50d0: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x2f50d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2f50d4: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x2f50d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2f50d8: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x2f50d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2f50dc: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x2f50dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x2f50e0: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x2f50e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2f50e4: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x2f50e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2f50e8: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x2f50e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2f50ec: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x2f50ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2f50f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F50F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50F0u;
        // 0x2f50f4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F50F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F50F8u;
}
