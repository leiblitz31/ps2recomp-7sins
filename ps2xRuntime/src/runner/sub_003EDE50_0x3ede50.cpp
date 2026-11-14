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

// Function: sub_003EDE50
// Address: 0x3ede50 - 0x3eefc8
void sub_003EDE50_0x3ede50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDE50_0x3ede50");
#endif

    switch (ctx->pc) {
        case 0x3edfe0u: goto label_3edfe0;
        case 0x3ee1a0u: goto label_3ee1a0;
        case 0x3ee408u: goto label_3ee408;
        case 0x3ee5c8u: goto label_3ee5c8;
        case 0x3ee7c8u: goto label_3ee7c8;
        case 0x3ee910u: goto label_3ee910;
        case 0x3eea08u: goto label_3eea08;
        case 0x3eebf8u: goto label_3eebf8;
        case 0x3eed90u: goto label_3eed90;
        case 0x3eeee0u: goto label_3eeee0;
        default: break;
    }

    ctx->pc = 0x3ede50u;

    // 0x3ede50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ede50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ede54: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3ede54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ede58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ede5c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x3ede5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede60: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x3ede60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x3ede64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ede64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede68: 0xde110000  ld          $s1, 0x0($s0)
    ctx->pc = 0x3ede68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ede6c: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x3ede6cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede70: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3ede70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ede74: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x3ede74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3ede78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDE78u;
    {
        const bool branch_taken_0x3ede78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE78u;
        // 0x3ede7c: 0x100c82d  daddu       $t9, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede78) {
            ctx->pc = 0x3EDE88u;
            goto label_3ede88;
        }
    }
    ctx->pc = 0x3EDE80u;
    // 0x3ede80: 0x55800007  bnel        $t4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3EDE80u;
    {
        const bool branch_taken_0x3ede80 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ede80) {
            ctx->pc = 0x3EDE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDE80u;
            // 0x3ede84: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDEA0u;
            goto label_3edea0;
        }
    }
    ctx->pc = 0x3EDE88u;
label_3ede88:
    // 0x3ede88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3ede88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ede8c: 0x5462044b  bnel        $v1, $v0, . + 4 + (0x44B << 2)
    ctx->pc = 0x3EDE8Cu;
    {
        const bool branch_taken_0x3ede8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ede8c) {
            ctx->pc = 0x3EDE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDE8Cu;
            // 0x3ede90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EDE94u;
    // 0x3ede94: 0x53000449  beql        $t8, $zero, . + 4 + (0x449 << 2)
    ctx->pc = 0x3EDE94u;
    {
        const bool branch_taken_0x3ede94 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ede94) {
            ctx->pc = 0x3EDE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDE94u;
            // 0x3ede98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EDE9Cu;
    // 0x3ede9c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3ede9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3edea0:
    // 0x3edea0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3edea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3edea4: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3EDEA4u;
    {
        const bool branch_taken_0x3edea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEA4u;
        // 0x3edea8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edea4) {
            ctx->pc = 0x3EDEDCu;
            goto label_3ededc;
        }
    }
    ctx->pc = 0x3EDEACu;
    // 0x3edeac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EDEACu;
    {
        const bool branch_taken_0x3edeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edeac) {
            ctx->pc = 0x3EDEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDEACu;
            // 0x3edeb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDEC4u;
            goto label_3edec4;
        }
    }
    ctx->pc = 0x3EDEB4u;
    // 0x3edeb4: 0x506002ce  beql        $v1, $zero, . + 4 + (0x2CE << 2)
    ctx->pc = 0x3EDEB4u;
    {
        const bool branch_taken_0x3edeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edeb4) {
            ctx->pc = 0x3EDEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDEB4u;
            // 0x3edeb8: 0x92020011  lbu         $v0, 0x11($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE9F0u;
            goto label_3ee9f0;
        }
    }
    ctx->pc = 0x3EDEBCu;
    // 0x3edebc: 0x1000043f  b           . + 4 + (0x43F << 2)
    ctx->pc = 0x3EDEBCu;
    {
        const bool branch_taken_0x3edebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEBCu;
        // 0x3edec0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edebc) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EDEC4u;
label_3edec4:
    // 0x3edec4: 0x1062021a  beq         $v1, $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x3EDEC4u;
    {
        const bool branch_taken_0x3edec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEC4u;
        // 0x3edec8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edec4) {
            ctx->pc = 0x3EE730u;
            goto label_3ee730;
        }
    }
    ctx->pc = 0x3EDECCu;
    // 0x3edecc: 0x5062010e  beql        $v1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x3EDECCu;
    {
        const bool branch_taken_0x3edecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3edecc) {
            ctx->pc = 0x3EDED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDECCu;
            // 0x3eded0: 0x92030011  lbu         $v1, 0x11($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE308u;
            goto label_3ee308;
        }
    }
    ctx->pc = 0x3EDED4u;
    // 0x3eded4: 0x10000439  b           . + 4 + (0x439 << 2)
    ctx->pc = 0x3EDED4u;
    {
        const bool branch_taken_0x3eded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDED4u;
        // 0x3eded8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eded4) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EDEDCu;
label_3ededc:
    // 0x3ededc: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3ededcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3edee0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3edee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3edee4: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3EDEE4u;
    {
        const bool branch_taken_0x3edee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3edee4) {
            ctx->pc = 0x3EE0C0u;
            goto label_3ee0c0;
        }
    }
    ctx->pc = 0x3EDEECu;
    // 0x3edeec: 0x12200432  beqz        $s1, . + 4 + (0x432 << 2)
    ctx->pc = 0x3EDEECu;
    {
        const bool branch_taken_0x3edeec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEECu;
        // 0x3edef0: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edeec) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EDEF4u;
    // 0x3edef4: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x3edef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edef8: 0x1a200026  blez        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3EDEF8u;
    {
        const bool branch_taken_0x3edef8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEF8u;
        // 0x3edefc: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edef8) {
            ctx->pc = 0x3EDF94u;
            goto label_3edf94;
        }
    }
    ctx->pc = 0x3EDF00u;
    // 0x3edf00: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3EDF00u;
    {
        const bool branch_taken_0x3edf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDF00u;
        // 0x3edf04: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edf00) {
            ctx->pc = 0x3EDFDCu;
            goto label_3edfdc;
        }
    }
    ctx->pc = 0x3EDF08u;
    // 0x3edf08: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3EDF08u;
    {
        const bool branch_taken_0x3edf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edf08) {
            ctx->pc = 0x3EDF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDF08u;
            // 0x3edf0c: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDF98u;
            goto label_3edf98;
        }
    }
    ctx->pc = 0x3EDF10u;
    // 0x3edf10: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3edf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3edf14: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EDF14u;
    {
        const bool branch_taken_0x3edf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edf14) {
            ctx->pc = 0x3EDF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDF14u;
            // 0x3edf18: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDF58u;
            goto label_3edf58;
        }
    }
    ctx->pc = 0x3EDF1Cu;
    // 0x3edf1c: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3edf1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3edf20: 0x25a60003  addiu       $a2, $t5, 0x3
    ctx->pc = 0x3edf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x3edf24: 0x91a30001  lbu         $v1, 0x1($t5)
    ctx->pc = 0x3edf24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3edf28: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3edf28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3edf2c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edf30: 0x91a40002  lbu         $a0, 0x2($t5)
    ctx->pc = 0x3edf30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3edf34: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3edf34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edf38: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3edf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3edf3c: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3edf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3edf40: 0xa1a50000  sb          $a1, 0x0($t5)
    ctx->pc = 0x3edf40u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3edf44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3edf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3edf48: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x3edf48u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3edf4c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3edf4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3edf50: 0xa1a30002  sb          $v1, 0x2($t5)
    ctx->pc = 0x3edf50u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edf54: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3edf58:
    // 0x3edf58: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3edf58u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3edf5c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edf60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edf64: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edf64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edf68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3edf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3edf6c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edf6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3edf70: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edf74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edf74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edf78: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edf78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edf7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3edf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3edf80: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3edf84: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edf88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edf88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edf8c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edf90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3edf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3edf94:
    // 0x3edf94: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edf94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3edf98:
    // 0x3edf98: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3edf98u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3edf9c: 0x1d1682b  sltu        $t5, $t6, $s1
    ctx->pc = 0x3edf9cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3edfa0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edfa4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edfa8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edfac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3edfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3edfb0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3edfb4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edfb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edfbc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edfc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3edfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3edfc4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3edfc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3edfc8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edfcc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3edfccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edfd0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3edfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3edfd4: 0x11a003f8  beqz        $t5, . + 4 + (0x3F8 << 2)
    ctx->pc = 0x3EDFD4u;
    {
        const bool branch_taken_0x3edfd4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDFD4u;
        // 0x3edfd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edfd4) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EDFDCu;
label_3edfdc:
    // 0x3edfdc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3edfdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3edfe0:
    // 0x3edfe0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3edfe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3edfe4: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3edfe4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3edfe8: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x3edfe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3edfec: 0x1d1682b  sltu        $t5, $t6, $s1
    ctx->pc = 0x3edfecu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3edff0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3edff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3edff4: 0x91650002  lbu         $a1, 0x2($t3)
    ctx->pc = 0x3edff4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3edff8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3edff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3edffc: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3edffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3ee000: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3ee000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ee004: 0x91670003  lbu         $a3, 0x3($t3)
    ctx->pc = 0x3ee004u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x3ee008: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x3ee008u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee00c: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x3ee00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x3ee010: 0x916a0004  lbu         $t2, 0x4($t3)
    ctx->pc = 0x3ee010u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3ee014: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ee014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee018: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x3ee018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3ee01c: 0x91690005  lbu         $t1, 0x5($t3)
    ctx->pc = 0x3ee01cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x3ee020: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x3ee020u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee024: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x3ee024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x3ee028: 0x91680006  lbu         $t0, 0x6($t3)
    ctx->pc = 0x3ee028u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3ee02c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ee02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee030: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x3ee030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x3ee034: 0x91660007  lbu         $a2, 0x7($t3)
    ctx->pc = 0x3ee034u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x3ee038: 0xa1620002  sb          $v0, 0x2($t3)
    ctx->pc = 0x3ee038u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee03c: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3ee03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3ee040: 0x91650008  lbu         $a1, 0x8($t3)
    ctx->pc = 0x3ee040u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3ee044: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ee044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ee048: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3ee048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ee04c: 0x91640009  lbu         $a0, 0x9($t3)
    ctx->pc = 0x3ee04cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x3ee050: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x3ee050u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee054: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3ee054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3ee058: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3ee058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ee05c: 0xa1620004  sb          $v0, 0x4($t3)
    ctx->pc = 0x3ee05cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee060: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ee060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ee064: 0xa1630005  sb          $v1, 0x5($t3)
    ctx->pc = 0x3ee064u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee068: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3ee068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ee06c: 0xa1620006  sb          $v0, 0x6($t3)
    ctx->pc = 0x3ee06cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee070: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3ee070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee074: 0xa1630007  sb          $v1, 0x7($t3)
    ctx->pc = 0x3ee074u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee078: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ee078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee07c: 0xa1620008  sb          $v0, 0x8($t3)
    ctx->pc = 0x3ee07cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee080: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ee080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee084: 0xa1630009  sb          $v1, 0x9($t3)
    ctx->pc = 0x3ee084u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee088: 0x256b000a  addiu       $t3, $t3, 0xA
    ctx->pc = 0x3ee088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10));
    // 0x3ee08c: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ee08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ee090: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee094: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee098: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3ee098u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee09c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ee09cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ee0a0: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ee0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ee0a4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee0a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee0ac: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3ee0acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee0b0: 0x15a0ffcb  bnez        $t5, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3EE0B0u;
    {
        const bool branch_taken_0x3ee0b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0B0u;
        // 0x3ee0b4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0b0) {
            ctx->pc = 0x3EDFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edfe0;
        }
    }
    ctx->pc = 0x3EE0B8u;
    // 0x3ee0b8: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x3EE0B8u;
    {
        const bool branch_taken_0x3ee0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0B8u;
        // 0x3ee0bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0b8) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE0C0u;
label_3ee0c0:
    // 0x3ee0c0: 0x122003bd  beqz        $s1, . + 4 + (0x3BD << 2)
    ctx->pc = 0x3EE0C0u;
    {
        const bool branch_taken_0x3ee0c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0C0u;
        // 0x3ee0c4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0c0) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE0C8u;
    // 0x3ee0c8: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x3ee0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee0cc: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE0CCu;
    {
        const bool branch_taken_0x3ee0cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0CCu;
        // 0x3ee0d0: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0cc) {
            ctx->pc = 0x3EE0DCu;
            goto label_3ee0dc;
        }
    }
    ctx->pc = 0x3EE0D4u;
    // 0x3ee0d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3EE0D4u;
    {
        const bool branch_taken_0x3ee0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE0D4u;
        // 0x3ee0d8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee0d4) {
            ctx->pc = 0x3EE188u;
            goto label_3ee188;
        }
    }
    ctx->pc = 0x3EE0DCu;
label_3ee0dc:
    // 0x3ee0dc: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x3ee0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3ee0e0: 0x25a60002  addiu       $a2, $t5, 0x2
    ctx->pc = 0x3ee0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3ee0e4: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x3ee0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3ee0e8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3ee0e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee0ec: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee0ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee0f0: 0x91a50002  lbu         $a1, 0x2($t5)
    ctx->pc = 0x3ee0f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ee0f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee0f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ee0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ee0fc: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee100: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ee100u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ee104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ee104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee108: 0x25a70006  addiu       $a3, $t5, 0x6
    ctx->pc = 0x3ee108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 6));
    // 0x3ee10c: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x3ee10cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee114: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3ee114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee118: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x3ee118u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ee11c: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x3ee11cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee120: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x3ee120u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee124: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3ee124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ee128: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee12c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee130: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee138: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ee138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ee13c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x3ee13cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee140: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ee140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ee144: 0xa1a20002  sb          $v0, 0x2($t5)
    ctx->pc = 0x3ee144u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee148: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3ee148u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee14c: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x3ee14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3ee150: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3ee150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ee154: 0x91a40004  lbu         $a0, 0x4($t5)
    ctx->pc = 0x3ee154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ee158: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee15c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee160: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee164: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee16c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee170: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee170u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee174: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee174u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee178: 0xa1a20004  sb          $v0, 0x4($t5)
    ctx->pc = 0x3ee178u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee17c: 0x11e0038e  beqz        $t7, . + 4 + (0x38E << 2)
    ctx->pc = 0x3EE17Cu;
    {
        const bool branch_taken_0x3ee17c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE17Cu;
        // 0x3ee180: 0xa0c50001  sb          $a1, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee17c) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE184u;
    // 0x3ee184: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ee184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ee188:
    // 0x3ee188: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3ee188u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee18c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3ee18cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee190: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3ee190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee194: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x3ee194u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee198: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3ee198u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee19c: 0x0  nop
    ctx->pc = 0x3ee19cu;
    // NOP
label_3ee1a0:
    // 0x3ee1a0: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x3ee1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3ee1a4: 0x65ce0002  daddiu      $t6, $t6, 0x2
    ctx->pc = 0x3ee1a4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)2);
    // 0x3ee1a8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee1a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee1ac: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x3ee1acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee1b0: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee1b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee1b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee1b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee1bc: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee1c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee1c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee1c8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee1c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee1cc: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee1d0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee1d4: 0xa1850001  sb          $a1, 0x1($t4)
    ctx->pc = 0x3ee1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee1d8: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x3ee1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3ee1dc: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3ee1dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ee1e0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ee1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ee1e4: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee1e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee1e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee1ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee1f0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee1f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee1f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee1fc: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee1fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee200: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee204: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x3ee204u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee208: 0xa1250003  sb          $a1, 0x3($t1)
    ctx->pc = 0x3ee208u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee20c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3ee20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3ee210: 0x91420005  lbu         $v0, 0x5($t2)
    ctx->pc = 0x3ee210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x3ee214: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x3ee214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ee218: 0x254a000a  addiu       $t2, $t2, 0xA
    ctx->pc = 0x3ee218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
    // 0x3ee21c: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee224: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee228: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee22c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee230: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee234: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee234u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee238: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee23c: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x3ee23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee240: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x3ee240u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee244: 0x24e7000a  addiu       $a3, $a3, 0xA
    ctx->pc = 0x3ee244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x3ee248: 0x91620007  lbu         $v0, 0x7($t3)
    ctx->pc = 0x3ee248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x3ee24c: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x3ee24cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3ee250: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x3ee250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x3ee254: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee25c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee260: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee268: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee26c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee26cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee270: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee274: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x3ee274u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee278: 0xa1850007  sb          $a1, 0x7($t4)
    ctx->pc = 0x3ee278u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee27c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3ee27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3ee280: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x3ee280u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x3ee284: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3ee284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ee288: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee288u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee28c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3ee28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3ee290: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee298: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee298u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee29c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee2a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee2a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee2a8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee2a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee2ac: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee2b0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee2b4: 0xa1250001  sb          $a1, 0x1($t1)
    ctx->pc = 0x3ee2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee2b8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3ee2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3ee2bc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3ee2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3ee2c0: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x3ee2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ee2c4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee2c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee2c8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x3ee2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3ee2cc: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee2ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee2d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee2d4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee2d8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee2e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee2e4: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee2e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee2e8: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee2ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee2f0: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x3ee2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee2f4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3ee2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3ee2f8: 0x15e0ffa9  bnez        $t7, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3EE2F8u;
    {
        const bool branch_taken_0x3ee2f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE2F8u;
        // 0x3ee2fc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee2f8) {
            ctx->pc = 0x3EE1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee1a0;
        }
    }
    ctx->pc = 0x3EE300u;
    // 0x3ee300: 0x1000032e  b           . + 4 + (0x32E << 2)
    ctx->pc = 0x3EE300u;
    {
        const bool branch_taken_0x3ee300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE300u;
        // 0x3ee304: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee300) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE308u;
label_3ee308:
    // 0x3ee308: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ee30c: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3EE30Cu;
    {
        const bool branch_taken_0x3ee30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee30c) {
            ctx->pc = 0x3EE4E8u;
            goto label_3ee4e8;
        }
    }
    ctx->pc = 0x3EE314u;
    // 0x3ee314: 0x12200328  beqz        $s1, . + 4 + (0x328 << 2)
    ctx->pc = 0x3EE314u;
    {
        const bool branch_taken_0x3ee314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE314u;
        // 0x3ee318: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee314) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE31Cu;
    // 0x3ee31c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x3ee31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee320: 0x1a200026  blez        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3EE320u;
    {
        const bool branch_taken_0x3ee320 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE320u;
        // 0x3ee324: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee320) {
            ctx->pc = 0x3EE3BCu;
            goto label_3ee3bc;
        }
    }
    ctx->pc = 0x3EE328u;
    // 0x3ee328: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3EE328u;
    {
        const bool branch_taken_0x3ee328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE328u;
        // 0x3ee32c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee328) {
            ctx->pc = 0x3EE404u;
            goto label_3ee404;
        }
    }
    ctx->pc = 0x3EE330u;
    // 0x3ee330: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3EE330u;
    {
        const bool branch_taken_0x3ee330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee330) {
            ctx->pc = 0x3EE334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE330u;
            // 0x3ee334: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE3C0u;
            goto label_3ee3c0;
        }
    }
    ctx->pc = 0x3EE338u;
    // 0x3ee338: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ee338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ee33c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EE33Cu;
    {
        const bool branch_taken_0x3ee33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee33c) {
            ctx->pc = 0x3EE340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE33Cu;
            // 0x3ee340: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE380u;
            goto label_3ee380;
        }
    }
    ctx->pc = 0x3EE344u;
    // 0x3ee344: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3ee344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3ee348: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x3ee348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3ee34c: 0x91a30001  lbu         $v1, 0x1($t5)
    ctx->pc = 0x3ee34cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3ee350: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3ee350u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee354: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee358: 0x91a40002  lbu         $a0, 0x2($t5)
    ctx->pc = 0x3ee358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ee35c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3ee35cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee360: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3ee360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3ee364: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3ee364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3ee368: 0xa1a50000  sb          $a1, 0x0($t5)
    ctx->pc = 0x3ee368u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee36c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ee36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee370: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x3ee370u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee374: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ee374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee378: 0xa1a30002  sb          $v1, 0x2($t5)
    ctx->pc = 0x3ee378u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee37c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ee380:
    // 0x3ee380: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee380u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee384: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee388: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee38c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee38cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee390: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ee390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ee394: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee398: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee39c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee39cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee3a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee3a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ee3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ee3a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee3ac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee3b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee3b4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee3b8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3ee3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3ee3bc:
    // 0x3ee3bc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee3bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ee3c0:
    // 0x3ee3c0: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee3c0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee3c4: 0x1d1682b  sltu        $t5, $t6, $s1
    ctx->pc = 0x3ee3c4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee3c8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee3cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee3d0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee3d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ee3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ee3d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee3dc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee3e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee3e4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee3e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ee3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ee3ec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3ee3ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee3f0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee3f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee3f8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3ee3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee3fc: 0x11a002ee  beqz        $t5, . + 4 + (0x2EE << 2)
    ctx->pc = 0x3EE3FCu;
    {
        const bool branch_taken_0x3ee3fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE3FCu;
        // 0x3ee400: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee3fc) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE404u;
label_3ee404:
    // 0x3ee404: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3ee404u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ee408:
    // 0x3ee408: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ee408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ee40c: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3ee40cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3ee410: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x3ee410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3ee414: 0x1d1682b  sltu        $t5, $t6, $s1
    ctx->pc = 0x3ee414u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee418: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee41c: 0x91650002  lbu         $a1, 0x2($t3)
    ctx->pc = 0x3ee41cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3ee420: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3ee420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee424: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3ee424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3ee428: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3ee428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ee42c: 0x91670004  lbu         $a3, 0x4($t3)
    ctx->pc = 0x3ee42cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3ee430: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x3ee430u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee434: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x3ee434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x3ee438: 0x916a0005  lbu         $t2, 0x5($t3)
    ctx->pc = 0x3ee438u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x3ee43c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ee43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee440: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x3ee440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3ee444: 0x91690006  lbu         $t1, 0x6($t3)
    ctx->pc = 0x3ee444u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3ee448: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x3ee448u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee44c: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x3ee44cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x3ee450: 0x91680008  lbu         $t0, 0x8($t3)
    ctx->pc = 0x3ee450u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3ee454: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ee454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee458: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x3ee458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x3ee45c: 0x91660009  lbu         $a2, 0x9($t3)
    ctx->pc = 0x3ee45cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x3ee460: 0xa1620002  sb          $v0, 0x2($t3)
    ctx->pc = 0x3ee460u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee464: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3ee464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3ee468: 0x9165000a  lbu         $a1, 0xA($t3)
    ctx->pc = 0x3ee468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x3ee46c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ee46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ee470: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3ee470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ee474: 0x9164000c  lbu         $a0, 0xC($t3)
    ctx->pc = 0x3ee474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x3ee478: 0xa1620004  sb          $v0, 0x4($t3)
    ctx->pc = 0x3ee478u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee47c: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3ee47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3ee480: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x3ee480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ee484: 0xa1620005  sb          $v0, 0x5($t3)
    ctx->pc = 0x3ee484u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee488: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x3ee488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ee48c: 0xa1630006  sb          $v1, 0x6($t3)
    ctx->pc = 0x3ee48cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee490: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3ee490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3ee494: 0xa1620008  sb          $v0, 0x8($t3)
    ctx->pc = 0x3ee494u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee498: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3ee498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee49c: 0xa1630009  sb          $v1, 0x9($t3)
    ctx->pc = 0x3ee49cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee4a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ee4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee4a4: 0xa162000a  sb          $v0, 0xA($t3)
    ctx->pc = 0x3ee4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee4a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3ee4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee4ac: 0xa163000c  sb          $v1, 0xC($t3)
    ctx->pc = 0x3ee4acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee4b0: 0x256b000d  addiu       $t3, $t3, 0xD
    ctx->pc = 0x3ee4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13));
    // 0x3ee4b4: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ee4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ee4b8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee4bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee4c0: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3ee4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee4c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ee4c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ee4c8: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3ee4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ee4cc: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee4d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee4d4: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x3ee4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee4d8: 0x15a0ffcb  bnez        $t5, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3EE4D8u;
    {
        const bool branch_taken_0x3ee4d8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4D8u;
        // 0x3ee4dc: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4d8) {
            ctx->pc = 0x3EE408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee408;
        }
    }
    ctx->pc = 0x3EE4E0u;
    // 0x3ee4e0: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x3EE4E0u;
    {
        const bool branch_taken_0x3ee4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4E0u;
        // 0x3ee4e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4e0) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE4E8u;
label_3ee4e8:
    // 0x3ee4e8: 0x122002b3  beqz        $s1, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x3EE4E8u;
    {
        const bool branch_taken_0x3ee4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4E8u;
        // 0x3ee4ec: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4e8) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE4F0u;
    // 0x3ee4f0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x3ee4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee4f4: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE4F4u;
    {
        const bool branch_taken_0x3ee4f4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4F4u;
        // 0x3ee4f8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4f4) {
            ctx->pc = 0x3EE504u;
            goto label_3ee504;
        }
    }
    ctx->pc = 0x3EE4FCu;
    // 0x3ee4fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3EE4FCu;
    {
        const bool branch_taken_0x3ee4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4FCu;
        // 0x3ee500: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4fc) {
            ctx->pc = 0x3EE5B0u;
            goto label_3ee5b0;
        }
    }
    ctx->pc = 0x3EE504u;
label_3ee504:
    // 0x3ee504: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x3ee504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3ee508: 0x25a60002  addiu       $a2, $t5, 0x2
    ctx->pc = 0x3ee508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3ee50c: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x3ee50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3ee510: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3ee510u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee514: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee518: 0x91a50002  lbu         $a1, 0x2($t5)
    ctx->pc = 0x3ee518u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x3ee51c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee520: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ee520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ee524: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee528: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ee528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ee52c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ee52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee530: 0x25a70008  addiu       $a3, $t5, 0x8
    ctx->pc = 0x3ee530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x3ee534: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x3ee534u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ee53c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3ee53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee540: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x3ee540u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ee544: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x3ee544u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee548: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x3ee548u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee54c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3ee54cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ee550: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee558: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee55c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee560: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3ee560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ee564: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x3ee564u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee568: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x3ee568u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x3ee56c: 0xa1a20002  sb          $v0, 0x2($t5)
    ctx->pc = 0x3ee56cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee570: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x3ee570u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee574: 0x25a60004  addiu       $a2, $t5, 0x4
    ctx->pc = 0x3ee574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3ee578: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3ee578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3ee57c: 0x91a40004  lbu         $a0, 0x4($t5)
    ctx->pc = 0x3ee57cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x3ee580: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee580u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee588: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee58c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee594: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee598: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee598u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee59c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee5a0: 0xa1a20004  sb          $v0, 0x4($t5)
    ctx->pc = 0x3ee5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee5a4: 0x11e00284  beqz        $t7, . + 4 + (0x284 << 2)
    ctx->pc = 0x3EE5A4u;
    {
        const bool branch_taken_0x3ee5a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5A4u;
        // 0x3ee5a8: 0xa0c50001  sb          $a1, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee5a4) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE5ACu;
    // 0x3ee5ac: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ee5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ee5b0:
    // 0x3ee5b0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3ee5b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee5b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3ee5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee5b8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3ee5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee5bc: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x3ee5bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee5c0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3ee5c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee5c4: 0x0  nop
    ctx->pc = 0x3ee5c4u;
    // NOP
label_3ee5c8:
    // 0x3ee5c8: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x3ee5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3ee5cc: 0x65ce0002  daddiu      $t6, $t6, 0x2
    ctx->pc = 0x3ee5ccu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)2);
    // 0x3ee5d0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee5d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee5d4: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x3ee5d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee5d8: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee5d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee5dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee5e0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee5e4: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee5e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee5ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee5f0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee5f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee5f4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee5f8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee5fc: 0xa1850001  sb          $a1, 0x1($t4)
    ctx->pc = 0x3ee5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee600: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x3ee600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3ee604: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3ee604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3ee608: 0x2508000a  addiu       $t0, $t0, 0xA
    ctx->pc = 0x3ee608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
    // 0x3ee60c: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee614: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee618: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee620: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee624: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee624u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee628: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee62c: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x3ee62cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee630: 0xa1250003  sb          $a1, 0x3($t1)
    ctx->pc = 0x3ee630u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee634: 0x2529000a  addiu       $t1, $t1, 0xA
    ctx->pc = 0x3ee634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10));
    // 0x3ee638: 0x91420005  lbu         $v0, 0x5($t2)
    ctx->pc = 0x3ee638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x3ee63c: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x3ee63cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ee640: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x3ee640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x3ee644: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee64c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee650: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee658: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee65c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee65cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee660: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee664: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x3ee664u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee668: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x3ee668u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee66c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x3ee66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x3ee670: 0x91620009  lbu         $v0, 0x9($t3)
    ctx->pc = 0x3ee670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 9)));
    // 0x3ee674: 0x90c40008  lbu         $a0, 0x8($a2)
    ctx->pc = 0x3ee674u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ee678: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x3ee678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x3ee67c: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee67cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee684: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee688: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee68c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee690: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee694: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee694u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee698: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee69c: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x3ee69cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee6a0: 0xa1850009  sb          $a1, 0x9($t4)
    ctx->pc = 0x3ee6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee6a4: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x3ee6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x3ee6a8: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x3ee6a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3ee6ac: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3ee6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ee6b0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee6b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee6b4: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x3ee6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x3ee6b8: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee6bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee6c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee6c4: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee6c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee6cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee6d0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee6d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee6d4: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee6d8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee6dc: 0xa1250001  sb          $a1, 0x1($t1)
    ctx->pc = 0x3ee6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee6e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3ee6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3ee6e4: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x3ee6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x3ee6e8: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x3ee6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x3ee6ec: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee6ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee6f0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3ee6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3ee6f4: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee6f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee6f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee6fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee700: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee708: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee70c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee70cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee710: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee714: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee714u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee718: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x3ee718u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee71c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ee71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ee720: 0x15e0ffa9  bnez        $t7, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3EE720u;
    {
        const bool branch_taken_0x3ee720 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE720u;
        // 0x3ee724: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee720) {
            ctx->pc = 0x3EE5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee5c8;
        }
    }
    ctx->pc = 0x3EE728u;
    // 0x3ee728: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x3EE728u;
    {
        const bool branch_taken_0x3ee728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE728u;
        // 0x3ee72c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee728) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE730u;
label_3ee730:
    // 0x3ee730: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3ee730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3ee734: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ee734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ee738: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3EE738u;
    {
        const bool branch_taken_0x3ee738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ee738) {
            ctx->pc = 0x3EE820u;
            goto label_3ee820;
        }
    }
    ctx->pc = 0x3EE740u;
    // 0x3ee740: 0x1220021d  beqz        $s1, . + 4 + (0x21D << 2)
    ctx->pc = 0x3EE740u;
    {
        const bool branch_taken_0x3ee740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE740u;
        // 0x3ee744: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee740) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE748u;
    // 0x3ee748: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3ee748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee74c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EE74Cu;
    {
        const bool branch_taken_0x3ee74c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE74Cu;
        // 0x3ee750: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee74c) {
            ctx->pc = 0x3EE7A0u;
            goto label_3ee7a0;
        }
    }
    ctx->pc = 0x3EE754u;
    // 0x3ee754: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3EE754u;
    {
        const bool branch_taken_0x3ee754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE754u;
        // 0x3ee758: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee754) {
            ctx->pc = 0x3EE7C0u;
            goto label_3ee7c0;
        }
    }
    ctx->pc = 0x3EE75Cu;
    // 0x3ee75c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EE75Cu;
    {
        const bool branch_taken_0x3ee75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee75c) {
            ctx->pc = 0x3EE760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE75Cu;
            // 0x3ee760: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE7A4u;
            goto label_3ee7a4;
        }
    }
    ctx->pc = 0x3EE764u;
    // 0x3ee764: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ee764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ee768: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE768u;
    {
        const bool branch_taken_0x3ee768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee768) {
            ctx->pc = 0x3EE76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE768u;
            // 0x3ee76c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE78Cu;
            goto label_3ee78c;
        }
    }
    ctx->pc = 0x3EE770u;
    // 0x3ee770: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3ee770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3ee774: 0x25a40002  addiu       $a0, $t5, 0x2
    ctx->pc = 0x3ee774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x3ee778: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3ee778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee77c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee780: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee784: 0xa1a30000  sb          $v1, 0x0($t5)
    ctx->pc = 0x3ee784u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee788: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ee788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ee78c:
    // 0x3ee78c: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee78cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee790: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee794: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee798: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ee798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee79c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3ee79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3ee7a0:
    // 0x3ee7a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ee7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ee7a4:
    // 0x3ee7a4: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee7a4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee7a8: 0x1d1402b  sltu        $t0, $t6, $s1
    ctx->pc = 0x3ee7a8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee7ac: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee7b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ee7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee7b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3ee7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee7b8: 0x110001ff  beqz        $t0, . + 4 + (0x1FF << 2)
    ctx->pc = 0x3EE7B8u;
    {
        const bool branch_taken_0x3ee7b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7B8u;
        // 0x3ee7bc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee7b8) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE7C0u;
label_3ee7c0:
    // 0x3ee7c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ee7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee7c4: 0x0  nop
    ctx->pc = 0x3ee7c4u;
    // NOP
label_3ee7c8:
    // 0x3ee7c8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3ee7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ee7cc: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3ee7ccu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3ee7d0: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x3ee7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3ee7d4: 0x1d1402b  sltu        $t0, $t6, $s1
    ctx->pc = 0x3ee7d4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee7d8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3ee7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3ee7dc: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x3ee7dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3ee7e0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3ee7e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee7e4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3ee7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3ee7e8: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3ee7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3ee7ec: 0x90e40006  lbu         $a0, 0x6($a3)
    ctx->pc = 0x3ee7ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x3ee7f0: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3ee7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ee7f4: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3ee7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3ee7f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ee7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ee7fc: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x3ee7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee800: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ee800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee804: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x3ee804u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee808: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3ee808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee80c: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x3ee80cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee810: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3EE810u;
    {
        const bool branch_taken_0x3ee810 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE810u;
        // 0x3ee814: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee810) {
            ctx->pc = 0x3EE7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee7c8;
        }
    }
    ctx->pc = 0x3EE818u;
    // 0x3ee818: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x3EE818u;
    {
        const bool branch_taken_0x3ee818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE818u;
        // 0x3ee81c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee818) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE820u;
label_3ee820:
    // 0x3ee820: 0x122001e5  beqz        $s1, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x3EE820u;
    {
        const bool branch_taken_0x3ee820 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE820u;
        // 0x3ee824: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee820) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE828u;
    // 0x3ee828: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x3ee828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee82c: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3EE82Cu;
    {
        const bool branch_taken_0x3ee82c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE82Cu;
        // 0x3ee830: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee82c) {
            ctx->pc = 0x3EE8C0u;
            goto label_3ee8c0;
        }
    }
    ctx->pc = 0x3EE834u;
    // 0x3ee834: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3EE834u;
    {
        const bool branch_taken_0x3ee834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE834u;
        // 0x3ee838: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee834) {
            ctx->pc = 0x3EE900u;
            goto label_3ee900;
        }
    }
    ctx->pc = 0x3EE83Cu;
    // 0x3ee83c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3EE83Cu;
    {
        const bool branch_taken_0x3ee83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee83c) {
            ctx->pc = 0x3EE840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE83Cu;
            // 0x3ee840: 0x90a20001  lbu         $v0, 0x1($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE8C4u;
            goto label_3ee8c4;
        }
    }
    ctx->pc = 0x3EE844u;
    // 0x3ee844: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ee844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ee848: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EE848u;
    {
        const bool branch_taken_0x3ee848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee848) {
            ctx->pc = 0x3EE84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE848u;
            // 0x3ee84c: 0x90a20001  lbu         $v0, 0x1($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE88Cu;
            goto label_3ee88c;
        }
    }
    ctx->pc = 0x3EE850u;
    // 0x3ee850: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x3ee850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x3ee854: 0x25a50004  addiu       $a1, $t5, 0x4
    ctx->pc = 0x3ee854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3ee858: 0x91a40000  lbu         $a0, 0x0($t5)
    ctx->pc = 0x3ee858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3ee85c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3ee85cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee860: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee864: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee868: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee86c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee870: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee874: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee878: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ee878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee87c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ee87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ee880: 0xa1a20001  sb          $v0, 0x1($t5)
    ctx->pc = 0x3ee880u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee884: 0xa1a30000  sb          $v1, 0x0($t5)
    ctx->pc = 0x3ee884u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee888: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3ee888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3ee88c:
    // 0x3ee88c: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee88cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee890: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ee890u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee894: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee894u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee89c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee89cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee8a0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee8a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee8a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee8ac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ee8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee8b0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ee8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ee8b4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3ee8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee8b8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ee8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee8bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ee8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3ee8c0:
    // 0x3ee8c0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3ee8c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3ee8c4:
    // 0x3ee8c4: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3ee8c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3ee8c8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ee8c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ee8cc: 0x1d1482b  sltu        $t1, $t6, $s1
    ctx->pc = 0x3ee8ccu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee8d0: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee8d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee8d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee8d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee8dc: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee8e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee8e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee8e8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3ee8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee8ec: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3ee8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3ee8f0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3ee8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee8f4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3ee8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee8f8: 0x112001af  beqz        $t1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x3EE8F8u;
    {
        const bool branch_taken_0x3ee8f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE8F8u;
        // 0x3ee8fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee8f8) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EE900u;
label_3ee900:
    // 0x3ee900: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ee900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee904: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ee904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee908: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3ee908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee90c: 0x0  nop
    ctx->pc = 0x3ee90cu;
    // NOP
label_3ee910:
    // 0x3ee910: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3ee910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3ee914: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3ee914u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3ee918: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ee918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ee91c: 0x1d1482b  sltu        $t1, $t6, $s1
    ctx->pc = 0x3ee91cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ee920: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee928: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee92c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee934: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee938: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee938u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee93c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee940: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3ee940u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee944: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x3ee944u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee948: 0x91020005  lbu         $v0, 0x5($t0)
    ctx->pc = 0x3ee948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x3ee94c: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x3ee94cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ee950: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee958: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee95c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee964: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee968: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee968u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee96c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee970: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x3ee970u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee974: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x3ee974u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee978: 0x91020009  lbu         $v0, 0x9($t0)
    ctx->pc = 0x3ee978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x3ee97c: 0x90c40008  lbu         $a0, 0x8($a2)
    ctx->pc = 0x3ee97cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ee980: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee988: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee98c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee994: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee998: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee998u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee99c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee9a0: 0xa0c20008  sb          $v0, 0x8($a2)
    ctx->pc = 0x3ee9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee9a4: 0xa0e50009  sb          $a1, 0x9($a3)
    ctx->pc = 0x3ee9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee9a8: 0x9102000d  lbu         $v0, 0xD($t0)
    ctx->pc = 0x3ee9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x3ee9ac: 0x90c4000c  lbu         $a0, 0xC($a2)
    ctx->pc = 0x3ee9acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3ee9b0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3ee9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3ee9b4: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3ee9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3ee9b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ee9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ee9bc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3ee9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3ee9c0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3ee9c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ee9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ee9c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ee9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ee9cc: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3ee9ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ee9d0: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3ee9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3ee9d4: 0xa0c2000c  sb          $v0, 0xC($a2)
    ctx->pc = 0x3ee9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ee9d8: 0xa0e5000d  sb          $a1, 0xD($a3)
    ctx->pc = 0x3ee9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ee9dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3ee9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3ee9e0: 0x1520ffcb  bnez        $t1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3EE9E0u;
    {
        const bool branch_taken_0x3ee9e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9E0u;
        // 0x3ee9e4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9e0) {
            ctx->pc = 0x3EE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ee910;
        }
    }
    ctx->pc = 0x3EE9E8u;
    // 0x3ee9e8: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x3EE9E8u;
    {
        const bool branch_taken_0x3ee9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9E8u;
        // 0x3ee9ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9e8) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EE9F0u;
label_3ee9f0:
    // 0x3ee9f0: 0x54440039  bnel        $v0, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3EE9F0u;
    {
        const bool branch_taken_0x3ee9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ee9f0) {
            ctx->pc = 0x3EE9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE9F0u;
            // 0x3ee9f4: 0x92040011  lbu         $a0, 0x11($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEAD8u;
            goto label_3eead8;
        }
    }
    ctx->pc = 0x3EE9F8u;
    // 0x3ee9f8: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3EE9F8u;
    {
        const bool branch_taken_0x3ee9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9F8u;
        // 0x3ee9fc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9f8) {
            ctx->pc = 0x3EEAD4u;
            goto label_3eead4;
        }
    }
    ctx->pc = 0x3EEA00u;
    // 0x3eea00: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x3eea00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eea04: 0x0  nop
    ctx->pc = 0x3eea04u;
    // NOP
label_3eea08:
    // 0x3eea08: 0x91e80000  lbu         $t0, 0x0($t7)
    ctx->pc = 0x3eea08u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3eea0c: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3eea0cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3eea10: 0x1d1582b  sltu        $t3, $t6, $s1
    ctx->pc = 0x3eea10u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eea14: 0x31030030  andi        $v1, $t0, 0x30
    ctx->pc = 0x3eea14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)48);
    // 0x3eea18: 0x310a000c  andi        $t2, $t0, 0xC
    ctx->pc = 0x3eea18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12);
    // 0x3eea1c: 0x310900c0  andi        $t1, $t0, 0xC0
    ctx->pc = 0x3eea1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)192);
    // 0x3eea20: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x3eea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3eea24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3eea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eea28: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x3eea28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3eea2c: 0x33883  sra         $a3, $v1, 2
    ctx->pc = 0x3eea2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3eea30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eea30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eea34: 0x92883  sra         $a1, $t1, 2
    ctx->pc = 0x3eea34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 9), 2));
    // 0x3eea38: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3eea38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3eea3c: 0x91103  sra         $v0, $t1, 4
    ctx->pc = 0x3eea3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 4));
    // 0x3eea40: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3eea40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3eea44: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x3eea44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x3eea48: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x3eea48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x3eea4c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3eea4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3eea50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eea50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eea54: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3eea54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3eea58: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x3eea58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x3eea5c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x3eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3eea60: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x3eea60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x3eea64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eea64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eea68: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x3eea68u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x3eea6c: 0xa5083  sra         $t2, $t2, 2
    ctx->pc = 0x3eea6cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 2));
    // 0x3eea70: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3eea70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3eea74: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3eea78: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x3eea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x3eea7c: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x3eea7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x3eea80: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x3eea80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eea84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eea84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eea88: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3eea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3eea8c: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3eea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3eea90: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3eea90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eea94: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3eea94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eea98: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3eea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3eea9c: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x3eea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x3eeaa0: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3eeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3eeaa4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3eeaa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eeaa8: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3eeaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x3eeaac: 0x30e70030  andi        $a3, $a3, 0x30
    ctx->pc = 0x3eeaacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
    // 0x3eeab0: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x3eeab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x3eeab4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3eeab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3eeab8: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x3eeab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x3eeabc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3eeabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3eeac0: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x3eeac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x3eeac4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3eeac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3eeac8: 0xa1e20000  sb          $v0, 0x0($t7)
    ctx->pc = 0x3eeac8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eeacc: 0x1560ffce  bnez        $t3, . + 4 + (-0x32 << 2)
    ctx->pc = 0x3EEACCu;
    {
        const bool branch_taken_0x3eeacc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEACCu;
        // 0x3eead0: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeacc) {
            ctx->pc = 0x3EEA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eea08;
        }
    }
    ctx->pc = 0x3EEAD4u;
label_3eead4:
    // 0x3eead4: 0x92040011  lbu         $a0, 0x11($s0)
    ctx->pc = 0x3eead4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_3eead8:
    // 0x3eead8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3eead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eeadc: 0x54820088  bnel        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x3EEADCu;
    {
        const bool branch_taken_0x3eeadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eeadc) {
            ctx->pc = 0x3EEAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEADCu;
            // 0x3eeae0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED00u;
            goto label_3eed00;
        }
    }
    ctx->pc = 0x3EEAE4u;
    // 0x3eeae4: 0x12200134  beqz        $s1, . + 4 + (0x134 << 2)
    ctx->pc = 0x3EEAE4u;
    {
        const bool branch_taken_0x3eeae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAE4u;
        // 0x3eeae8: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeae4) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EEAECu;
    // 0x3eeaec: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x3eeaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeaf0: 0x1a20002d  blez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EEAF0u;
    {
        const bool branch_taken_0x3eeaf0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAF0u;
        // 0x3eeaf4: 0x32230007  andi        $v1, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeaf0) {
            ctx->pc = 0x3EEBA8u;
            goto label_3eeba8;
        }
    }
    ctx->pc = 0x3EEAF8u;
    // 0x3eeaf8: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3EEAF8u;
    {
        const bool branch_taken_0x3eeaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEAF8u;
        // 0x3eeafc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeaf8) {
            ctx->pc = 0x3EEBF4u;
            goto label_3eebf4;
        }
    }
    ctx->pc = 0x3EEB00u;
    // 0x3eeb00: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x3EEB00u;
    {
        const bool branch_taken_0x3eeb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb00) {
            ctx->pc = 0x3EEB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB00u;
            // 0x3eeb04: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEBACu;
            goto label_3eebac;
        }
    }
    ctx->pc = 0x3EEB08u;
    // 0x3eeb08: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3eeb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3eeb0c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3EEB0Cu;
    {
        const bool branch_taken_0x3eeb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eeb0c) {
            ctx->pc = 0x3EEB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEB0Cu;
            // 0x3eeb10: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEB68u;
            goto label_3eeb68;
        }
    }
    ctx->pc = 0x3EEB14u;
    // 0x3eeb14: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x3eeb14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3eeb18: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3EEB18u;
    {
        const bool branch_taken_0x3eeb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEB18u;
        // 0x3eeb1c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeb18) {
            ctx->pc = 0x3EEBF8u;
            goto label_3eebf8;
        }
    }
    ctx->pc = 0x3EEB20u;
    // 0x3eeb20: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3eeb20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3eeb24: 0x25a60001  addiu       $a2, $t5, 0x1
    ctx->pc = 0x3eeb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3eeb28: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x3eeb28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eeb2c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x3eeb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eeb30: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3eeb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3eeb34: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x3eeb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3eeb38: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x3eeb38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3eeb3c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3eeb3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3eeb40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eeb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3eeb44: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3eeb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3eeb48: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eeb4c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3eeb4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eeb50: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eeb50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eeb54: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3eeb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3eeb58: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x3eeb58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x3eeb5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eeb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eeb60: 0xa1a40000  sb          $a0, 0x0($t5)
    ctx->pc = 0x3eeb60u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eeb64: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eeb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3eeb68:
    // 0x3eeb68: 0x65ce0002  daddiu      $t6, $t6, 0x2
    ctx->pc = 0x3eeb68u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)2);
    // 0x3eeb6c: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x3eeb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eeb70: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3eeb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3eeb74: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x3eeb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3eeb78: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x3eeb78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3eeb7c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3eeb7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3eeb80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eeb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3eeb84: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3eeb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3eeb88: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eeb8c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3eeb8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eeb90: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eeb90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eeb94: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3eeb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3eeb98: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x3eeb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x3eeb9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eeb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eeba0: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3eeba0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eeba4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3eeba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3eeba8:
    // 0x3eeba8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3eeba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3eebac:
    // 0x3eebac: 0x65ce0002  daddiu      $t6, $t6, 0x2
    ctx->pc = 0x3eebacu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)2);
    // 0x3eebb0: 0x1d1502b  sltu        $t2, $t6, $s1
    ctx->pc = 0x3eebb0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eebb4: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x3eebb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eebb8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3eebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3eebbc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x3eebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3eebc0: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x3eebc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3eebc4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3eebc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3eebc8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3eebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3eebcc: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3eebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3eebd0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eebd4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3eebd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eebd8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eebd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eebdc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3eebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3eebe0: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x3eebe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x3eebe4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eebe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3eebe8: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3eebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eebec: 0x114000f2  beqz        $t2, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3EEBECu;
    {
        const bool branch_taken_0x3eebec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEBECu;
        // 0x3eebf0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eebec) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EEBF4u;
label_3eebf4:
    // 0x3eebf4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3eebf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eebf8:
    // 0x3eebf8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3eebf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3eebfc: 0x65ce0008  daddiu      $t6, $t6, 0x8
    ctx->pc = 0x3eebfcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)8);
    // 0x3eec00: 0x91260001  lbu         $a2, 0x1($t1)
    ctx->pc = 0x3eec00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3eec04: 0x1d1502b  sltu        $t2, $t6, $s1
    ctx->pc = 0x3eec04u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eec08: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x3eec08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eec0c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3eec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3eec10: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3eec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3eec14: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x3eec14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3eec18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3eec18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3eec1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3eec1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3eec20: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3eec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3eec24: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eec28: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x3eec28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3eec2c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3eec2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eec30: 0x30c600f0  andi        $a2, $a2, 0xF0
    ctx->pc = 0x3eec30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x3eec34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eec34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eec38: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x3eec38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x3eec3c: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x3eec3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x3eec40: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x3eec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3eec44: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3eec44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3eec48: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3eec48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3eec4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3eec4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3eec50: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3eec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3eec54: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x3eec54u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eec58: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3eec58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3eec5c: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x3eec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3eec60: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3eec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3eec64: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3eec64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eec68: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3eec68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eec6c: 0x3048000f  andi        $t0, $v0, 0xF
    ctx->pc = 0x3eec6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3eec70: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3eec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3eec74: 0x30e700f0  andi        $a3, $a3, 0xF0
    ctx->pc = 0x3eec74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x3eec78: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x3eec78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x3eec7c: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x3eec7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3eec80: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x3eec80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x3eec84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3eec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3eec88: 0xa1270001  sb          $a3, 0x1($t1)
    ctx->pc = 0x3eec88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x3eec8c: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x3eec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3eec90: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eec94: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3eec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3eec98: 0x91260003  lbu         $a2, 0x3($t1)
    ctx->pc = 0x3eec98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3eec9c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3eec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3eeca0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3eeca0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eeca4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eeca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eeca8: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x3eeca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3eecac: 0x30c600f0  andi        $a2, $a2, 0xF0
    ctx->pc = 0x3eecacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x3eecb0: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x3eecb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x3eecb4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3eecb8: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x3eecb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x3eecbc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3eecbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3eecc0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x3eecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3eecc4: 0xa1250002  sb          $a1, 0x2($t1)
    ctx->pc = 0x3eecc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eecc8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3eecc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3eeccc: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x3eecccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3eecd0: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x3eecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3eecd4: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3eecd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3eecd8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3eecd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eecdc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3eecdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eece0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x3eece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x3eece4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3eece8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eecec: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x3eececu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eecf0: 0x1540ffc1  bnez        $t2, . + 4 + (-0x3F << 2)
    ctx->pc = 0x3EECF0u;
    {
        const bool branch_taken_0x3eecf0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EECF0u;
        // 0x3eecf4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eecf0) {
            ctx->pc = 0x3EEBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eebf8;
        }
    }
    ctx->pc = 0x3EECF8u;
    // 0x3eecf8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x3EECF8u;
    {
        const bool branch_taken_0x3eecf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EECF8u;
        // 0x3eecfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eecf8) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EED00u;
label_3eed00:
    // 0x3eed00: 0x54820039  bnel        $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3EED00u;
    {
        const bool branch_taken_0x3eed00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eed00) {
            ctx->pc = 0x3EED04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EED00u;
            // 0x3eed04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEDE8u;
            goto label_3eede8;
        }
    }
    ctx->pc = 0x3EED08u;
    // 0x3eed08: 0x122000ab  beqz        $s1, . + 4 + (0xAB << 2)
    ctx->pc = 0x3EED08u;
    {
        const bool branch_taken_0x3eed08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED08u;
        // 0x3eed0c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed08) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EED10u;
    // 0x3eed10: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3eed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eed14: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EED14u;
    {
        const bool branch_taken_0x3eed14 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED14u;
        // 0x3eed18: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed14) {
            ctx->pc = 0x3EED68u;
            goto label_3eed68;
        }
    }
    ctx->pc = 0x3EED1Cu;
    // 0x3eed1c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3EED1Cu;
    {
        const bool branch_taken_0x3eed1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED1Cu;
        // 0x3eed20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed1c) {
            ctx->pc = 0x3EED88u;
            goto label_3eed88;
        }
    }
    ctx->pc = 0x3EED24u;
    // 0x3eed24: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EED24u;
    {
        const bool branch_taken_0x3eed24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eed24) {
            ctx->pc = 0x3EED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EED24u;
            // 0x3eed28: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED6Cu;
            goto label_3eed6c;
        }
    }
    ctx->pc = 0x3EED2Cu;
    // 0x3eed2c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3eed2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3eed30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EED30u;
    {
        const bool branch_taken_0x3eed30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eed30) {
            ctx->pc = 0x3EED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EED30u;
            // 0x3eed34: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED54u;
            goto label_3eed54;
        }
    }
    ctx->pc = 0x3EED38u;
    // 0x3eed38: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x3eed38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3eed3c: 0x25a40001  addiu       $a0, $t5, 0x1
    ctx->pc = 0x3eed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3eed40: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3eed40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eed44: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eed48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eed48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eed4c: 0xa1a30000  sb          $v1, 0x0($t5)
    ctx->pc = 0x3eed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eed50: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3eed50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eed54:
    // 0x3eed54: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3eed54u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3eed58: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eed5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eed5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eed60: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3eed60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eed64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3eed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3eed68:
    // 0x3eed68: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3eed68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3eed6c:
    // 0x3eed6c: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3eed6cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3eed70: 0x1d1402b  sltu        $t0, $t6, $s1
    ctx->pc = 0x3eed70u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eed74: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eed78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3eed78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eed7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3eed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eed80: 0x1100008d  beqz        $t0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3EED80u;
    {
        const bool branch_taken_0x3eed80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED80u;
        // 0x3eed84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed80) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EED88u;
label_3eed88:
    // 0x3eed88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3eed88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eed8c: 0x0  nop
    ctx->pc = 0x3eed8cu;
    // NOP
label_3eed90:
    // 0x3eed90: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3eed90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3eed94: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3eed94u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3eed98: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x3eed98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3eed9c: 0x1d1402b  sltu        $t0, $t6, $s1
    ctx->pc = 0x3eed9cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eeda0: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x3eeda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3eeda4: 0x90e50002  lbu         $a1, 0x2($a3)
    ctx->pc = 0x3eeda4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3eeda8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3eeda8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eedac: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3eedacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3eedb0: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3eedb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3eedb4: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x3eedb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3eedb8: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x3eedb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3eedbc: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x3eedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3eedc0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eedc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eedc4: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3eedc4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eedc8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3eedc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eedcc: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3eedccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eedd0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3eedd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eedd4: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x3eedd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eedd8: 0x1500ffed  bnez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3EEDD8u;
    {
        const bool branch_taken_0x3eedd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDD8u;
        // 0x3eeddc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedd8) {
            ctx->pc = 0x3EED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eed90;
        }
    }
    ctx->pc = 0x3EEDE0u;
    // 0x3eede0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3EEDE0u;
    {
        const bool branch_taken_0x3eede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDE0u;
        // 0x3eede4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eede0) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EEDE8u;
label_3eede8:
    // 0x3eede8: 0x14820074  bne         $a0, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x3EEDE8u;
    {
        const bool branch_taken_0x3eede8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDE8u;
        // 0x3eedec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eede8) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EEDF0u;
    // 0x3eedf0: 0x12200072  beqz        $s1, . + 4 + (0x72 << 2)
    ctx->pc = 0x3EEDF0u;
    {
        const bool branch_taken_0x3eedf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDF0u;
        // 0x3eedf4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedf0) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EEDF8u;
    // 0x3eedf8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x3eedf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eedfc: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3eedfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3eee00: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3EEE00u;
    {
        const bool branch_taken_0x3eee00 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE00u;
        // 0x3eee04: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee00) {
            ctx->pc = 0x3EEE94u;
            goto label_3eee94;
        }
    }
    ctx->pc = 0x3EEE08u;
    // 0x3eee08: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3EEE08u;
    {
        const bool branch_taken_0x3eee08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE08u;
        // 0x3eee0c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee08) {
            ctx->pc = 0x3EEED4u;
            goto label_3eeed4;
        }
    }
    ctx->pc = 0x3EEE10u;
    // 0x3eee10: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3EEE10u;
    {
        const bool branch_taken_0x3eee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eee10) {
            ctx->pc = 0x3EEE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEE10u;
            // 0x3eee14: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEE98u;
            goto label_3eee98;
        }
    }
    ctx->pc = 0x3EEE18u;
    // 0x3eee18: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3eee18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3eee1c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3EEE1Cu;
    {
        const bool branch_taken_0x3eee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eee1c) {
            ctx->pc = 0x3EEE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EEE1Cu;
            // 0x3eee20: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EEE60u;
            goto label_3eee60;
        }
    }
    ctx->pc = 0x3EEE24u;
    // 0x3eee24: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3eee24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3eee28: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x3eee28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3eee2c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3eee2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3eee30: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3eee30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eee34: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eee34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eee38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eee3c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eee40: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eee44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eee48: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eee4c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3eee4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eee50: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3eee50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eee54: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3eee54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eee58: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3eee58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eee5c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3eee5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3eee60:
    // 0x3eee60: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3eee60u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3eee64: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3eee64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eee68: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eee68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eee6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eee70: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eee74: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eee78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eee7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eee80: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3eee80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eee84: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3eee84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eee88: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3eee88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eee8c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3eee8cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eee90: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3eee90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_3eee94:
    // 0x3eee94: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x3eee94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_3eee98:
    // 0x3eee98: 0x65ce0001  daddiu      $t6, $t6, 0x1
    ctx->pc = 0x3eee98u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)1);
    // 0x3eee9c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3eee9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eeea0: 0x1d1482b  sltu        $t1, $t6, $s1
    ctx->pc = 0x3eeea0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eeea4: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eeea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eeea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eeeac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eeeacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eeeb0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eeeb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eeeb8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eeebc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3eeebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eeec0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3eeec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3eeec4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3eeec4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eeec8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3eeec8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eeecc: 0x1120003a  beqz        $t1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3EEECCu;
    {
        const bool branch_taken_0x3eeecc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEECCu;
        // 0x3eeed0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeecc) {
            ctx->pc = 0x3EEFB8u;
            goto label_3eefb8;
        }
    }
    ctx->pc = 0x3EEED4u;
label_3eeed4:
    // 0x3eeed4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3eeed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeed8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3eeed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeedc: 0x0  nop
    ctx->pc = 0x3eeedcu;
    // NOP
label_3eeee0:
    // 0x3eeee0: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x3eeee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3eeee4: 0x65ce0004  daddiu      $t6, $t6, 0x4
    ctx->pc = 0x3eeee4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)4);
    // 0x3eeee8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3eeee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eeeec: 0x1d1482b  sltu        $t1, $t6, $s1
    ctx->pc = 0x3eeeecu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3eeef0: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eeef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eeef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eeef8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eeef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eeefc: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eeefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eef00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eef04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eef08: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3eef08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eef0c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3eef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3eef10: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3eef10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eef14: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x3eef14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eef18: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x3eef18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3eef1c: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3eef1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3eef20: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eef20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eef24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eef24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eef28: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eef28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eef2c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eef30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eef30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eef34: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eef38: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3eef38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eef3c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3eef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3eef40: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x3eef40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eef44: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x3eef44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eef48: 0x91020005  lbu         $v0, 0x5($t0)
    ctx->pc = 0x3eef48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x3eef4c: 0x90c40004  lbu         $a0, 0x4($a2)
    ctx->pc = 0x3eef4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3eef50: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eef50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eef54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eef54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eef58: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eef58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eef5c: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eef60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eef64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eef68: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3eef68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eef6c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3eef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3eef70: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x3eef70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eef74: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x3eef74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eef78: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x3eef78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x3eef7c: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x3eef7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3eef80: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3eef80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3eef84: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x3eef84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x3eef88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eef88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3eef8c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3eef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3eef90: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x3eef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x3eef94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3eef98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3eef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3eef9c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x3eef9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3eefa0: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3eefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3eefa4: 0xa0c20006  sb          $v0, 0x6($a2)
    ctx->pc = 0x3eefa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eefa8: 0xa0e50007  sb          $a1, 0x7($a3)
    ctx->pc = 0x3eefa8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x3eefac: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3eefacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3eefb0: 0x1520ffcb  bnez        $t1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3EEFB0u;
    {
        const bool branch_taken_0x3eefb0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFB0u;
        // 0x3eefb4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefb0) {
            ctx->pc = 0x3EEEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eeee0;
        }
    }
    ctx->pc = 0x3EEFB8u;
label_3eefb8:
    // 0x3eefb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eefb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eefbc:
    // 0x3eefbc: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x3eefbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eefc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFC0u;
        // 0x3eefc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEFC8u;
}
