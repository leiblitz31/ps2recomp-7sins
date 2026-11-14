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

// Function: sub_004ABB10
// Address: 0x4abb10 - 0x4abd28
void sub_004ABB10_0x4abb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABB10_0x4abb10");
#endif

    switch (ctx->pc) {
        case 0x4abb10u: goto label_4abb10;
        case 0x4abb14u: goto label_4abb14;
        case 0x4abb18u: goto label_4abb18;
        case 0x4abb1cu: goto label_4abb1c;
        case 0x4abb20u: goto label_4abb20;
        case 0x4abb24u: goto label_4abb24;
        case 0x4abb28u: goto label_4abb28;
        case 0x4abb2cu: goto label_4abb2c;
        case 0x4abb30u: goto label_4abb30;
        case 0x4abb34u: goto label_4abb34;
        case 0x4abb38u: goto label_4abb38;
        case 0x4abb3cu: goto label_4abb3c;
        case 0x4abb40u: goto label_4abb40;
        case 0x4abb44u: goto label_4abb44;
        case 0x4abb48u: goto label_4abb48;
        case 0x4abb4cu: goto label_4abb4c;
        case 0x4abb50u: goto label_4abb50;
        case 0x4abb54u: goto label_4abb54;
        case 0x4abb58u: goto label_4abb58;
        case 0x4abb5cu: goto label_4abb5c;
        case 0x4abb60u: goto label_4abb60;
        case 0x4abb64u: goto label_4abb64;
        case 0x4abb68u: goto label_4abb68;
        case 0x4abb6cu: goto label_4abb6c;
        case 0x4abb70u: goto label_4abb70;
        case 0x4abb74u: goto label_4abb74;
        case 0x4abb78u: goto label_4abb78;
        case 0x4abb7cu: goto label_4abb7c;
        case 0x4abb80u: goto label_4abb80;
        case 0x4abb84u: goto label_4abb84;
        case 0x4abb88u: goto label_4abb88;
        case 0x4abb8cu: goto label_4abb8c;
        case 0x4abb90u: goto label_4abb90;
        case 0x4abb94u: goto label_4abb94;
        case 0x4abb98u: goto label_4abb98;
        case 0x4abb9cu: goto label_4abb9c;
        case 0x4abba0u: goto label_4abba0;
        case 0x4abba4u: goto label_4abba4;
        case 0x4abba8u: goto label_4abba8;
        case 0x4abbacu: goto label_4abbac;
        case 0x4abbb0u: goto label_4abbb0;
        case 0x4abbb4u: goto label_4abbb4;
        case 0x4abbb8u: goto label_4abbb8;
        case 0x4abbbcu: goto label_4abbbc;
        case 0x4abbc0u: goto label_4abbc0;
        case 0x4abbc4u: goto label_4abbc4;
        case 0x4abbc8u: goto label_4abbc8;
        case 0x4abbccu: goto label_4abbcc;
        case 0x4abbd0u: goto label_4abbd0;
        case 0x4abbd4u: goto label_4abbd4;
        case 0x4abbd8u: goto label_4abbd8;
        case 0x4abbdcu: goto label_4abbdc;
        case 0x4abbe0u: goto label_4abbe0;
        case 0x4abbe4u: goto label_4abbe4;
        case 0x4abbe8u: goto label_4abbe8;
        case 0x4abbecu: goto label_4abbec;
        case 0x4abbf0u: goto label_4abbf0;
        case 0x4abbf4u: goto label_4abbf4;
        case 0x4abbf8u: goto label_4abbf8;
        case 0x4abbfcu: goto label_4abbfc;
        case 0x4abc00u: goto label_4abc00;
        case 0x4abc04u: goto label_4abc04;
        case 0x4abc08u: goto label_4abc08;
        case 0x4abc0cu: goto label_4abc0c;
        case 0x4abc10u: goto label_4abc10;
        case 0x4abc14u: goto label_4abc14;
        case 0x4abc18u: goto label_4abc18;
        case 0x4abc1cu: goto label_4abc1c;
        case 0x4abc20u: goto label_4abc20;
        case 0x4abc24u: goto label_4abc24;
        case 0x4abc28u: goto label_4abc28;
        case 0x4abc2cu: goto label_4abc2c;
        case 0x4abc30u: goto label_4abc30;
        case 0x4abc34u: goto label_4abc34;
        case 0x4abc38u: goto label_4abc38;
        case 0x4abc3cu: goto label_4abc3c;
        case 0x4abc40u: goto label_4abc40;
        case 0x4abc44u: goto label_4abc44;
        case 0x4abc48u: goto label_4abc48;
        case 0x4abc4cu: goto label_4abc4c;
        case 0x4abc50u: goto label_4abc50;
        case 0x4abc54u: goto label_4abc54;
        case 0x4abc58u: goto label_4abc58;
        case 0x4abc5cu: goto label_4abc5c;
        case 0x4abc60u: goto label_4abc60;
        case 0x4abc64u: goto label_4abc64;
        case 0x4abc68u: goto label_4abc68;
        case 0x4abc6cu: goto label_4abc6c;
        case 0x4abc70u: goto label_4abc70;
        case 0x4abc74u: goto label_4abc74;
        case 0x4abc78u: goto label_4abc78;
        case 0x4abc7cu: goto label_4abc7c;
        case 0x4abc80u: goto label_4abc80;
        case 0x4abc84u: goto label_4abc84;
        case 0x4abc88u: goto label_4abc88;
        case 0x4abc8cu: goto label_4abc8c;
        case 0x4abc90u: goto label_4abc90;
        case 0x4abc94u: goto label_4abc94;
        case 0x4abc98u: goto label_4abc98;
        case 0x4abc9cu: goto label_4abc9c;
        case 0x4abca0u: goto label_4abca0;
        case 0x4abca4u: goto label_4abca4;
        case 0x4abca8u: goto label_4abca8;
        case 0x4abcacu: goto label_4abcac;
        case 0x4abcb0u: goto label_4abcb0;
        case 0x4abcb4u: goto label_4abcb4;
        case 0x4abcb8u: goto label_4abcb8;
        case 0x4abcbcu: goto label_4abcbc;
        case 0x4abcc0u: goto label_4abcc0;
        case 0x4abcc4u: goto label_4abcc4;
        case 0x4abcc8u: goto label_4abcc8;
        case 0x4abcccu: goto label_4abccc;
        case 0x4abcd0u: goto label_4abcd0;
        case 0x4abcd4u: goto label_4abcd4;
        case 0x4abcd8u: goto label_4abcd8;
        case 0x4abcdcu: goto label_4abcdc;
        case 0x4abce0u: goto label_4abce0;
        case 0x4abce4u: goto label_4abce4;
        case 0x4abce8u: goto label_4abce8;
        case 0x4abcecu: goto label_4abcec;
        case 0x4abcf0u: goto label_4abcf0;
        case 0x4abcf4u: goto label_4abcf4;
        case 0x4abcf8u: goto label_4abcf8;
        case 0x4abcfcu: goto label_4abcfc;
        case 0x4abd00u: goto label_4abd00;
        case 0x4abd04u: goto label_4abd04;
        case 0x4abd08u: goto label_4abd08;
        case 0x4abd0cu: goto label_4abd0c;
        case 0x4abd10u: goto label_4abd10;
        case 0x4abd14u: goto label_4abd14;
        case 0x4abd18u: goto label_4abd18;
        case 0x4abd1cu: goto label_4abd1c;
        case 0x4abd20u: goto label_4abd20;
        case 0x4abd24u: goto label_4abd24;
        default: break;
    }

    ctx->pc = 0x4abb10u;

label_4abb10:
    // 0x4abb10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4abb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4abb14:
    // 0x4abb14: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4abb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_4abb18:
    // 0x4abb18: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4abb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_4abb1c:
    // 0x4abb1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4abb1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abb20:
    // 0x4abb20: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4abb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4abb24:
    // 0x4abb24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4abb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abb28:
    // 0x4abb28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4abb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4abb2c:
    // 0x4abb2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4abb2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4abb30:
    // 0x4abb30: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4abb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_4abb34:
    // 0x4abb34: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4abb34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4abb38:
    // 0x4abb38: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x4abb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_4abb3c:
    // 0x4abb3c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4abb3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4abb40:
    // 0x4abb40: 0xafa8002c  sw          $t0, 0x2C($sp)
    ctx->pc = 0x4abb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
label_4abb44:
    // 0x4abb44: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4abb44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4abb48:
    // 0x4abb48: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4abb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_4abb4c:
    // 0x4abb4c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4abb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_4abb50:
    // 0x4abb50: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4abb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_4abb54:
    // 0x4abb54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4abb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4abb58:
    // 0x4abb58: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x4abb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
label_4abb5c:
    // 0x4abb5c: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x4abb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_4abb60:
    // 0x4abb60: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x4abb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
label_4abb64:
    // 0x4abb64: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_4abb68:
    if (ctx->pc == 0x4ABB68u) {
        ctx->pc = 0x4ABB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB64u;
        // 0x4abb68: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABB6Cu;
        goto label_4abb6c;
    }
    ctx->pc = 0x4ABB64u;
    {
        const bool branch_taken_0x4abb64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB64u;
        // 0x4abb68: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abb64) {
            ctx->pc = 0x4ABB70u;
            goto label_4abb70;
        }
    }
    ctx->pc = 0x4ABB6Cu;
label_4abb6c:
    // 0x4abb6c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x4abb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_4abb70:
    // 0x4abb70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4abb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4abb74:
    // 0x4abb74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4abb78:
    if (ctx->pc == 0x4ABB78u) {
        ctx->pc = 0x4ABB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB74u;
        // 0x4abb78: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABB7Cu;
        goto label_4abb7c;
    }
    ctx->pc = 0x4ABB74u;
    {
        const bool branch_taken_0x4abb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abb74) {
            ctx->pc = 0x4ABB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABB74u;
            // 0x4abb78: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABB7Cu;
            goto label_4abb7c;
        }
    }
    ctx->pc = 0x4ABB7Cu;
label_4abb7c:
    // 0x4abb7c: 0x13c00055  beqz        $fp, . + 4 + (0x55 << 2)
label_4abb80:
    if (ctx->pc == 0x4ABB80u) {
        ctx->pc = 0x4ABB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB7Cu;
        // 0x4abb80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABB84u;
        goto label_4abb84;
    }
    ctx->pc = 0x4ABB7Cu;
    {
        const bool branch_taken_0x4abb7c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB7Cu;
        // 0x4abb80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abb7c) {
            ctx->pc = 0x4ABCD4u;
            goto label_4abcd4;
        }
    }
    ctx->pc = 0x4ABB84u;
label_4abb84:
    // 0x4abb84: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x4abb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_4abb88:
    // 0x4abb88: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x4abb88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4abb8c:
    // 0x4abb8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4abb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abb90:
    // 0x4abb90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4abb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4abb94:
    // 0x4abb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4abb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abb98:
    // 0x4abb98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4abb9c:
    if (ctx->pc == 0x4ABB9Cu) {
        ctx->pc = 0x4ABB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB98u;
        // 0x4abb9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBA0u;
        goto label_4abba0;
    }
    ctx->pc = 0x4ABB98u;
    {
        const bool branch_taken_0x4abb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ABB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABB98u;
        // 0x4abb9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abb98) {
            ctx->pc = 0x4ABBB0u;
            goto label_4abbb0;
        }
    }
    ctx->pc = 0x4ABBA0u;
label_4abba0:
    // 0x4abba0: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
label_4abba4:
    if (ctx->pc == 0x4ABBA4u) {
        ctx->pc = 0x4ABBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBA0u;
        // 0x4abba4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBA8u;
        goto label_4abba8;
    }
    ctx->pc = 0x4ABBA0u;
    {
        const bool branch_taken_0x4abba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4abba0) {
            ctx->pc = 0x4ABBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABBA0u;
            // 0x4abba4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC60u;
            goto label_4abc60;
        }
    }
    ctx->pc = 0x4ABBA8u;
label_4abba8:
    // 0x4abba8: 0x10000036  b           . + 4 + (0x36 << 2)
label_4abbac:
    if (ctx->pc == 0x4ABBACu) {
        ctx->pc = 0x4ABBB0u;
        goto label_4abbb0;
    }
    ctx->pc = 0x4ABBA8u;
    {
        const bool branch_taken_0x4abba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abba8) {
            ctx->pc = 0x4ABC84u;
            goto label_4abc84;
        }
    }
    ctx->pc = 0x4ABBB0u;
label_4abbb0:
    // 0x4abbb0: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
label_4abbb4:
    if (ctx->pc == 0x4ABBB4u) {
        ctx->pc = 0x4ABBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBB0u;
        // 0x4abbb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBB8u;
        goto label_4abbb8;
    }
    ctx->pc = 0x4ABBB0u;
    {
        const bool branch_taken_0x4abbb0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBB0u;
        // 0x4abbb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abbb0) {
            ctx->pc = 0x4ABC08u;
            goto label_4abc08;
        }
    }
    ctx->pc = 0x4ABBB8u;
label_4abbb8:
    // 0x4abbb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x4abbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4abbbc:
    // 0x4abbbc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_4abbc0:
    if (ctx->pc == 0x4ABBC0u) {
        ctx->pc = 0x4ABBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBBCu;
        // 0x4abbc0: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBC4u;
        goto label_4abbc4;
    }
    ctx->pc = 0x4ABBBCu;
    {
        const bool branch_taken_0x4abbbc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4ABBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBBCu;
        // 0x4abbc0: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abbbc) {
            ctx->pc = 0x4ABC08u;
            goto label_4abc08;
        }
    }
    ctx->pc = 0x4ABBC4u;
label_4abbc4:
    // 0x4abbc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4abbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4abbc8:
    // 0x4abbc8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x4abbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4abbcc:
    // 0x4abbcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4abbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abbd0:
    // 0x4abbd0: 0x8fab0034  lw          $t3, 0x34($sp)
    ctx->pc = 0x4abbd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4abbd4:
    // 0x4abbd4: 0x3d13023  subu        $a2, $fp, $s1
    ctx->pc = 0x4abbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_4abbd8:
    // 0x4abbd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4abbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4abbdc:
    // 0x4abbdc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x4abbdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4abbe0:
    // 0x4abbe0: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x4abbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_4abbe4:
    // 0x4abbe4: 0xc12aec4  jal         func_4ABB10
label_4abbe8:
    if (ctx->pc == 0x4ABBE8u) {
        ctx->pc = 0x4ABBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBE4u;
        // 0x4abbe8: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBECu;
        goto label_4abbec;
    }
    ctx->pc = 0x4ABBE4u;
    SET_GPR_U32(ctx, 31, 0x4ABBECu);
    ctx->pc = 0x4ABBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABBE4u;
    // 0x4abbe8: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABB10u;
    goto label_4abb10;
    ctx->pc = 0x4ABBECu;
label_4abbec:
    // 0x4abbec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4abbf0:
    if (ctx->pc == 0x4ABBF0u) {
        ctx->pc = 0x4ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBECu;
        // 0x4abbf0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABBF4u;
        goto label_4abbf4;
    }
    ctx->pc = 0x4ABBECu;
    {
        const bool branch_taken_0x4abbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABBECu;
        // 0x4abbf0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abbec) {
            ctx->pc = 0x4ABC74u;
            goto label_4abc74;
        }
    }
    ctx->pc = 0x4ABBF4u;
label_4abbf4:
    // 0x4abbf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4abbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abbf8:
    // 0x4abbf8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4abbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4abbfc:
    // 0x4abbfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4abbfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abc00:
    // 0x4abc00: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4abc00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4abc04:
    // 0x4abc04: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x4abc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4abc08:
    // 0x4abc08: 0x14800030  bnez        $a0, . + 4 + (0x30 << 2)
label_4abc0c:
    if (ctx->pc == 0x4ABC0Cu) {
        ctx->pc = 0x4ABC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC08u;
        // 0x4abc0c: 0x23e102b  sltu        $v0, $s1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC10u;
        goto label_4abc10;
    }
    ctx->pc = 0x4ABC08u;
    {
        const bool branch_taken_0x4abc08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC08u;
        // 0x4abc0c: 0x23e102b  sltu        $v0, $s1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc08) {
            ctx->pc = 0x4ABCCCu;
            goto label_4abccc;
        }
    }
    ctx->pc = 0x4ABC10u;
label_4abc10:
    // 0x4abc10: 0x114100  sll         $t0, $s1, 4
    ctx->pc = 0x4abc10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_4abc14:
    // 0x4abc14: 0x3c021c02  lui         $v0, 0x1C02
    ctx->pc = 0x4abc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7170 << 16));
label_4abc18:
    // 0x4abc18: 0x1178021  addu        $s0, $t0, $s7
    ctx->pc = 0x4abc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
label_4abc1c:
    // 0x4abc1c: 0x34420037  ori         $v0, $v0, 0x37
    ctx->pc = 0x4abc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
label_4abc20:
    // 0x4abc20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4abc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4abc24:
    // 0x4abc24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4abc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abc28:
    // 0x4abc28: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4abc28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4abc2c:
    // 0x4abc2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4abc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4abc30:
    // 0x4abc30: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4abc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_4abc34:
    // 0x4abc34: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4abc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4abc38:
    // 0x4abc38: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x4abc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_4abc3c:
    // 0x4abc3c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4abc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4abc40:
    // 0x4abc40: 0xc10486e  jal         func_4121B8
label_4abc44:
    if (ctx->pc == 0x4ABC44u) {
        ctx->pc = 0x4ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC40u;
        // 0x4abc44: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC48u;
        goto label_4abc48;
    }
    ctx->pc = 0x4ABC40u;
    SET_GPR_U32(ctx, 31, 0x4ABC48u);
    ctx->pc = 0x4ABC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABC40u;
    // 0x4abc44: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4ABC40u, 0x4ABC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABC48u;
label_4abc48:
    // 0x4abc48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4abc4c:
    if (ctx->pc == 0x4ABC4Cu) {
        ctx->pc = 0x4ABC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC48u;
        // 0x4abc4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC50u;
        goto label_4abc50;
    }
    ctx->pc = 0x4ABC48u;
    {
        const bool branch_taken_0x4abc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC48u;
        // 0x4abc4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc48) {
            ctx->pc = 0x4ABC74u;
            goto label_4abc74;
        }
    }
    ctx->pc = 0x4ABC50u;
label_4abc50:
    // 0x4abc50: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x4abc50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4abc54:
    // 0x4abc54: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x4abc54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_4abc58:
    // 0x4abc58: 0x1000000a  b           . + 4 + (0xA << 2)
label_4abc5c:
    if (ctx->pc == 0x4ABC5Cu) {
        ctx->pc = 0x4ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC58u;
        // 0x4abc5c: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC60u;
        goto label_4abc60;
    }
    ctx->pc = 0x4ABC58u;
    {
        const bool branch_taken_0x4abc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC58u;
        // 0x4abc5c: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc58) {
            ctx->pc = 0x4ABC84u;
            goto label_4abc84;
        }
    }
    ctx->pc = 0x4ABC60u;
label_4abc60:
    // 0x4abc60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4abc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abc64:
    // 0x4abc64: 0xc10486e  jal         func_4121B8
label_4abc68:
    if (ctx->pc == 0x4ABC68u) {
        ctx->pc = 0x4ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC64u;
        // 0x4abc68: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC6Cu;
        goto label_4abc6c;
    }
    ctx->pc = 0x4ABC64u;
    SET_GPR_U32(ctx, 31, 0x4ABC6Cu);
    ctx->pc = 0x4ABC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABC64u;
    // 0x4abc68: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4ABC64u, 0x4ABC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABC6Cu;
label_4abc6c:
    // 0x4abc6c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4abc70:
    if (ctx->pc == 0x4ABC70u) {
        ctx->pc = 0x4ABC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC6Cu;
        // 0x4abc70: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC74u;
        goto label_4abc74;
    }
    ctx->pc = 0x4ABC6Cu;
    {
        const bool branch_taken_0x4abc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abc6c) {
            ctx->pc = 0x4ABC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABC6Cu;
            // 0x4abc70: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC7Cu;
            goto label_4abc7c;
        }
    }
    ctx->pc = 0x4ABC74u;
label_4abc74:
    // 0x4abc74: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4abc78:
    if (ctx->pc == 0x4ABC78u) {
        ctx->pc = 0x4ABC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC74u;
        // 0x4abc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC7Cu;
        goto label_4abc7c;
    }
    ctx->pc = 0x4ABC74u;
    {
        const bool branch_taken_0x4abc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC74u;
        // 0x4abc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc74) {
            ctx->pc = 0x4ABCF4u;
            goto label_4abcf4;
        }
    }
    ctx->pc = 0x4ABC7Cu;
label_4abc7c:
    // 0x4abc7c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4abc7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4abc80:
    // 0x4abc80: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4abc80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4abc84:
    // 0x4abc84: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_4abc88:
    if (ctx->pc == 0x4ABC88u) {
        ctx->pc = 0x4ABC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC84u;
        // 0x4abc88: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC8Cu;
        goto label_4abc8c;
    }
    ctx->pc = 0x4ABC84u;
    {
        const bool branch_taken_0x4abc84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC84u;
        // 0x4abc88: 0x8fa70034  lw          $a3, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc84) {
            ctx->pc = 0x4ABCB0u;
            goto label_4abcb0;
        }
    }
    ctx->pc = 0x4ABC8Cu;
label_4abc8c:
    // 0x4abc8c: 0x2f22821  addu        $a1, $s7, $s2
    ctx->pc = 0x4abc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_4abc90:
    // 0x4abc90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4abc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abc94:
    // 0x4abc94: 0x2c0f809  jalr        $s6
label_4abc98:
    if (ctx->pc == 0x4ABC98u) {
        ctx->pc = 0x4ABC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC94u;
        // 0x4abc98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABC9Cu;
        goto label_4abc9c;
    }
    ctx->pc = 0x4ABC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x4ABC9Cu);
        ctx->pc = 0x4ABC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABC94u;
        // 0x4abc98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABC94u, 0x4ABC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ABC9Cu;
label_4abc9c:
    // 0x4abc9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4abc9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4abca0:
    // 0x4abca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4abca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4abca4:
    // 0x4abca4: 0x1062fff3  beq         $v1, $v0, . + 4 + (-0xD << 2)
label_4abca8:
    if (ctx->pc == 0x4ABCA8u) {
        ctx->pc = 0x4ABCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCA4u;
        // 0x4abca8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCACu;
        goto label_4abcac;
    }
    ctx->pc = 0x4ABCA4u;
    {
        const bool branch_taken_0x4abca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ABCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCA4u;
        // 0x4abca8: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abca4) {
            ctx->pc = 0x4ABC74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abc74;
        }
    }
    ctx->pc = 0x4ABCACu;
label_4abcac:
    // 0x4abcac: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x4abcacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_4abcb0:
    // 0x4abcb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x4abcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4abcb4:
    // 0x4abcb4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4abcb8:
    if (ctx->pc == 0x4ABCB8u) {
        ctx->pc = 0x4ABCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCB4u;
        // 0x4abcb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCBCu;
        goto label_4abcbc;
    }
    ctx->pc = 0x4ABCB4u;
    {
        const bool branch_taken_0x4abcb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4abcb4) {
            ctx->pc = 0x4ABCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABCB4u;
            // 0x4abcb8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABCC8u;
            goto label_4abcc8;
        }
    }
    ctx->pc = 0x4ABCBCu;
label_4abcbc:
    // 0x4abcbc: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_4abcc0:
    if (ctx->pc == 0x4ABCC0u) {
        ctx->pc = 0x4ABCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCBCu;
        // 0x4abcc0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCC4u;
        goto label_4abcc4;
    }
    ctx->pc = 0x4ABCBCu;
    {
        const bool branch_taken_0x4abcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x4ABCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCBCu;
        // 0x4abcc0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcbc) {
            ctx->pc = 0x4ABCD8u;
            goto label_4abcd8;
        }
    }
    ctx->pc = 0x4ABCC4u;
label_4abcc4:
    // 0x4abcc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4abcc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4abcc8:
    // 0x4abcc8: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x4abcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4abccc:
    // 0x4abccc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_4abcd0:
    if (ctx->pc == 0x4ABCD0u) {
        ctx->pc = 0x4ABCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCCCu;
        // 0x4abcd0: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCD4u;
        goto label_4abcd4;
    }
    ctx->pc = 0x4ABCCCu;
    {
        const bool branch_taken_0x4abccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCCCu;
        // 0x4abcd0: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abccc) {
            ctx->pc = 0x4ABB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abb88;
        }
    }
    ctx->pc = 0x4ABCD4u;
label_4abcd4:
    // 0x4abcd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4abcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4abcd8:
    // 0x4abcd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4abcdc:
    if (ctx->pc == 0x4ABCDCu) {
        ctx->pc = 0x4ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCD8u;
        // 0x4abcdc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCE0u;
        goto label_4abce0;
    }
    ctx->pc = 0x4ABCD8u;
    {
        const bool branch_taken_0x4abcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCD8u;
        // 0x4abcdc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcd8) {
            ctx->pc = 0x4ABCE4u;
            goto label_4abce4;
        }
    }
    ctx->pc = 0x4ABCE0u;
label_4abce0:
    // 0x4abce0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4abce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_4abce4:
    // 0x4abce4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x4abce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4abce8:
    // 0x4abce8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4abcec:
    if (ctx->pc == 0x4ABCECu) {
        ctx->pc = 0x4ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABCE8u;
        // 0x4abcec: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABCF0u;
        goto label_4abcf0;
    }
    ctx->pc = 0x4ABCE8u;
    {
        const bool branch_taken_0x4abce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4abce8) {
            ctx->pc = 0x4ABCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ABCE8u;
            // 0x4abcec: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ABCF0u;
            goto label_4abcf0;
        }
    }
    ctx->pc = 0x4ABCF0u;
label_4abcf0:
    // 0x4abcf0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4abcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abcf4:
    // 0x4abcf4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4abcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4abcf8:
    // 0x4abcf8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4abcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4abcfc:
    // 0x4abcfc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4abcfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4abd00:
    // 0x4abd00: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4abd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4abd04:
    // 0x4abd04: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4abd04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4abd08:
    // 0x4abd08: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4abd08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4abd0c:
    // 0x4abd0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4abd0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4abd10:
    // 0x4abd10: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4abd10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4abd14:
    // 0x4abd14: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4abd14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4abd18:
    // 0x4abd18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4abd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4abd1c:
    // 0x4abd1c: 0x3e00008  jr          $ra
label_4abd20:
    if (ctx->pc == 0x4ABD20u) {
        ctx->pc = 0x4ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD1Cu;
        // 0x4abd20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ABD24u;
        goto label_4abd24;
    }
    ctx->pc = 0x4ABD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD1Cu;
        // 0x4abd20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABD24u;
label_4abd24:
    // 0x4abd24: 0x0  nop
    ctx->pc = 0x4abd24u;
    // NOP
    ctx->pc = 0x4abd28u;
}
