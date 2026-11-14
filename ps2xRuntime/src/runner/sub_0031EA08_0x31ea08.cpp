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

// Function: sub_0031EA08
// Address: 0x31ea08 - 0x31eb28
void sub_0031EA08_0x31ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EA08_0x31ea08");
#endif

    switch (ctx->pc) {
        case 0x31ea08u: goto label_31ea08;
        case 0x31ea0cu: goto label_31ea0c;
        case 0x31ea10u: goto label_31ea10;
        case 0x31ea14u: goto label_31ea14;
        case 0x31ea18u: goto label_31ea18;
        case 0x31ea1cu: goto label_31ea1c;
        case 0x31ea20u: goto label_31ea20;
        case 0x31ea24u: goto label_31ea24;
        case 0x31ea28u: goto label_31ea28;
        case 0x31ea2cu: goto label_31ea2c;
        case 0x31ea30u: goto label_31ea30;
        case 0x31ea34u: goto label_31ea34;
        case 0x31ea38u: goto label_31ea38;
        case 0x31ea3cu: goto label_31ea3c;
        case 0x31ea40u: goto label_31ea40;
        case 0x31ea44u: goto label_31ea44;
        case 0x31ea48u: goto label_31ea48;
        case 0x31ea4cu: goto label_31ea4c;
        case 0x31ea50u: goto label_31ea50;
        case 0x31ea54u: goto label_31ea54;
        case 0x31ea58u: goto label_31ea58;
        case 0x31ea5cu: goto label_31ea5c;
        case 0x31ea60u: goto label_31ea60;
        case 0x31ea64u: goto label_31ea64;
        case 0x31ea68u: goto label_31ea68;
        case 0x31ea6cu: goto label_31ea6c;
        case 0x31ea70u: goto label_31ea70;
        case 0x31ea74u: goto label_31ea74;
        case 0x31ea78u: goto label_31ea78;
        case 0x31ea7cu: goto label_31ea7c;
        case 0x31ea80u: goto label_31ea80;
        case 0x31ea84u: goto label_31ea84;
        case 0x31ea88u: goto label_31ea88;
        case 0x31ea8cu: goto label_31ea8c;
        case 0x31ea90u: goto label_31ea90;
        case 0x31ea94u: goto label_31ea94;
        case 0x31ea98u: goto label_31ea98;
        case 0x31ea9cu: goto label_31ea9c;
        case 0x31eaa0u: goto label_31eaa0;
        case 0x31eaa4u: goto label_31eaa4;
        case 0x31eaa8u: goto label_31eaa8;
        case 0x31eaacu: goto label_31eaac;
        case 0x31eab0u: goto label_31eab0;
        case 0x31eab4u: goto label_31eab4;
        case 0x31eab8u: goto label_31eab8;
        case 0x31eabcu: goto label_31eabc;
        case 0x31eac0u: goto label_31eac0;
        case 0x31eac4u: goto label_31eac4;
        case 0x31eac8u: goto label_31eac8;
        case 0x31eaccu: goto label_31eacc;
        case 0x31ead0u: goto label_31ead0;
        case 0x31ead4u: goto label_31ead4;
        case 0x31ead8u: goto label_31ead8;
        case 0x31eadcu: goto label_31eadc;
        case 0x31eae0u: goto label_31eae0;
        case 0x31eae4u: goto label_31eae4;
        case 0x31eae8u: goto label_31eae8;
        case 0x31eaecu: goto label_31eaec;
        case 0x31eaf0u: goto label_31eaf0;
        case 0x31eaf4u: goto label_31eaf4;
        case 0x31eaf8u: goto label_31eaf8;
        case 0x31eafcu: goto label_31eafc;
        case 0x31eb00u: goto label_31eb00;
        case 0x31eb04u: goto label_31eb04;
        case 0x31eb08u: goto label_31eb08;
        case 0x31eb0cu: goto label_31eb0c;
        case 0x31eb10u: goto label_31eb10;
        case 0x31eb14u: goto label_31eb14;
        case 0x31eb18u: goto label_31eb18;
        case 0x31eb1cu: goto label_31eb1c;
        case 0x31eb20u: goto label_31eb20;
        case 0x31eb24u: goto label_31eb24;
        default: break;
    }

    ctx->pc = 0x31ea08u;

label_31ea08:
    // 0x31ea08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_31ea0c:
    // 0x31ea0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31ea10:
    // 0x31ea10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31ea14:
    // 0x31ea14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31ea14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ea18:
    // 0x31ea18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31ea1c:
    // 0x31ea1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ea20:
    // 0x31ea20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31ea24:
    // 0x31ea24: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31ea28:
    // 0x31ea28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31ea2c:
    // 0x31ea2c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x31ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31ea30:
    // 0x31ea30: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_31ea34:
    if (ctx->pc == 0x31EA34u) {
        ctx->pc = 0x31EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA30u;
        // 0x31ea34: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA38u;
        goto label_31ea38;
    }
    ctx->pc = 0x31EA30u;
    {
        const bool branch_taken_0x31ea30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA30u;
        // 0x31ea34: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea30) {
            ctx->pc = 0x31EB04u;
            goto label_31eb04;
        }
    }
    ctx->pc = 0x31EA38u;
label_31ea38:
    // 0x31ea38: 0xc0c7620  jal         func_31D880
label_31ea3c:
    if (ctx->pc == 0x31EA3Cu) {
        ctx->pc = 0x31EA40u;
        goto label_31ea40;
    }
    ctx->pc = 0x31EA38u;
    SET_GPR_U32(ctx, 31, 0x31EA40u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31EA38u, 0x31EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA40u;
label_31ea40:
    // 0x31ea40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31ea40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ea44:
    // 0x31ea44: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_31ea48:
    if (ctx->pc == 0x31EA48u) {
        ctx->pc = 0x31EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA44u;
        // 0x31ea48: 0x8f82a5cc  lw          $v0, -0x5A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA4Cu;
        goto label_31ea4c;
    }
    ctx->pc = 0x31EA44u;
    {
        const bool branch_taken_0x31ea44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA44u;
        // 0x31ea48: 0x8f82a5cc  lw          $v0, -0x5A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea44) {
            ctx->pc = 0x31EB00u;
            goto label_31eb00;
        }
    }
    ctx->pc = 0x31EA4Cu;
label_31ea4c:
    // 0x31ea4c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x31ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_31ea50:
    // 0x31ea50: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x31ea50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_31ea54:
    // 0x31ea54: 0xc0c7620  jal         func_31D880
label_31ea58:
    if (ctx->pc == 0x31EA58u) {
        ctx->pc = 0x31EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA54u;
        // 0x31ea58: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA5Cu;
        goto label_31ea5c;
    }
    ctx->pc = 0x31EA54u;
    SET_GPR_U32(ctx, 31, 0x31EA5Cu);
    ctx->pc = 0x31EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA54u;
    // 0x31ea58: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31EA54u, 0x31EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA5Cu;
label_31ea5c:
    // 0x31ea5c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x31ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31ea60:
    // 0x31ea60: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x31ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31ea64:
    // 0x31ea64: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x31ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_31ea68:
    // 0x31ea68: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_31ea6c:
    // 0x31ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ea70:
    // 0x31ea70: 0x40f809  jalr        $v0
label_31ea74:
    if (ctx->pc == 0x31EA74u) {
        ctx->pc = 0x31EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA70u;
        // 0x31ea74: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA78u;
        goto label_31ea78;
    }
    ctx->pc = 0x31EA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31EA78u);
        ctx->pc = 0x31EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA70u;
        // 0x31ea74: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA70u, 0x31EA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EA78u;
label_31ea78:
    // 0x31ea78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_31ea7c:
    if (ctx->pc == 0x31EA7Cu) {
        ctx->pc = 0x31EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA78u;
        // 0x31ea7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA80u;
        goto label_31ea80;
    }
    ctx->pc = 0x31EA78u;
    {
        const bool branch_taken_0x31ea78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA78u;
        // 0x31ea7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea78) {
            ctx->pc = 0x31EAB0u;
            goto label_31eab0;
        }
    }
    ctx->pc = 0x31EA80u;
label_31ea80:
    // 0x31ea80: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x31ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_31ea84:
    // 0x31ea84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31ea88:
    // 0x31ea88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_31ea8c:
    // 0x31ea8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31ea8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ea90:
    // 0x31ea90: 0xc1035f6  jal         func_40D7D8
label_31ea94:
    if (ctx->pc == 0x31EA94u) {
        ctx->pc = 0x31EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA90u;
        // 0x31ea94: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EA98u;
        goto label_31ea98;
    }
    ctx->pc = 0x31EA90u;
    SET_GPR_U32(ctx, 31, 0x31EA98u);
    ctx->pc = 0x31EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA90u;
    // 0x31ea94: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x31EA90u, 0x31EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA98u;
label_31ea98:
    // 0x31ea98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31ea9c:
    // 0x31ea9c: 0xc103628  jal         func_40D8A0
label_31eaa0:
    if (ctx->pc == 0x31EAA0u) {
        ctx->pc = 0x31EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA9Cu;
        // 0x31eaa0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAA4u;
        goto label_31eaa4;
    }
    ctx->pc = 0x31EA9Cu;
    SET_GPR_U32(ctx, 31, 0x31EAA4u);
    ctx->pc = 0x31EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA9Cu;
    // 0x31eaa0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x31EA9Cu, 0x31EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAA4u;
label_31eaa4:
    // 0x31eaa4: 0x10000007  b           . + 4 + (0x7 << 2)
label_31eaa8:
    if (ctx->pc == 0x31EAA8u) {
        ctx->pc = 0x31EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAA4u;
        // 0x31eaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAACu;
        goto label_31eaac;
    }
    ctx->pc = 0x31EAA4u;
    {
        const bool branch_taken_0x31eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAA4u;
        // 0x31eaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eaa4) {
            ctx->pc = 0x31EAC4u;
            goto label_31eac4;
        }
    }
    ctx->pc = 0x31EAACu;
label_31eaac:
    // 0x31eaac: 0x0  nop
    ctx->pc = 0x31eaacu;
    // NOP
label_31eab0:
    // 0x31eab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eab4:
    // 0x31eab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31eab8:
    // 0x31eab8: 0xc0bb7e6  jal         func_2EDF98
label_31eabc:
    if (ctx->pc == 0x31EABCu) {
        ctx->pc = 0x31EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAB8u;
        // 0x31eabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAC0u;
        goto label_31eac0;
    }
    ctx->pc = 0x31EAB8u;
    SET_GPR_U32(ctx, 31, 0x31EAC0u);
    ctx->pc = 0x31EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAB8u;
    // 0x31eabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31EAB8u, 0x31EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAC0u;
label_31eac0:
    // 0x31eac0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31eac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31eac4:
    // 0x31eac4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_31eac8:
    if (ctx->pc == 0x31EAC8u) {
        ctx->pc = 0x31EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAC4u;
        // 0x31eac8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EACCu;
        goto label_31eacc;
    }
    ctx->pc = 0x31EAC4u;
    {
        const bool branch_taken_0x31eac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eac4) {
            ctx->pc = 0x31EAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EAC4u;
            // 0x31eac8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EAF8u;
            goto label_31eaf8;
        }
    }
    ctx->pc = 0x31EACCu;
label_31eacc:
    // 0x31eacc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x31eaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31ead0:
    // 0x31ead0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_31ead4:
    if (ctx->pc == 0x31EAD4u) {
        ctx->pc = 0x31EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD0u;
        // 0x31ead4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAD8u;
        goto label_31ead8;
    }
    ctx->pc = 0x31EAD0u;
    {
        const bool branch_taken_0x31ead0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD0u;
        // 0x31ead4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ead0) {
            ctx->pc = 0x31EAE8u;
            goto label_31eae8;
        }
    }
    ctx->pc = 0x31EAD8u;
label_31ead8:
    // 0x31ead8: 0xc0bb778  jal         func_2EDDE0
label_31eadc:
    if (ctx->pc == 0x31EADCu) {
        ctx->pc = 0x31EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD8u;
        // 0x31eadc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAE0u;
        goto label_31eae0;
    }
    ctx->pc = 0x31EAD8u;
    SET_GPR_U32(ctx, 31, 0x31EAE0u);
    ctx->pc = 0x31EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAD8u;
    // 0x31eadc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x31EAD8u, 0x31EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAE0u;
label_31eae0:
    // 0x31eae0: 0x10000005  b           . + 4 + (0x5 << 2)
label_31eae4:
    if (ctx->pc == 0x31EAE4u) {
        ctx->pc = 0x31EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAE0u;
        // 0x31eae4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAE8u;
        goto label_31eae8;
    }
    ctx->pc = 0x31EAE0u;
    {
        const bool branch_taken_0x31eae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAE0u;
        // 0x31eae4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eae0) {
            ctx->pc = 0x31EAF8u;
            goto label_31eaf8;
        }
    }
    ctx->pc = 0x31EAE8u;
label_31eae8:
    // 0x31eae8: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x31eae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_31eaec:
    // 0x31eaec: 0xc0bb7e6  jal         func_2EDF98
label_31eaf0:
    if (ctx->pc == 0x31EAF0u) {
        ctx->pc = 0x31EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAECu;
        // 0x31eaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EAF4u;
        goto label_31eaf4;
    }
    ctx->pc = 0x31EAECu;
    SET_GPR_U32(ctx, 31, 0x31EAF4u);
    ctx->pc = 0x31EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAECu;
    // 0x31eaf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x31EAECu, 0x31EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAF4u;
label_31eaf4:
    // 0x31eaf4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x31eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_31eaf8:
    // 0x31eaf8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x31eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_31eafc:
    // 0x31eafc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x31eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_31eb00:
    // 0x31eb00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31eb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31eb04:
    // 0x31eb04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31eb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31eb08:
    // 0x31eb08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31eb08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31eb0c:
    // 0x31eb0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31eb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31eb10:
    // 0x31eb10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31eb10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31eb14:
    // 0x31eb14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31eb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31eb18:
    // 0x31eb18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31eb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31eb1c:
    // 0x31eb1c: 0x3e00008  jr          $ra
label_31eb20:
    if (ctx->pc == 0x31EB20u) {
        ctx->pc = 0x31EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB1Cu;
        // 0x31eb20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB24u;
        goto label_31eb24;
    }
    ctx->pc = 0x31EB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB1Cu;
        // 0x31eb20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EB24u;
label_31eb24:
    // 0x31eb24: 0x0  nop
    ctx->pc = 0x31eb24u;
    // NOP
    ctx->pc = 0x31eb28u;
}
