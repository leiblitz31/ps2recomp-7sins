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

// Function: sub_004129C8
// Address: 0x4129c8 - 0x412b08
void sub_004129C8_0x4129c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004129C8_0x4129c8");
#endif

    switch (ctx->pc) {
        case 0x4129c8u: goto label_4129c8;
        case 0x4129ccu: goto label_4129cc;
        case 0x4129d0u: goto label_4129d0;
        case 0x4129d4u: goto label_4129d4;
        case 0x4129d8u: goto label_4129d8;
        case 0x4129dcu: goto label_4129dc;
        case 0x4129e0u: goto label_4129e0;
        case 0x4129e4u: goto label_4129e4;
        case 0x4129e8u: goto label_4129e8;
        case 0x4129ecu: goto label_4129ec;
        case 0x4129f0u: goto label_4129f0;
        case 0x4129f4u: goto label_4129f4;
        case 0x4129f8u: goto label_4129f8;
        case 0x4129fcu: goto label_4129fc;
        case 0x412a00u: goto label_412a00;
        case 0x412a04u: goto label_412a04;
        case 0x412a08u: goto label_412a08;
        case 0x412a0cu: goto label_412a0c;
        case 0x412a10u: goto label_412a10;
        case 0x412a14u: goto label_412a14;
        case 0x412a18u: goto label_412a18;
        case 0x412a1cu: goto label_412a1c;
        case 0x412a20u: goto label_412a20;
        case 0x412a24u: goto label_412a24;
        case 0x412a28u: goto label_412a28;
        case 0x412a2cu: goto label_412a2c;
        case 0x412a30u: goto label_412a30;
        case 0x412a34u: goto label_412a34;
        case 0x412a38u: goto label_412a38;
        case 0x412a3cu: goto label_412a3c;
        case 0x412a40u: goto label_412a40;
        case 0x412a44u: goto label_412a44;
        case 0x412a48u: goto label_412a48;
        case 0x412a4cu: goto label_412a4c;
        case 0x412a50u: goto label_412a50;
        case 0x412a54u: goto label_412a54;
        case 0x412a58u: goto label_412a58;
        case 0x412a5cu: goto label_412a5c;
        case 0x412a60u: goto label_412a60;
        case 0x412a64u: goto label_412a64;
        case 0x412a68u: goto label_412a68;
        case 0x412a6cu: goto label_412a6c;
        case 0x412a70u: goto label_412a70;
        case 0x412a74u: goto label_412a74;
        case 0x412a78u: goto label_412a78;
        case 0x412a7cu: goto label_412a7c;
        case 0x412a80u: goto label_412a80;
        case 0x412a84u: goto label_412a84;
        case 0x412a88u: goto label_412a88;
        case 0x412a8cu: goto label_412a8c;
        case 0x412a90u: goto label_412a90;
        case 0x412a94u: goto label_412a94;
        case 0x412a98u: goto label_412a98;
        case 0x412a9cu: goto label_412a9c;
        case 0x412aa0u: goto label_412aa0;
        case 0x412aa4u: goto label_412aa4;
        case 0x412aa8u: goto label_412aa8;
        case 0x412aacu: goto label_412aac;
        case 0x412ab0u: goto label_412ab0;
        case 0x412ab4u: goto label_412ab4;
        case 0x412ab8u: goto label_412ab8;
        case 0x412abcu: goto label_412abc;
        case 0x412ac0u: goto label_412ac0;
        case 0x412ac4u: goto label_412ac4;
        case 0x412ac8u: goto label_412ac8;
        case 0x412accu: goto label_412acc;
        case 0x412ad0u: goto label_412ad0;
        case 0x412ad4u: goto label_412ad4;
        case 0x412ad8u: goto label_412ad8;
        case 0x412adcu: goto label_412adc;
        case 0x412ae0u: goto label_412ae0;
        case 0x412ae4u: goto label_412ae4;
        case 0x412ae8u: goto label_412ae8;
        case 0x412aecu: goto label_412aec;
        case 0x412af0u: goto label_412af0;
        case 0x412af4u: goto label_412af4;
        case 0x412af8u: goto label_412af8;
        case 0x412afcu: goto label_412afc;
        case 0x412b00u: goto label_412b00;
        case 0x412b04u: goto label_412b04;
        default: break;
    }

    ctx->pc = 0x4129c8u;

label_4129c8:
    // 0x4129c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4129c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4129cc:
    // 0x4129cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4129ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4129d0:
    // 0x4129d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4129d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4129d4:
    // 0x4129d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4129d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4129d8:
    // 0x4129d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4129d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4129dc:
    // 0x4129dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4129dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4129e0:
    // 0x4129e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4129e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4129e4:
    // 0x4129e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4129e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4129e8:
    // 0x4129e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4129e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4129ec:
    // 0x4129ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4129ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4129f0:
    // 0x4129f0: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x4129f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4129f4:
    // 0x4129f4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_4129f8:
    if (ctx->pc == 0x4129F8u) {
        ctx->pc = 0x4129F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129F4u;
        // 0x4129f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4129FCu;
        goto label_4129fc;
    }
    ctx->pc = 0x4129F4u;
    {
        const bool branch_taken_0x4129f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4129F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129F4u;
        // 0x4129f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4129f4) {
            ctx->pc = 0x412A30u;
            goto label_412a30;
        }
    }
    ctx->pc = 0x4129FCu;
label_4129fc:
    // 0x4129fc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4129fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_412a00:
    // 0x412a00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_412a04:
    if (ctx->pc == 0x412A04u) {
        ctx->pc = 0x412A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A00u;
        // 0x412a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A08u;
        goto label_412a08;
    }
    ctx->pc = 0x412A00u;
    {
        const bool branch_taken_0x412a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A00u;
        // 0x412a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a00) {
            ctx->pc = 0x412A24u;
            goto label_412a24;
        }
    }
    ctx->pc = 0x412A08u;
label_412a08:
    // 0x412a08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x412a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412a0c:
    // 0x412a0c: 0x40f809  jalr        $v0
label_412a10:
    if (ctx->pc == 0x412A10u) {
        ctx->pc = 0x412A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A0Cu;
        // 0x412a10: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A14u;
        goto label_412a14;
    }
    ctx->pc = 0x412A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412A14u);
        ctx->pc = 0x412A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A0Cu;
        // 0x412a10: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412A0Cu, 0x412A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412A14u;
label_412a14:
    // 0x412a14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x412a14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412a18:
    // 0x412a18: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_412a1c:
    if (ctx->pc == 0x412A1Cu) {
        ctx->pc = 0x412A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A18u;
        // 0x412a1c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A20u;
        goto label_412a20;
    }
    ctx->pc = 0x412A18u;
    {
        const bool branch_taken_0x412a18 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x412A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A18u;
        // 0x412a1c: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a18) {
            ctx->pc = 0x412A24u;
            goto label_412a24;
        }
    }
    ctx->pc = 0x412A20u;
label_412a20:
    // 0x412a20: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x412a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_412a24:
    // 0x412a24: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x412a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_412a28:
    // 0x412a28: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_412a2c:
    if (ctx->pc == 0x412A2Cu) {
        ctx->pc = 0x412A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A28u;
        // 0x412a2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A30u;
        goto label_412a30;
    }
    ctx->pc = 0x412A28u;
    {
        const bool branch_taken_0x412a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x412a28) {
            ctx->pc = 0x412A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412A28u;
            // 0x412a2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412a00;
        }
    }
    ctx->pc = 0x412A30u;
label_412a30:
    // 0x412a30: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x412a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_412a34:
    // 0x412a34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x412a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412a38:
    // 0x412a38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x412a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412a3c:
    // 0x412a3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x412a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_412a40:
    // 0x412a40: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x412a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_412a44:
    // 0x412a44: 0xc103404  jal         func_40D010
label_412a48:
    if (ctx->pc == 0x412A48u) {
        ctx->pc = 0x412A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A44u;
        // 0x412a48: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A4Cu;
        goto label_412a4c;
    }
    ctx->pc = 0x412A44u;
    SET_GPR_U32(ctx, 31, 0x412A4Cu);
    ctx->pc = 0x412A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412A44u;
    // 0x412a48: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x412A44u, 0x412A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412A4Cu;
label_412a4c:
    // 0x412a4c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_412a50:
    if (ctx->pc == 0x412A50u) {
        ctx->pc = 0x412A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A4Cu;
        // 0x412a50: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A54u;
        goto label_412a54;
    }
    ctx->pc = 0x412A4Cu;
    {
        const bool branch_taken_0x412a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412a4c) {
            ctx->pc = 0x412A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412A4Cu;
            // 0x412a50: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412A5Cu;
            goto label_412a5c;
        }
    }
    ctx->pc = 0x412A54u;
label_412a54:
    // 0x412a54: 0x10000023  b           . + 4 + (0x23 << 2)
label_412a58:
    if (ctx->pc == 0x412A58u) {
        ctx->pc = 0x412A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A54u;
        // 0x412a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A5Cu;
        goto label_412a5c;
    }
    ctx->pc = 0x412A54u;
    {
        const bool branch_taken_0x412a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A54u;
        // 0x412a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a54) {
            ctx->pc = 0x412AE4u;
            goto label_412ae4;
        }
    }
    ctx->pc = 0x412A5Cu;
label_412a5c:
    // 0x412a5c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_412a60:
    if (ctx->pc == 0x412A60u) {
        ctx->pc = 0x412A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A5Cu;
        // 0x412a60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A64u;
        goto label_412a64;
    }
    ctx->pc = 0x412A5Cu;
    {
        const bool branch_taken_0x412a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A5Cu;
        // 0x412a60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a5c) {
            ctx->pc = 0x412AE4u;
            goto label_412ae4;
        }
    }
    ctx->pc = 0x412A64u;
label_412a64:
    // 0x412a64: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x412a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_412a68:
    // 0x412a68: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_412a6c:
    if (ctx->pc == 0x412A6Cu) {
        ctx->pc = 0x412A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A68u;
        // 0x412a6c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A70u;
        goto label_412a70;
    }
    ctx->pc = 0x412A68u;
    {
        const bool branch_taken_0x412a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x412a68) {
            ctx->pc = 0x412A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412A68u;
            // 0x412a6c: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412AD8u;
            goto label_412ad8;
        }
    }
    ctx->pc = 0x412A70u;
label_412a70:
    // 0x412a70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x412a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_412a74:
    // 0x412a74: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_412a78:
    if (ctx->pc == 0x412A78u) {
        ctx->pc = 0x412A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A74u;
        // 0x412a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A7Cu;
        goto label_412a7c;
    }
    ctx->pc = 0x412A74u;
    {
        const bool branch_taken_0x412a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A74u;
        // 0x412a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a74) {
            ctx->pc = 0x412AD4u;
            goto label_412ad4;
        }
    }
    ctx->pc = 0x412A7Cu;
label_412a7c:
    // 0x412a7c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x412a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412a80:
    // 0x412a80: 0x60f809  jalr        $v1
label_412a84:
    if (ctx->pc == 0x412A84u) {
        ctx->pc = 0x412A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A80u;
        // 0x412a84: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A88u;
        goto label_412a88;
    }
    ctx->pc = 0x412A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x412A88u);
        ctx->pc = 0x412A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A80u;
        // 0x412a84: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412A80u, 0x412A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412A88u;
label_412a88:
    // 0x412a88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x412a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412a8c:
    // 0x412a8c: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_412a90:
    if (ctx->pc == 0x412A90u) {
        ctx->pc = 0x412A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A8Cu;
        // 0x412a90: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A94u;
        goto label_412a94;
    }
    ctx->pc = 0x412A8Cu;
    {
        const bool branch_taken_0x412a8c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x412A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A8Cu;
        // 0x412a90: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a8c) {
            ctx->pc = 0x412AD4u;
            goto label_412ad4;
        }
    }
    ctx->pc = 0x412A94u;
label_412a94:
    // 0x412a94: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x412a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_412a98:
    // 0x412a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x412a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412a9c:
    // 0x412a9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x412a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412aa0:
    // 0x412aa0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x412aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_412aa4:
    // 0x412aa4: 0xc103404  jal         func_40D010
label_412aa8:
    if (ctx->pc == 0x412AA8u) {
        ctx->pc = 0x412AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AA4u;
        // 0x412aa8: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412AACu;
        goto label_412aac;
    }
    ctx->pc = 0x412AA4u;
    SET_GPR_U32(ctx, 31, 0x412AACu);
    ctx->pc = 0x412AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412AA4u;
    // 0x412aa8: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x412AA4u, 0x412AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412AACu;
label_412aac:
    // 0x412aac: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_412ab0:
    if (ctx->pc == 0x412AB0u) {
        ctx->pc = 0x412AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AACu;
        // 0x412ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412AB4u;
        goto label_412ab4;
    }
    ctx->pc = 0x412AACu;
    {
        const bool branch_taken_0x412aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AACu;
        // 0x412ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412aac) {
            ctx->pc = 0x412A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412a54;
        }
    }
    ctx->pc = 0x412AB4u;
label_412ab4:
    // 0x412ab4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x412ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_412ab8:
    // 0x412ab8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x412ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412abc:
    // 0x412abc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x412abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412ac0:
    // 0x412ac0: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x412ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_412ac4:
    // 0x412ac4: 0x40f809  jalr        $v0
label_412ac8:
    if (ctx->pc == 0x412AC8u) {
        ctx->pc = 0x412AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AC4u;
        // 0x412ac8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412ACCu;
        goto label_412acc;
    }
    ctx->pc = 0x412AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412ACCu);
        ctx->pc = 0x412AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AC4u;
        // 0x412ac8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412AC4u, 0x412ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412ACCu;
label_412acc:
    // 0x412acc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_412ad0:
    if (ctx->pc == 0x412AD0u) {
        ctx->pc = 0x412AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ACCu;
        // 0x412ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412AD4u;
        goto label_412ad4;
    }
    ctx->pc = 0x412ACCu;
    {
        const bool branch_taken_0x412acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ACCu;
        // 0x412ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412acc) {
            ctx->pc = 0x412AE4u;
            goto label_412ae4;
        }
    }
    ctx->pc = 0x412AD4u;
label_412ad4:
    // 0x412ad4: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x412ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_412ad8:
    // 0x412ad8: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
label_412adc:
    if (ctx->pc == 0x412ADCu) {
        ctx->pc = 0x412ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AD8u;
        // 0x412adc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412AE0u;
        goto label_412ae0;
    }
    ctx->pc = 0x412AD8u;
    {
        const bool branch_taken_0x412ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x412ad8) {
            ctx->pc = 0x412ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412AD8u;
            // 0x412adc: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412a68;
        }
    }
    ctx->pc = 0x412AE0u;
label_412ae0:
    // 0x412ae0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x412ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_412ae4:
    // 0x412ae4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x412ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_412ae8:
    // 0x412ae8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x412ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412aec:
    // 0x412aec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x412aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412af0:
    // 0x412af0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x412af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412af4:
    // 0x412af4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x412af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412af8:
    // 0x412af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412afc:
    // 0x412afc: 0x3e00008  jr          $ra
label_412b00:
    if (ctx->pc == 0x412B00u) {
        ctx->pc = 0x412B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AFCu;
        // 0x412b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412B04u;
        goto label_412b04;
    }
    ctx->pc = 0x412AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412AFCu;
        // 0x412b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412B04u;
label_412b04:
    // 0x412b04: 0x0  nop
    ctx->pc = 0x412b04u;
    // NOP
    ctx->pc = 0x412b08u;
}
