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

// Function: sub_0038EC50
// Address: 0x38ec50 - 0x38ed78
void sub_0038EC50_0x38ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EC50_0x38ec50");
#endif

    switch (ctx->pc) {
        case 0x38ec50u: goto label_38ec50;
        case 0x38ec54u: goto label_38ec54;
        case 0x38ec58u: goto label_38ec58;
        case 0x38ec5cu: goto label_38ec5c;
        case 0x38ec60u: goto label_38ec60;
        case 0x38ec64u: goto label_38ec64;
        case 0x38ec68u: goto label_38ec68;
        case 0x38ec6cu: goto label_38ec6c;
        case 0x38ec70u: goto label_38ec70;
        case 0x38ec74u: goto label_38ec74;
        case 0x38ec78u: goto label_38ec78;
        case 0x38ec7cu: goto label_38ec7c;
        case 0x38ec80u: goto label_38ec80;
        case 0x38ec84u: goto label_38ec84;
        case 0x38ec88u: goto label_38ec88;
        case 0x38ec8cu: goto label_38ec8c;
        case 0x38ec90u: goto label_38ec90;
        case 0x38ec94u: goto label_38ec94;
        case 0x38ec98u: goto label_38ec98;
        case 0x38ec9cu: goto label_38ec9c;
        case 0x38eca0u: goto label_38eca0;
        case 0x38eca4u: goto label_38eca4;
        case 0x38eca8u: goto label_38eca8;
        case 0x38ecacu: goto label_38ecac;
        case 0x38ecb0u: goto label_38ecb0;
        case 0x38ecb4u: goto label_38ecb4;
        case 0x38ecb8u: goto label_38ecb8;
        case 0x38ecbcu: goto label_38ecbc;
        case 0x38ecc0u: goto label_38ecc0;
        case 0x38ecc4u: goto label_38ecc4;
        case 0x38ecc8u: goto label_38ecc8;
        case 0x38ecccu: goto label_38eccc;
        case 0x38ecd0u: goto label_38ecd0;
        case 0x38ecd4u: goto label_38ecd4;
        case 0x38ecd8u: goto label_38ecd8;
        case 0x38ecdcu: goto label_38ecdc;
        case 0x38ece0u: goto label_38ece0;
        case 0x38ece4u: goto label_38ece4;
        case 0x38ece8u: goto label_38ece8;
        case 0x38ececu: goto label_38ecec;
        case 0x38ecf0u: goto label_38ecf0;
        case 0x38ecf4u: goto label_38ecf4;
        case 0x38ecf8u: goto label_38ecf8;
        case 0x38ecfcu: goto label_38ecfc;
        case 0x38ed00u: goto label_38ed00;
        case 0x38ed04u: goto label_38ed04;
        case 0x38ed08u: goto label_38ed08;
        case 0x38ed0cu: goto label_38ed0c;
        case 0x38ed10u: goto label_38ed10;
        case 0x38ed14u: goto label_38ed14;
        case 0x38ed18u: goto label_38ed18;
        case 0x38ed1cu: goto label_38ed1c;
        case 0x38ed20u: goto label_38ed20;
        case 0x38ed24u: goto label_38ed24;
        case 0x38ed28u: goto label_38ed28;
        case 0x38ed2cu: goto label_38ed2c;
        case 0x38ed30u: goto label_38ed30;
        case 0x38ed34u: goto label_38ed34;
        case 0x38ed38u: goto label_38ed38;
        case 0x38ed3cu: goto label_38ed3c;
        case 0x38ed40u: goto label_38ed40;
        case 0x38ed44u: goto label_38ed44;
        case 0x38ed48u: goto label_38ed48;
        case 0x38ed4cu: goto label_38ed4c;
        case 0x38ed50u: goto label_38ed50;
        case 0x38ed54u: goto label_38ed54;
        case 0x38ed58u: goto label_38ed58;
        case 0x38ed5cu: goto label_38ed5c;
        case 0x38ed60u: goto label_38ed60;
        case 0x38ed64u: goto label_38ed64;
        case 0x38ed68u: goto label_38ed68;
        case 0x38ed6cu: goto label_38ed6c;
        case 0x38ed70u: goto label_38ed70;
        case 0x38ed74u: goto label_38ed74;
        default: break;
    }

    ctx->pc = 0x38ec50u;

label_38ec50:
    // 0x38ec50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38ec54:
    // 0x38ec54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38ec58:
    // 0x38ec58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38ec5c:
    // 0x38ec5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ec5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ec60:
    // 0x38ec60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38ec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38ec64:
    // 0x38ec64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38ec68:
    // 0x38ec68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x38ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ec6c:
    // 0x38ec6c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x38ec6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ec70:
    // 0x38ec70: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x38ec70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38ec74:
    // 0x38ec74: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_38ec78:
    if (ctx->pc == 0x38EC78u) {
        ctx->pc = 0x38EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC74u;
        // 0x38ec78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EC7Cu;
        goto label_38ec7c;
    }
    ctx->pc = 0x38EC74u;
    {
        const bool branch_taken_0x38ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC74u;
        // 0x38ec78: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ec74) {
            ctx->pc = 0x38ECA8u;
            goto label_38eca8;
        }
    }
    ctx->pc = 0x38EC7Cu;
label_38ec7c:
    // 0x38ec7c: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x38ec7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_38ec80:
    // 0x38ec80: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x38ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38ec84:
    // 0x38ec84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38ec88:
    // 0x38ec88: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x38ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_38ec8c:
    // 0x38ec8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38ec90:
    // 0x38ec90: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x38ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_38ec94:
    // 0x38ec94: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x38ec94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_38ec98:
    // 0x38ec98: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x38ec98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
label_38ec9c:
    // 0x38ec9c: 0xacf20000  sw          $s2, 0x0($a3)
    ctx->pc = 0x38ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 18));
label_38eca0:
    // 0x38eca0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_38eca4:
    if (ctx->pc == 0x38ECA4u) {
        ctx->pc = 0x38ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECA0u;
        // 0x38eca4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECA8u;
        goto label_38eca8;
    }
    ctx->pc = 0x38ECA0u;
    {
        const bool branch_taken_0x38eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECA0u;
        // 0x38eca4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eca0) {
            ctx->pc = 0x38ED5Cu;
            goto label_38ed5c;
        }
    }
    ctx->pc = 0x38ECA8u;
label_38eca8:
    // 0x38eca8: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x38eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_38ecac:
    // 0x38ecac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38ecb0:
    // 0x38ecb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_38ecb4:
    if (ctx->pc == 0x38ECB4u) {
        ctx->pc = 0x38ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECB0u;
        // 0x38ecb4: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECB8u;
        goto label_38ecb8;
    }
    ctx->pc = 0x38ECB0u;
    {
        const bool branch_taken_0x38ecb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECB0u;
        // 0x38ecb4: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ecb0) {
            ctx->pc = 0x38ECD8u;
            goto label_38ecd8;
        }
    }
    ctx->pc = 0x38ECB8u;
label_38ecb8:
    // 0x38ecb8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38ecbc:
    // 0x38ecbc: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x38ecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_38ecc0:
    // 0x38ecc0: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x38ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_38ecc4:
    // 0x38ecc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ecc8:
    // 0x38ecc8: 0x40f809  jalr        $v0
label_38eccc:
    if (ctx->pc == 0x38ECCCu) {
        ctx->pc = 0x38ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECC8u;
        // 0x38eccc: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECD0u;
        goto label_38ecd0;
    }
    ctx->pc = 0x38ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38ECD0u);
        ctx->pc = 0x38ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECC8u;
        // 0x38eccc: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ECC8u, 0x38ECD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ECD0u;
label_38ecd0:
    // 0x38ecd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_38ecd4:
    if (ctx->pc == 0x38ECD4u) {
        ctx->pc = 0x38ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECD0u;
        // 0x38ecd4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECD8u;
        goto label_38ecd8;
    }
    ctx->pc = 0x38ECD0u;
    {
        const bool branch_taken_0x38ecd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECD0u;
        // 0x38ecd4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ecd0) {
            ctx->pc = 0x38ECF4u;
            goto label_38ecf4;
        }
    }
    ctx->pc = 0x38ECD8u;
label_38ecd8:
    // 0x38ecd8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38ecdc:
    // 0x38ecdc: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x38ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_38ece0:
    // 0x38ece0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x38ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38ece4:
    // 0x38ece4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ece8:
    // 0x38ece8: 0x40f809  jalr        $v0
label_38ecec:
    if (ctx->pc == 0x38ECECu) {
        ctx->pc = 0x38ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECE8u;
        // 0x38ecec: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECF0u;
        goto label_38ecf0;
    }
    ctx->pc = 0x38ECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38ECF0u);
        ctx->pc = 0x38ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECE8u;
        // 0x38ecec: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ECE8u, 0x38ECF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ECF0u;
label_38ecf0:
    // 0x38ecf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38ecf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38ecf4:
    // 0x38ecf4: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_38ecf8:
    if (ctx->pc == 0x38ECF8u) {
        ctx->pc = 0x38ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECF4u;
        // 0x38ecf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECFCu;
        goto label_38ecfc;
    }
    ctx->pc = 0x38ECF4u;
    {
        const bool branch_taken_0x38ecf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECF4u;
        // 0x38ecf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ecf4) {
            ctx->pc = 0x38ED38u;
            goto label_38ed38;
        }
    }
    ctx->pc = 0x38ECFCu;
label_38ecfc:
    // 0x38ecfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38ed00:
    // 0x38ed00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x38ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38ed04:
    // 0x38ed04: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x38ed04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_38ed08:
    // 0x38ed08: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x38ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38ed0c:
    // 0x38ed0c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x38ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_38ed10:
    // 0x38ed10: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x38ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_38ed14:
    // 0x38ed14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38ed18:
    // 0x38ed18: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x38ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38ed1c:
    // 0x38ed1c: 0xa6430018  sh          $v1, 0x18($s2)
    ctx->pc = 0x38ed1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 3));
label_38ed20:
    // 0x38ed20: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x38ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_38ed24:
    // 0x38ed24: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x38ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_38ed28:
    // 0x38ed28: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x38ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_38ed2c:
    // 0x38ed2c: 0x1000000b  b           . + 4 + (0xB << 2)
label_38ed30:
    if (ctx->pc == 0x38ED30u) {
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED2Cu;
        // 0x38ed30: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED34u;
        goto label_38ed34;
    }
    ctx->pc = 0x38ED2Cu;
    {
        const bool branch_taken_0x38ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED2Cu;
        // 0x38ed30: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed2c) {
            ctx->pc = 0x38ED5Cu;
            goto label_38ed5c;
        }
    }
    ctx->pc = 0x38ED34u;
label_38ed34:
    // 0x38ed34: 0x0  nop
    ctx->pc = 0x38ed34u;
    // NOP
label_38ed38:
    // 0x38ed38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38ed3c:
    // 0x38ed3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38ed40:
    // 0x38ed40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38ed40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38ed44:
    // 0x38ed44: 0xc1035f6  jal         func_40D7D8
label_38ed48:
    if (ctx->pc == 0x38ED48u) {
        ctx->pc = 0x38ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED44u;
        // 0x38ed48: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED4Cu;
        goto label_38ed4c;
    }
    ctx->pc = 0x38ED44u;
    SET_GPR_U32(ctx, 31, 0x38ED4Cu);
    ctx->pc = 0x38ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED44u;
    // 0x38ed48: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38ED44u, 0x38ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED4Cu;
label_38ed4c:
    // 0x38ed4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38ed50:
    // 0x38ed50: 0xc103628  jal         func_40D8A0
label_38ed54:
    if (ctx->pc == 0x38ED54u) {
        ctx->pc = 0x38ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED50u;
        // 0x38ed54: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED58u;
        goto label_38ed58;
    }
    ctx->pc = 0x38ED50u;
    SET_GPR_U32(ctx, 31, 0x38ED58u);
    ctx->pc = 0x38ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED50u;
    // 0x38ed54: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38ED50u, 0x38ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED58u;
label_38ed58:
    // 0x38ed58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38ed5c:
    // 0x38ed5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38ed5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38ed60:
    // 0x38ed60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38ed60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ed64:
    // 0x38ed64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38ed64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38ed68:
    // 0x38ed68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ed68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ed6c:
    // 0x38ed6c: 0x3e00008  jr          $ra
label_38ed70:
    if (ctx->pc == 0x38ED70u) {
        ctx->pc = 0x38ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED6Cu;
        // 0x38ed70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED74u;
        goto label_38ed74;
    }
    ctx->pc = 0x38ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED6Cu;
        // 0x38ed70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38ED74u;
label_38ed74:
    // 0x38ed74: 0x0  nop
    ctx->pc = 0x38ed74u;
    // NOP
    ctx->pc = 0x38ed78u;
}
