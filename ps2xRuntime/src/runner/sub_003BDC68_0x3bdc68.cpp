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

// Function: sub_003BDC68
// Address: 0x3bdc68 - 0x3bdde0
void sub_003BDC68_0x3bdc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDC68_0x3bdc68");
#endif

    switch (ctx->pc) {
        case 0x3bdcb0u: goto label_3bdcb0;
        case 0x3bdd14u: goto label_3bdd14;
        case 0x3bdd40u: goto label_3bdd40;
        case 0x3bdd8cu: goto label_3bdd8c;
        case 0x3bdda0u: goto label_3bdda0;
        case 0x3bddb0u: goto label_3bddb0;
        default: break;
    }

    ctx->pc = 0x3bdc68u;

    // 0x3bdc68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bdc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bdc6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3bdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bdc70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bdc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3bdc74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bdc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3bdc78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bdc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bdc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bdc80: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3bdc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bdc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bdc88: 0x14e20018  bne         $a3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3BDC88u;
    {
        const bool branch_taken_0x3bdc88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC88u;
        // 0x3bdc8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc88) {
            ctx->pc = 0x3BDCECu;
            goto label_3bdcec;
        }
    }
    ctx->pc = 0x3BDC90u;
    // 0x3bdc90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3bdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3bdc94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc98: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3bdc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3bdc9c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x3bdc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bdca0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdca4: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3BDCA4u;
    {
        const bool branch_taken_0x3bdca4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3BDCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCA4u;
        // 0x3bdca8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdca4) {
            ctx->pc = 0x3BDCE0u;
            goto label_3bdce0;
        }
    }
    ctx->pc = 0x3BDCACu;
    // 0x3bdcac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bdcb0:
    // 0x3bdcb0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bdcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bdcb4: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x3bdcb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x3bdcb8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3bdcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3bdcbc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bdcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3bdcc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bdcc4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3bdcc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3bdcc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bdcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bdccc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3bdcccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bdcd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdcd4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3bdcd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bdcd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BDCD8u;
    {
        const bool branch_taken_0x3bdcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCD8u;
        // 0x3bdcdc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdcd8) {
            ctx->pc = 0x3BDCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdcb0;
        }
    }
    ctx->pc = 0x3BDCE0u;
label_3bdce0:
    // 0x3bdce0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdce4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3BDCE4u;
    {
        const bool branch_taken_0x3bdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDCE4u;
        // 0x3bdce8: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdce4) {
            ctx->pc = 0x3BDD7Cu;
            goto label_3bdd7c;
        }
    }
    ctx->pc = 0x3BDCECu;
label_3bdcec:
    // 0x3bdcec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3bdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3bdcf0: 0x54e2000a  bnel        $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BDCF0u;
    {
        const bool branch_taken_0x3bdcf0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bdcf0) {
            ctx->pc = 0x3BDCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDCF0u;
            // 0x3bdcf4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDD1Cu;
            goto label_3bdd1c;
        }
    }
    ctx->pc = 0x3BDCF8u;
    // 0x3bdcf8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3bdcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3bdcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd00: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3bdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3bdd04: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x3bdd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3bdd08: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bdd08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdd0c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3BDD0Cu;
    SET_GPR_U32(ctx, 31, 0x3BDD14u);
    ctx->pc = 0x3BDD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDD0Cu;
    // 0x3bdd10: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BDD0Cu, 0x3BDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD14u;
label_3bdd14:
    // 0x3bdd14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3BDD14u;
    {
        const bool branch_taken_0x3bdd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD14u;
        // 0x3bdd18: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd14) {
            ctx->pc = 0x3BDD7Cu;
            goto label_3bdd7c;
        }
    }
    ctx->pc = 0x3BDD1Cu;
label_3bdd1c:
    // 0x3bdd1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd20: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3bdd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3bdd24: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x3bdd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bdd28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdd2c: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BDD2Cu;
    {
        const bool branch_taken_0x3bdd2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD2Cu;
        // 0x3bdd30: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd2c) {
            ctx->pc = 0x3BDD74u;
            goto label_3bdd74;
        }
    }
    ctx->pc = 0x3BDD34u;
    // 0x3bdd34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bdd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3bdd38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd3c: 0x0  nop
    ctx->pc = 0x3bdd3cu;
    // NOP
label_3bdd40:
    // 0x3bdd40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3bdd40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bdd44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3bdd44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3bdd48: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x3bdd48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bdd4c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3bdd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3bdd50: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x3bdd50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bdd54: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3bdd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3bdd58: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3bdd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3bdd5c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3bdd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bdd60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bdd64: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3bdd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3bdd68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BDD68u;
    {
        const bool branch_taken_0x3bdd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD68u;
        // 0x3bdd6c: 0x24e70003  addiu       $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd68) {
            ctx->pc = 0x3BDD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdd40;
        }
    }
    ctx->pc = 0x3BDD70u;
    // 0x3bdd70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3bdd74:
    // 0x3bdd74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3bdd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3bdd78: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3bdd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3bdd7c:
    // 0x3bdd7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bdd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bdd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd84: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDD84u;
    SET_GPR_U32(ctx, 31, 0x3BDD8Cu);
    ctx->pc = 0x3BDD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDD84u;
    // 0x3bdd88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDD84u, 0x3BDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD8Cu;
label_3bdd8c:
    // 0x3bdd8c: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x3bdd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x3bdd90: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BDD90u;
    {
        const bool branch_taken_0x3bdd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD90u;
        // 0x3bdd94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd90) {
            ctx->pc = 0x3BDDC4u;
            goto label_3bddc4;
        }
    }
    ctx->pc = 0x3BDD98u;
    // 0x3bdd98: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x3bdd98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bdd9c: 0x0  nop
    ctx->pc = 0x3bdd9cu;
    // NOP
label_3bdda0:
    // 0x3bdda0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3bdda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdda4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bdda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdda8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3BDDA8u;
    SET_GPR_U32(ctx, 31, 0x3BDDB0u);
    ctx->pc = 0x3BDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDDA8u;
    // 0x3bddac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3BDDA8u, 0x3BDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDDB0u;
label_3bddb0:
    // 0x3bddb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bddb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3bddb4: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x3bddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x3bddb8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3BDDB8u;
    {
        const bool branch_taken_0x3bddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bddb8) {
            ctx->pc = 0x3BDDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BDDB8u;
            // 0x3bddbc: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BDDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bdda0;
        }
    }
    ctx->pc = 0x3BDDC0u;
    // 0x3bddc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bddc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bddc4:
    // 0x3bddc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bddc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bddc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bddc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bddcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bddccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bddd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bddd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bddd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BDDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDDD4u;
        // 0x3bddd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BDDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BDDDCu;
    // 0x3bdddc: 0x0  nop
    ctx->pc = 0x3bdddcu;
    // NOP
    ctx->pc = 0x3bdde0u;
}
