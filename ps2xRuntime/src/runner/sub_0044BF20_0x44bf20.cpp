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

// Function: sub_0044BF20
// Address: 0x44bf20 - 0x44c210
void sub_0044BF20_0x44bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BF20_0x44bf20");
#endif

    switch (ctx->pc) {
        case 0x44bf20u: goto label_44bf20;
        case 0x44bf24u: goto label_44bf24;
        case 0x44bf28u: goto label_44bf28;
        case 0x44bf2cu: goto label_44bf2c;
        case 0x44bf30u: goto label_44bf30;
        case 0x44bf34u: goto label_44bf34;
        case 0x44bf38u: goto label_44bf38;
        case 0x44bf3cu: goto label_44bf3c;
        case 0x44bf40u: goto label_44bf40;
        case 0x44bf44u: goto label_44bf44;
        case 0x44bf48u: goto label_44bf48;
        case 0x44bf4cu: goto label_44bf4c;
        case 0x44bf50u: goto label_44bf50;
        case 0x44bf54u: goto label_44bf54;
        case 0x44bf58u: goto label_44bf58;
        case 0x44bf5cu: goto label_44bf5c;
        case 0x44bf60u: goto label_44bf60;
        case 0x44bf64u: goto label_44bf64;
        case 0x44bf68u: goto label_44bf68;
        case 0x44bf6cu: goto label_44bf6c;
        case 0x44bf70u: goto label_44bf70;
        case 0x44bf74u: goto label_44bf74;
        case 0x44bf78u: goto label_44bf78;
        case 0x44bf7cu: goto label_44bf7c;
        case 0x44bf80u: goto label_44bf80;
        case 0x44bf84u: goto label_44bf84;
        case 0x44bf88u: goto label_44bf88;
        case 0x44bf8cu: goto label_44bf8c;
        case 0x44bf90u: goto label_44bf90;
        case 0x44bf94u: goto label_44bf94;
        case 0x44bf98u: goto label_44bf98;
        case 0x44bf9cu: goto label_44bf9c;
        case 0x44bfa0u: goto label_44bfa0;
        case 0x44bfa4u: goto label_44bfa4;
        case 0x44bfa8u: goto label_44bfa8;
        case 0x44bfacu: goto label_44bfac;
        case 0x44bfb0u: goto label_44bfb0;
        case 0x44bfb4u: goto label_44bfb4;
        case 0x44bfb8u: goto label_44bfb8;
        case 0x44bfbcu: goto label_44bfbc;
        case 0x44bfc0u: goto label_44bfc0;
        case 0x44bfc4u: goto label_44bfc4;
        case 0x44bfc8u: goto label_44bfc8;
        case 0x44bfccu: goto label_44bfcc;
        case 0x44bfd0u: goto label_44bfd0;
        case 0x44bfd4u: goto label_44bfd4;
        case 0x44bfd8u: goto label_44bfd8;
        case 0x44bfdcu: goto label_44bfdc;
        case 0x44bfe0u: goto label_44bfe0;
        case 0x44bfe4u: goto label_44bfe4;
        case 0x44bfe8u: goto label_44bfe8;
        case 0x44bfecu: goto label_44bfec;
        case 0x44bff0u: goto label_44bff0;
        case 0x44bff4u: goto label_44bff4;
        case 0x44bff8u: goto label_44bff8;
        case 0x44bffcu: goto label_44bffc;
        case 0x44c000u: goto label_44c000;
        case 0x44c004u: goto label_44c004;
        case 0x44c008u: goto label_44c008;
        case 0x44c00cu: goto label_44c00c;
        case 0x44c010u: goto label_44c010;
        case 0x44c014u: goto label_44c014;
        case 0x44c018u: goto label_44c018;
        case 0x44c01cu: goto label_44c01c;
        case 0x44c020u: goto label_44c020;
        case 0x44c024u: goto label_44c024;
        case 0x44c028u: goto label_44c028;
        case 0x44c02cu: goto label_44c02c;
        case 0x44c030u: goto label_44c030;
        case 0x44c034u: goto label_44c034;
        case 0x44c038u: goto label_44c038;
        case 0x44c03cu: goto label_44c03c;
        case 0x44c040u: goto label_44c040;
        case 0x44c044u: goto label_44c044;
        case 0x44c048u: goto label_44c048;
        case 0x44c04cu: goto label_44c04c;
        case 0x44c050u: goto label_44c050;
        case 0x44c054u: goto label_44c054;
        case 0x44c058u: goto label_44c058;
        case 0x44c05cu: goto label_44c05c;
        case 0x44c060u: goto label_44c060;
        case 0x44c064u: goto label_44c064;
        case 0x44c068u: goto label_44c068;
        case 0x44c06cu: goto label_44c06c;
        case 0x44c070u: goto label_44c070;
        case 0x44c074u: goto label_44c074;
        case 0x44c078u: goto label_44c078;
        case 0x44c07cu: goto label_44c07c;
        case 0x44c080u: goto label_44c080;
        case 0x44c084u: goto label_44c084;
        case 0x44c088u: goto label_44c088;
        case 0x44c08cu: goto label_44c08c;
        case 0x44c090u: goto label_44c090;
        case 0x44c094u: goto label_44c094;
        case 0x44c098u: goto label_44c098;
        case 0x44c09cu: goto label_44c09c;
        case 0x44c0a0u: goto label_44c0a0;
        case 0x44c0a4u: goto label_44c0a4;
        case 0x44c0a8u: goto label_44c0a8;
        case 0x44c0acu: goto label_44c0ac;
        case 0x44c0b0u: goto label_44c0b0;
        case 0x44c0b4u: goto label_44c0b4;
        case 0x44c0b8u: goto label_44c0b8;
        case 0x44c0bcu: goto label_44c0bc;
        case 0x44c0c0u: goto label_44c0c0;
        case 0x44c0c4u: goto label_44c0c4;
        case 0x44c0c8u: goto label_44c0c8;
        case 0x44c0ccu: goto label_44c0cc;
        case 0x44c0d0u: goto label_44c0d0;
        case 0x44c0d4u: goto label_44c0d4;
        case 0x44c0d8u: goto label_44c0d8;
        case 0x44c0dcu: goto label_44c0dc;
        case 0x44c0e0u: goto label_44c0e0;
        case 0x44c0e4u: goto label_44c0e4;
        case 0x44c0e8u: goto label_44c0e8;
        case 0x44c0ecu: goto label_44c0ec;
        case 0x44c0f0u: goto label_44c0f0;
        case 0x44c0f4u: goto label_44c0f4;
        case 0x44c0f8u: goto label_44c0f8;
        case 0x44c0fcu: goto label_44c0fc;
        case 0x44c100u: goto label_44c100;
        case 0x44c104u: goto label_44c104;
        case 0x44c108u: goto label_44c108;
        case 0x44c10cu: goto label_44c10c;
        case 0x44c110u: goto label_44c110;
        case 0x44c114u: goto label_44c114;
        case 0x44c118u: goto label_44c118;
        case 0x44c11cu: goto label_44c11c;
        case 0x44c120u: goto label_44c120;
        case 0x44c124u: goto label_44c124;
        case 0x44c128u: goto label_44c128;
        case 0x44c12cu: goto label_44c12c;
        case 0x44c130u: goto label_44c130;
        case 0x44c134u: goto label_44c134;
        case 0x44c138u: goto label_44c138;
        case 0x44c13cu: goto label_44c13c;
        case 0x44c140u: goto label_44c140;
        case 0x44c144u: goto label_44c144;
        case 0x44c148u: goto label_44c148;
        case 0x44c14cu: goto label_44c14c;
        case 0x44c150u: goto label_44c150;
        case 0x44c154u: goto label_44c154;
        case 0x44c158u: goto label_44c158;
        case 0x44c15cu: goto label_44c15c;
        case 0x44c160u: goto label_44c160;
        case 0x44c164u: goto label_44c164;
        case 0x44c168u: goto label_44c168;
        case 0x44c16cu: goto label_44c16c;
        case 0x44c170u: goto label_44c170;
        case 0x44c174u: goto label_44c174;
        case 0x44c178u: goto label_44c178;
        case 0x44c17cu: goto label_44c17c;
        case 0x44c180u: goto label_44c180;
        case 0x44c184u: goto label_44c184;
        case 0x44c188u: goto label_44c188;
        case 0x44c18cu: goto label_44c18c;
        case 0x44c190u: goto label_44c190;
        case 0x44c194u: goto label_44c194;
        case 0x44c198u: goto label_44c198;
        case 0x44c19cu: goto label_44c19c;
        case 0x44c1a0u: goto label_44c1a0;
        case 0x44c1a4u: goto label_44c1a4;
        case 0x44c1a8u: goto label_44c1a8;
        case 0x44c1acu: goto label_44c1ac;
        case 0x44c1b0u: goto label_44c1b0;
        case 0x44c1b4u: goto label_44c1b4;
        case 0x44c1b8u: goto label_44c1b8;
        case 0x44c1bcu: goto label_44c1bc;
        case 0x44c1c0u: goto label_44c1c0;
        case 0x44c1c4u: goto label_44c1c4;
        case 0x44c1c8u: goto label_44c1c8;
        case 0x44c1ccu: goto label_44c1cc;
        case 0x44c1d0u: goto label_44c1d0;
        case 0x44c1d4u: goto label_44c1d4;
        case 0x44c1d8u: goto label_44c1d8;
        case 0x44c1dcu: goto label_44c1dc;
        case 0x44c1e0u: goto label_44c1e0;
        case 0x44c1e4u: goto label_44c1e4;
        case 0x44c1e8u: goto label_44c1e8;
        case 0x44c1ecu: goto label_44c1ec;
        case 0x44c1f0u: goto label_44c1f0;
        case 0x44c1f4u: goto label_44c1f4;
        case 0x44c1f8u: goto label_44c1f8;
        case 0x44c1fcu: goto label_44c1fc;
        case 0x44c200u: goto label_44c200;
        case 0x44c204u: goto label_44c204;
        case 0x44c208u: goto label_44c208;
        case 0x44c20cu: goto label_44c20c;
        default: break;
    }

    ctx->pc = 0x44bf20u;

label_44bf20:
    // 0x44bf20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44bf24:
    // 0x44bf24: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x44bf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44bf28:
    // 0x44bf28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_44bf2c:
    // 0x44bf2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44bf2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44bf30:
    // 0x44bf30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x44bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_44bf34:
    // 0x44bf34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44bf34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44bf38:
    // 0x44bf38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x44bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_44bf3c:
    // 0x44bf3c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x44bf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_44bf40:
    // 0x44bf40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44bf44:
    // 0x44bf44: 0x8d06ffe0  lw          $a2, -0x20($t0)
    ctx->pc = 0x44bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
label_44bf48:
    // 0x44bf48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_44bf4c:
    if (ctx->pc == 0x44BF4Cu) {
        ctx->pc = 0x44BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF48u;
        // 0x44bf4c: 0x2513ffe0  addiu       $s3, $t0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BF50u;
        goto label_44bf50;
    }
    ctx->pc = 0x44BF48u;
    {
        const bool branch_taken_0x44bf48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF48u;
        // 0x44bf4c: 0x2513ffe0  addiu       $s3, $t0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bf48) {
            ctx->pc = 0x44BF58u;
            goto label_44bf58;
        }
    }
    ctx->pc = 0x44BF50u;
label_44bf50:
    // 0x44bf50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x44bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_44bf54:
    // 0x44bf54: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x44bf54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44bf58:
    // 0x44bf58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x44bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44bf5c:
    // 0x44bf5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_44bf60:
    if (ctx->pc == 0x44BF60u) {
        ctx->pc = 0x44BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF5Cu;
        // 0x44bf60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BF64u;
        goto label_44bf64;
    }
    ctx->pc = 0x44BF5Cu;
    {
        const bool branch_taken_0x44bf5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF5Cu;
        // 0x44bf60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bf5c) {
            ctx->pc = 0x44BF6Cu;
            goto label_44bf6c;
        }
    }
    ctx->pc = 0x44BF64u;
label_44bf64:
    // 0x44bf64: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x44bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44bf68:
    // 0x44bf68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x44bf68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44bf6c:
    // 0x44bf6c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_44bf70:
    if (ctx->pc == 0x44BF70u) {
        ctx->pc = 0x44BF74u;
        goto label_44bf74;
    }
    ctx->pc = 0x44BF6Cu;
    {
        const bool branch_taken_0x44bf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bf6c) {
            ctx->pc = 0x44C03Cu;
            goto label_44c03c;
        }
    }
    ctx->pc = 0x44BF74u;
label_44bf74:
    // 0x44bf74: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_44bf78:
    if (ctx->pc == 0x44BF78u) {
        ctx->pc = 0x44BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF74u;
        // 0x44bf78: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BF7Cu;
        goto label_44bf7c;
    }
    ctx->pc = 0x44BF74u;
    {
        const bool branch_taken_0x44bf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bf74) {
            ctx->pc = 0x44BF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BF74u;
            // 0x44bf78: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C00Cu;
            goto label_44c00c;
        }
    }
    ctx->pc = 0x44BF7Cu;
label_44bf7c:
    // 0x44bf7c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x44bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44bf80:
    // 0x44bf80: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x44bf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_44bf84:
    // 0x44bf84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44bf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44bf88:
    // 0x44bf88: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x44bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44bf8c:
    // 0x44bf8c: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x44bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_44bf90:
    // 0x44bf90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x44bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44bf94:
    // 0x44bf94: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_44bf98:
    if (ctx->pc == 0x44BF98u) {
        ctx->pc = 0x44BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF94u;
        // 0x44bf98: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44BF9Cu;
        goto label_44bf9c;
    }
    ctx->pc = 0x44BF94u;
    {
        const bool branch_taken_0x44bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BF94u;
        // 0x44bf98: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bf94) {
            ctx->pc = 0x44BFB4u;
            goto label_44bfb4;
        }
    }
    ctx->pc = 0x44BF9Cu;
label_44bf9c:
    // 0x44bf9c: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x44bf9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44bfa0:
    // 0x44bfa0: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x44bfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44bfa4:
    // 0x44bfa4: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x44bfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bfa8:
    // 0x44bfa8: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x44bfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44bfac:
    // 0x44bfac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x44bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_44bfb0:
    // 0x44bfb0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x44bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_44bfb4:
    // 0x44bfb4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x44bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44bfb8:
    // 0x44bfb8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x44bfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44bfbc:
    // 0x44bfbc: 0x8d05ffe0  lw          $a1, -0x20($t0)
    ctx->pc = 0x44bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
label_44bfc0:
    // 0x44bfc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44bfc4:
    // 0x44bfc4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x44bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_44bfc8:
    // 0x44bfc8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x44bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_44bfcc:
    // 0x44bfcc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x44bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_44bfd0:
    // 0x44bfd0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x44bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_44bfd4:
    // 0x44bfd4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x44bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44bfd8:
    // 0x44bfd8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44bfdc:
    // 0x44bfdc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x44bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_44bfe0:
    // 0x44bfe0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x44bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44bfe4:
    // 0x44bfe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_44bfe8:
    // 0x44bfe8: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x44bfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44bfec:
    // 0x44bfec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44bff0:
    // 0x44bff0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x44bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_44bff4:
    // 0x44bff4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x44bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_44bff8:
    // 0x44bff8: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
label_44bffc:
    if (ctx->pc == 0x44BFFCu) {
        ctx->pc = 0x44BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BFF8u;
        // 0x44bffc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C000u;
        goto label_44c000;
    }
    ctx->pc = 0x44BFF8u;
    {
        const bool branch_taken_0x44bff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BFF8u;
        // 0x44bffc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bff8) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C000u;
label_44c000:
    // 0x44c000: 0x8d02ffe0  lw          $v0, -0x20($t0)
    ctx->pc = 0x44c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
label_44c004:
    // 0x44c004: 0x1000007a  b           . + 4 + (0x7A << 2)
label_44c008:
    if (ctx->pc == 0x44C008u) {
        ctx->pc = 0x44C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C004u;
        // 0x44c008: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C00Cu;
        goto label_44c00c;
    }
    ctx->pc = 0x44C004u;
    {
        const bool branch_taken_0x44c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C004u;
        // 0x44c008: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c004) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C00Cu;
label_44c00c:
    // 0x44c00c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44c010:
    // 0x44c010: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x44c010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_44c014:
    // 0x44c014: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x44c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_44c018:
    // 0x44c018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44c01c:
    // 0x44c01c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x44c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_44c020:
    // 0x44c020: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x44c020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_44c024:
    // 0x44c024: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x44c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44c028:
    // 0x44c028: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_44c02c:
    if (ctx->pc == 0x44C02Cu) {
        ctx->pc = 0x44C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C028u;
        // 0x44c02c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C030u;
        goto label_44c030;
    }
    ctx->pc = 0x44C028u;
    {
        const bool branch_taken_0x44c028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C028u;
        // 0x44c02c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c028) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C030u;
label_44c030:
    // 0x44c030: 0x8d02ffe0  lw          $v0, -0x20($t0)
    ctx->pc = 0x44c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967264)));
label_44c034:
    // 0x44c034: 0x1000006e  b           . + 4 + (0x6E << 2)
label_44c038:
    if (ctx->pc == 0x44C038u) {
        ctx->pc = 0x44C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C034u;
        // 0x44c038: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C03Cu;
        goto label_44c03c;
    }
    ctx->pc = 0x44C034u;
    {
        const bool branch_taken_0x44c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C034u;
        // 0x44c038: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c034) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C03Cu;
label_44c03c:
    // 0x44c03c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_44c040:
    if (ctx->pc == 0x44C040u) {
        ctx->pc = 0x44C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C03Cu;
        // 0x44c040: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C044u;
        goto label_44c044;
    }
    ctx->pc = 0x44C03Cu;
    {
        const bool branch_taken_0x44c03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c03c) {
            ctx->pc = 0x44C040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C03Cu;
            // 0x44c040: 0x8e500014  lw          $s0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C088u;
            goto label_44c088;
        }
    }
    ctx->pc = 0x44C044u;
label_44c044:
    // 0x44c044: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x44c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44c048:
    // 0x44c048: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x44c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44c04c:
    // 0x44c04c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x44c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_44c050:
    // 0x44c050: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x44c050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_44c054:
    // 0x44c054: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x44c054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_44c058:
    // 0x44c058: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x44c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_44c05c:
    // 0x44c05c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_44c060:
    // 0x44c060: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x44c060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_44c064:
    // 0x44c064: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x44c064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_44c068:
    // 0x44c068: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_44c06c:
    // 0x44c06c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x44c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44c070:
    // 0x44c070: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x44c070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44c074:
    // 0x44c074: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x44c074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
label_44c078:
    // 0x44c078: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
label_44c07c:
    if (ctx->pc == 0x44C07Cu) {
        ctx->pc = 0x44C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C078u;
        // 0x44c07c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C080u;
        goto label_44c080;
    }
    ctx->pc = 0x44C078u;
    {
        const bool branch_taken_0x44c078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C078u;
        // 0x44c07c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c078) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C080u;
label_44c080:
    // 0x44c080: 0x1000005b  b           . + 4 + (0x5B << 2)
label_44c084:
    if (ctx->pc == 0x44C084u) {
        ctx->pc = 0x44C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C080u;
        // 0x44c084: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C088u;
        goto label_44c088;
    }
    ctx->pc = 0x44C080u;
    {
        const bool branch_taken_0x44c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C080u;
        // 0x44c084: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c080) {
            ctx->pc = 0x44C1F0u;
            goto label_44c1f0;
        }
    }
    ctx->pc = 0x44C088u;
label_44c088:
    // 0x44c088: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x44c088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44c08c:
    // 0x44c08c: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x44c08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_44c090:
    // 0x44c090: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_44c094:
    if (ctx->pc == 0x44C094u) {
        ctx->pc = 0x44C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C090u;
        // 0x44c094: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C098u;
        goto label_44c098;
    }
    ctx->pc = 0x44C090u;
    {
        const bool branch_taken_0x44c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C090u;
        // 0x44c094: 0x8e51000c  lw          $s1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c090) {
            ctx->pc = 0x44C1C0u;
            goto label_44c1c0;
        }
    }
    ctx->pc = 0x44C098u;
label_44c098:
    // 0x44c098: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x44c098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_44c09c:
    // 0x44c09c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x44c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_44c0a0:
    // 0x44c0a0: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x44c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_44c0a4:
    // 0x44c0a4: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x44c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_44c0a8:
    // 0x44c0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44c0ac:
    // 0x44c0ac: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x44c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_44c0b0:
    // 0x44c0b0: 0xae470010  sw          $a3, 0x10($s2)
    ctx->pc = 0x44c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 7));
label_44c0b4:
    // 0x44c0b4: 0x40f809  jalr        $v0
label_44c0b8:
    if (ctx->pc == 0x44C0B8u) {
        ctx->pc = 0x44C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0B4u;
        // 0x44c0b8: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C0BCu;
        goto label_44c0bc;
    }
    ctx->pc = 0x44C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C0BCu);
        ctx->pc = 0x44C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0B4u;
        // 0x44c0b8: 0x34c60409  ori         $a2, $a2, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C0B4u, 0x44C0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C0BCu;
label_44c0bc:
    // 0x44c0bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44c0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c0c0:
    // 0x44c0c0: 0x5620000f  bnel        $s1, $zero, . + 4 + (0xF << 2)
label_44c0c4:
    if (ctx->pc == 0x44C0C4u) {
        ctx->pc = 0x44C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0C0u;
        // 0x44c0c4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C0C8u;
        goto label_44c0c8;
    }
    ctx->pc = 0x44C0C0u;
    {
        const bool branch_taken_0x44c0c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c0c0) {
            ctx->pc = 0x44C0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C0C0u;
            // 0x44c0c4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C100u;
            goto label_44c100;
        }
    }
    ctx->pc = 0x44C0C8u;
label_44c0c8:
    // 0x44c0c8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x44c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44c0cc:
    // 0x44c0cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c0d0:
    // 0x44c0d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_44c0d4:
    // 0x44c0d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x44c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_44c0d8:
    // 0x44c0d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x44c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_44c0dc:
    // 0x44c0dc: 0xc1035f6  jal         func_40D7D8
label_44c0e0:
    if (ctx->pc == 0x44C0E0u) {
        ctx->pc = 0x44C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0DCu;
        // 0x44c0e0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C0E4u;
        goto label_44c0e4;
    }
    ctx->pc = 0x44C0DCu;
    SET_GPR_U32(ctx, 31, 0x44C0E4u);
    ctx->pc = 0x44C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0DCu;
    // 0x44c0e0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x44C0DCu, 0x44C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0E4u;
label_44c0e4:
    // 0x44c0e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_44c0e8:
    // 0x44c0e8: 0xc103628  jal         func_40D8A0
label_44c0ec:
    if (ctx->pc == 0x44C0ECu) {
        ctx->pc = 0x44C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0E8u;
        // 0x44c0ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C0F0u;
        goto label_44c0f0;
    }
    ctx->pc = 0x44C0E8u;
    SET_GPR_U32(ctx, 31, 0x44C0F0u);
    ctx->pc = 0x44C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C0E8u;
    // 0x44c0ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44C0E8u, 0x44C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C0F0u;
label_44c0f0:
    // 0x44c0f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x44c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_44c0f4:
    // 0x44c0f4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x44c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_44c0f8:
    // 0x44c0f8: 0x10000031  b           . + 4 + (0x31 << 2)
label_44c0fc:
    if (ctx->pc == 0x44C0FCu) {
        ctx->pc = 0x44C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0F8u;
        // 0x44c0fc: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C100u;
        goto label_44c100;
    }
    ctx->pc = 0x44C0F8u;
    {
        const bool branch_taken_0x44c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C0F8u;
        // 0x44c0fc: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c0f8) {
            ctx->pc = 0x44C1C0u;
            goto label_44c1c0;
        }
    }
    ctx->pc = 0x44C100u;
label_44c100:
    // 0x44c100: 0x5222002f  beql        $s1, $v0, . + 4 + (0x2F << 2)
label_44c104:
    if (ctx->pc == 0x44C104u) {
        ctx->pc = 0x44C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C100u;
        // 0x44c104: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C108u;
        goto label_44c108;
    }
    ctx->pc = 0x44C100u;
    {
        const bool branch_taken_0x44c100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x44c100) {
            ctx->pc = 0x44C104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C100u;
            // 0x44c104: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C1C0u;
            goto label_44c1c0;
        }
    }
    ctx->pc = 0x44C108u;
label_44c108:
    // 0x44c108: 0x5200002d  beql        $s0, $zero, . + 4 + (0x2D << 2)
label_44c10c:
    if (ctx->pc == 0x44C10Cu) {
        ctx->pc = 0x44C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C108u;
        // 0x44c10c: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C110u;
        goto label_44c110;
    }
    ctx->pc = 0x44C108u;
    {
        const bool branch_taken_0x44c108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c108) {
            ctx->pc = 0x44C10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C108u;
            // 0x44c10c: 0xae51000c  sw          $s1, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C1C0u;
            goto label_44c1c0;
        }
    }
    ctx->pc = 0x44C110u;
label_44c110:
    // 0x44c110: 0x101023  negu        $v0, $s0
    ctx->pc = 0x44c110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_44c114:
    // 0x44c114: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x44c114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44c118:
    // 0x44c118: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x44c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_44c11c:
    // 0x44c11c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_44c120:
    if (ctx->pc == 0x44C120u) {
        ctx->pc = 0x44C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C11Cu;
        // 0x44c120: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C124u;
        goto label_44c124;
    }
    ctx->pc = 0x44C11Cu;
    {
        const bool branch_taken_0x44c11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C11Cu;
        // 0x44c120: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c11c) {
            ctx->pc = 0x44C178u;
            goto label_44c178;
        }
    }
    ctx->pc = 0x44C124u;
label_44c124:
    // 0x44c124: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x44c124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_44c128:
    // 0x44c128: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_44c12c:
    if (ctx->pc == 0x44C12Cu) {
        ctx->pc = 0x44C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C128u;
        // 0x44c12c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C130u;
        goto label_44c130;
    }
    ctx->pc = 0x44C128u;
    {
        const bool branch_taken_0x44c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C128u;
        // 0x44c12c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c128) {
            ctx->pc = 0x44C160u;
            goto label_44c160;
        }
    }
    ctx->pc = 0x44C130u;
label_44c130:
    // 0x44c130: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_44c134:
    if (ctx->pc == 0x44C134u) {
        ctx->pc = 0x44C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C130u;
        // 0x44c134: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C138u;
        goto label_44c138;
    }
    ctx->pc = 0x44C130u;
    {
        const bool branch_taken_0x44c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c130) {
            ctx->pc = 0x44C134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44C130u;
            // 0x44c134: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44C150u;
            goto label_44c150;
        }
    }
    ctx->pc = 0x44C138u;
label_44c138:
    // 0x44c138: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x44c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_44c13c:
    // 0x44c13c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x44c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_44c140:
    // 0x44c140: 0x26290008  addiu       $t1, $s1, 0x8
    ctx->pc = 0x44c140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_44c144:
    // 0x44c144: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44c144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44c148:
    // 0x44c148: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x44c148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_44c14c:
    // 0x44c14c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c150:
    // 0x44c150: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44c150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44c154:
    // 0x44c154: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44c158:
    // 0x44c158: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44c158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44c15c:
    // 0x44c15c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x44c15cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44c160:
    // 0x44c160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c164:
    // 0x44c164: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44c164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_44c168:
    // 0x44c168: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x44c168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_44c16c:
    // 0x44c16c: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44c170:
    // 0x44c170: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_44c174:
    if (ctx->pc == 0x44C174u) {
        ctx->pc = 0x44C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C170u;
        // 0x44c174: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C178u;
        goto label_44c178;
    }
    ctx->pc = 0x44C170u;
    {
        const bool branch_taken_0x44c170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C170u;
        // 0x44c174: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c170) {
            ctx->pc = 0x44C1BCu;
            goto label_44c1bc;
        }
    }
    ctx->pc = 0x44C178u;
label_44c178:
    // 0x44c178: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x44c178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c17c:
    // 0x44c17c: 0x0  nop
    ctx->pc = 0x44c17cu;
    // NOP
label_44c180:
    // 0x44c180: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x44c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_44c184:
    // 0x44c184: 0x25250008  addiu       $a1, $t1, 0x8
    ctx->pc = 0x44c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_44c188:
    // 0x44c188: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x44c188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_44c18c:
    // 0x44c18c: 0x25260010  addiu       $a2, $t1, 0x10
    ctx->pc = 0x44c18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_44c190:
    // 0x44c190: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x44c190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_44c194:
    // 0x44c194: 0x25270018  addiu       $a3, $t1, 0x18
    ctx->pc = 0x44c194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
label_44c198:
    // 0x44c198: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x44c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_44c19c:
    // 0x44c19c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x44c19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_44c1a0:
    // 0x44c1a0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x44c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_44c1a4:
    // 0x44c1a4: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x44c1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_44c1a8:
    // 0x44c1a8: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x44c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_44c1ac:
    // 0x44c1ac: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x44c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_44c1b0:
    // 0x44c1b0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x44c1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_44c1b4:
    // 0x44c1b4: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
label_44c1b8:
    if (ctx->pc == 0x44C1B8u) {
        ctx->pc = 0x44C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1B4u;
        // 0x44c1b8: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C1BCu;
        goto label_44c1bc;
    }
    ctx->pc = 0x44C1B4u;
    {
        const bool branch_taken_0x44c1b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1B4u;
        // 0x44c1b8: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c1b4) {
            ctx->pc = 0x44C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c180;
        }
    }
    ctx->pc = 0x44C1BCu;
label_44c1bc:
    // 0x44c1bc: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x44c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_44c1c0:
    // 0x44c1c0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_44c1c4:
    if (ctx->pc == 0x44C1C4u) {
        ctx->pc = 0x44C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1C0u;
        // 0x44c1c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C1C8u;
        goto label_44c1c8;
    }
    ctx->pc = 0x44C1C0u;
    {
        const bool branch_taken_0x44c1c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1C0u;
        // 0x44c1c4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c1c0) {
            ctx->pc = 0x44C1F4u;
            goto label_44c1f4;
        }
    }
    ctx->pc = 0x44C1C8u;
label_44c1c8:
    // 0x44c1c8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x44c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_44c1cc:
    // 0x44c1cc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x44c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_44c1d0:
    // 0x44c1d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x44c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44c1d4:
    // 0x44c1d4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x44c1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_44c1d8:
    // 0x44c1d8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_44c1dc:
    if (ctx->pc == 0x44C1DCu) {
        ctx->pc = 0x44C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1D8u;
        // 0x44c1dc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C1E0u;
        goto label_44c1e0;
    }
    ctx->pc = 0x44C1D8u;
    {
        const bool branch_taken_0x44c1d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C1D8u;
        // 0x44c1dc: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c1d8) {
            ctx->pc = 0x44C1F4u;
            goto label_44c1f4;
        }
    }
    ctx->pc = 0x44C1E0u;
label_44c1e0:
    // 0x44c1e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x44c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_44c1e4:
    // 0x44c1e4: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x44c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
label_44c1e8:
    // 0x44c1e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44c1ec:
    // 0x44c1ec: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x44c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_44c1f0:
    // 0x44c1f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x44c1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44c1f4:
    // 0x44c1f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x44c1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44c1f8:
    // 0x44c1f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44c1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44c1fc:
    // 0x44c1fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x44c1fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c200:
    // 0x44c200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44c204:
    // 0x44c204: 0x3e00008  jr          $ra
label_44c208:
    if (ctx->pc == 0x44C208u) {
        ctx->pc = 0x44C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C204u;
        // 0x44c208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C20Cu;
        goto label_44c20c;
    }
    ctx->pc = 0x44C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C204u;
        // 0x44c208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C20Cu;
label_44c20c:
    // 0x44c20c: 0x0  nop
    ctx->pc = 0x44c20cu;
    // NOP
    ctx->pc = 0x44c210u;
}
