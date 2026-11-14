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

// Function: sub_00379A00
// Address: 0x379a00 - 0x379af0
void sub_00379A00_0x379a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379A00_0x379a00");
#endif

    switch (ctx->pc) {
        case 0x379a00u: goto label_379a00;
        case 0x379a04u: goto label_379a04;
        case 0x379a08u: goto label_379a08;
        case 0x379a0cu: goto label_379a0c;
        case 0x379a10u: goto label_379a10;
        case 0x379a14u: goto label_379a14;
        case 0x379a18u: goto label_379a18;
        case 0x379a1cu: goto label_379a1c;
        case 0x379a20u: goto label_379a20;
        case 0x379a24u: goto label_379a24;
        case 0x379a28u: goto label_379a28;
        case 0x379a2cu: goto label_379a2c;
        case 0x379a30u: goto label_379a30;
        case 0x379a34u: goto label_379a34;
        case 0x379a38u: goto label_379a38;
        case 0x379a3cu: goto label_379a3c;
        case 0x379a40u: goto label_379a40;
        case 0x379a44u: goto label_379a44;
        case 0x379a48u: goto label_379a48;
        case 0x379a4cu: goto label_379a4c;
        case 0x379a50u: goto label_379a50;
        case 0x379a54u: goto label_379a54;
        case 0x379a58u: goto label_379a58;
        case 0x379a5cu: goto label_379a5c;
        case 0x379a60u: goto label_379a60;
        case 0x379a64u: goto label_379a64;
        case 0x379a68u: goto label_379a68;
        case 0x379a6cu: goto label_379a6c;
        case 0x379a70u: goto label_379a70;
        case 0x379a74u: goto label_379a74;
        case 0x379a78u: goto label_379a78;
        case 0x379a7cu: goto label_379a7c;
        case 0x379a80u: goto label_379a80;
        case 0x379a84u: goto label_379a84;
        case 0x379a88u: goto label_379a88;
        case 0x379a8cu: goto label_379a8c;
        case 0x379a90u: goto label_379a90;
        case 0x379a94u: goto label_379a94;
        case 0x379a98u: goto label_379a98;
        case 0x379a9cu: goto label_379a9c;
        case 0x379aa0u: goto label_379aa0;
        case 0x379aa4u: goto label_379aa4;
        case 0x379aa8u: goto label_379aa8;
        case 0x379aacu: goto label_379aac;
        case 0x379ab0u: goto label_379ab0;
        case 0x379ab4u: goto label_379ab4;
        case 0x379ab8u: goto label_379ab8;
        case 0x379abcu: goto label_379abc;
        case 0x379ac0u: goto label_379ac0;
        case 0x379ac4u: goto label_379ac4;
        case 0x379ac8u: goto label_379ac8;
        case 0x379accu: goto label_379acc;
        case 0x379ad0u: goto label_379ad0;
        case 0x379ad4u: goto label_379ad4;
        case 0x379ad8u: goto label_379ad8;
        case 0x379adcu: goto label_379adc;
        case 0x379ae0u: goto label_379ae0;
        case 0x379ae4u: goto label_379ae4;
        case 0x379ae8u: goto label_379ae8;
        case 0x379aecu: goto label_379aec;
        default: break;
    }

    ctx->pc = 0x379a00u;

label_379a00:
    // 0x379a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_379a04:
    // 0x379a04: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x379a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_379a08:
    // 0x379a08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x379a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_379a0c:
    // 0x379a0c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_379a10:
    // 0x379a10: 0x2471ac48  addiu       $s1, $v1, -0x53B8
    ctx->pc = 0x379a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945864));
label_379a14:
    // 0x379a14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_379a18:
    // 0x379a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_379a1c:
    // 0x379a1c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x379a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_379a20:
    // 0x379a20: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_379a24:
    if (ctx->pc == 0x379A24u) {
        ctx->pc = 0x379A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A20u;
        // 0x379a24: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A28u;
        goto label_379a28;
    }
    ctx->pc = 0x379A20u;
    {
        const bool branch_taken_0x379a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A20u;
        // 0x379a24: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a20) {
            ctx->pc = 0x379AC4u;
            goto label_379ac4;
        }
    }
    ctx->pc = 0x379A28u;
label_379a28:
    // 0x379a28: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x379a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_379a2c:
    // 0x379a2c: 0xc106406  jal         func_419018
label_379a30:
    if (ctx->pc == 0x379A30u) {
        ctx->pc = 0x379A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A2Cu;
        // 0x379a30: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A34u;
        goto label_379a34;
    }
    ctx->pc = 0x379A2Cu;
    SET_GPR_U32(ctx, 31, 0x379A34u);
    ctx->pc = 0x379A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A2Cu;
    // 0x379a30: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379A2Cu, 0x379A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A34u;
label_379a34:
    // 0x379a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_379a38:
    // 0x379a38: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379a38u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_379a3c:
    // 0x379a3c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x379a3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_379a40:
    // 0x379a40: 0xc106406  jal         func_419018
label_379a44:
    if (ctx->pc == 0x379A44u) {
        ctx->pc = 0x379A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A40u;
        // 0x379a44: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A48u;
        goto label_379a48;
    }
    ctx->pc = 0x379A40u;
    SET_GPR_U32(ctx, 31, 0x379A48u);
    ctx->pc = 0x379A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A40u;
    // 0x379a44: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x379A40u, 0x379A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A48u;
label_379a48:
    // 0x379a48: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x379a48u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_379a4c:
    // 0x379a4c: 0x36040004  ori         $a0, $s0, 0x4
    ctx->pc = 0x379a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_379a50:
    // 0x379a50: 0xc0de91c  jal         func_37A470
label_379a54:
    if (ctx->pc == 0x379A54u) {
        ctx->pc = 0x379A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A50u;
        // 0x379a54: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A58u;
        goto label_379a58;
    }
    ctx->pc = 0x379A50u;
    SET_GPR_U32(ctx, 31, 0x379A58u);
    ctx->pc = 0x379A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A50u;
    // 0x379a54: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A470u, 0x379A50u, 0x379A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A58u;
label_379a58:
    // 0x379a58: 0x8f87a8b0  lw          $a3, -0x5750($gp)
    ctx->pc = 0x379a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944944)));
label_379a5c:
    // 0x379a5c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x379a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_379a60:
    // 0x379a60: 0x8f85a8ac  lw          $a1, -0x5754($gp)
    ctx->pc = 0x379a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944940)));
label_379a64:
    // 0x379a64: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x379a64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_379a68:
    // 0x379a68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x379a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_379a6c:
    // 0x379a6c: 0x2508c468  addiu       $t0, $t0, -0x3B98
    ctx->pc = 0x379a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952040));
label_379a70:
    // 0x379a70: 0x35290116  ori         $t1, $t1, 0x116
    ctx->pc = 0x379a70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)278);
label_379a74:
    // 0x379a74: 0xc10408c  jal         func_410230
label_379a78:
    if (ctx->pc == 0x379A78u) {
        ctx->pc = 0x379A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A74u;
        // 0x379a78: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A7Cu;
        goto label_379a7c;
    }
    ctx->pc = 0x379A74u;
    SET_GPR_U32(ctx, 31, 0x379A7Cu);
    ctx->pc = 0x379A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A74u;
    // 0x379a78: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x379A74u, 0x379A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A7Cu;
label_379a7c:
    // 0x379a7c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x379a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_379a80:
    // 0x379a80: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x379a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_379a84:
    // 0x379a84: 0x8c66e988  lw          $a2, -0x1678($v1)
    ctx->pc = 0x379a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_379a88:
    // 0x379a88: 0x2404400f  addiu       $a0, $zero, 0x400F
    ctx->pc = 0x379a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
label_379a8c:
    // 0x379a8c: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x379a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_379a90:
    // 0x379a90: 0xc0f809  jalr        $a2
label_379a94:
    if (ctx->pc == 0x379A94u) {
        ctx->pc = 0x379A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A90u;
        // 0x379a94: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379A98u;
        goto label_379a98;
    }
    ctx->pc = 0x379A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x379A98u);
        ctx->pc = 0x379A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A90u;
        // 0x379a94: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379A90u, 0x379A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x379A98u;
label_379a98:
    // 0x379a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x379a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379a9c:
    // 0x379a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x379a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_379aa0:
    // 0x379aa0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x379aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_379aa4:
    // 0x379aa4: 0xc0bb7e6  jal         func_2EDF98
label_379aa8:
    if (ctx->pc == 0x379AA8u) {
        ctx->pc = 0x379AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AA4u;
        // 0x379aa8: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AACu;
        goto label_379aac;
    }
    ctx->pc = 0x379AA4u;
    SET_GPR_U32(ctx, 31, 0x379AACu);
    ctx->pc = 0x379AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AA4u;
    // 0x379aa8: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x379AA4u, 0x379AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AACu;
label_379aac:
    // 0x379aac: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x379aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_379ab0:
    // 0x379ab0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x379ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_379ab4:
    // 0x379ab4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x379ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_379ab8:
    // 0x379ab8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x379ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_379abc:
    // 0x379abc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x379abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_379ac0:
    // 0x379ac0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x379ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_379ac4:
    // 0x379ac4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x379ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_379ac8:
    // 0x379ac8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x379ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_379acc:
    // 0x379acc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_379ad0:
    // 0x379ad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x379ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_379ad4:
    // 0x379ad4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379ad8:
    // 0x379ad8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x379ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_379adc:
    // 0x379adc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_379ae0:
    // 0x379ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_379ae4:
    // 0x379ae4: 0x3e00008  jr          $ra
label_379ae8:
    if (ctx->pc == 0x379AE8u) {
        ctx->pc = 0x379AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AE4u;
        // 0x379ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x379AECu;
        goto label_379aec;
    }
    ctx->pc = 0x379AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379AE4u;
        // 0x379ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379AECu;
label_379aec:
    // 0x379aec: 0x0  nop
    ctx->pc = 0x379aecu;
    // NOP
    ctx->pc = 0x379af0u;
}
