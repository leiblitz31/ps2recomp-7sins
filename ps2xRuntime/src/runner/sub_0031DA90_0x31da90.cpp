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

// Function: sub_0031DA90
// Address: 0x31da90 - 0x31dbc0
void sub_0031DA90_0x31da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA90_0x31da90");
#endif

    switch (ctx->pc) {
        case 0x31da90u: goto label_31da90;
        case 0x31da94u: goto label_31da94;
        case 0x31da98u: goto label_31da98;
        case 0x31da9cu: goto label_31da9c;
        case 0x31daa0u: goto label_31daa0;
        case 0x31daa4u: goto label_31daa4;
        case 0x31daa8u: goto label_31daa8;
        case 0x31daacu: goto label_31daac;
        case 0x31dab0u: goto label_31dab0;
        case 0x31dab4u: goto label_31dab4;
        case 0x31dab8u: goto label_31dab8;
        case 0x31dabcu: goto label_31dabc;
        case 0x31dac0u: goto label_31dac0;
        case 0x31dac4u: goto label_31dac4;
        case 0x31dac8u: goto label_31dac8;
        case 0x31daccu: goto label_31dacc;
        case 0x31dad0u: goto label_31dad0;
        case 0x31dad4u: goto label_31dad4;
        case 0x31dad8u: goto label_31dad8;
        case 0x31dadcu: goto label_31dadc;
        case 0x31dae0u: goto label_31dae0;
        case 0x31dae4u: goto label_31dae4;
        case 0x31dae8u: goto label_31dae8;
        case 0x31daecu: goto label_31daec;
        case 0x31daf0u: goto label_31daf0;
        case 0x31daf4u: goto label_31daf4;
        case 0x31daf8u: goto label_31daf8;
        case 0x31dafcu: goto label_31dafc;
        case 0x31db00u: goto label_31db00;
        case 0x31db04u: goto label_31db04;
        case 0x31db08u: goto label_31db08;
        case 0x31db0cu: goto label_31db0c;
        case 0x31db10u: goto label_31db10;
        case 0x31db14u: goto label_31db14;
        case 0x31db18u: goto label_31db18;
        case 0x31db1cu: goto label_31db1c;
        case 0x31db20u: goto label_31db20;
        case 0x31db24u: goto label_31db24;
        case 0x31db28u: goto label_31db28;
        case 0x31db2cu: goto label_31db2c;
        case 0x31db30u: goto label_31db30;
        case 0x31db34u: goto label_31db34;
        case 0x31db38u: goto label_31db38;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db40u: goto label_31db40;
        case 0x31db44u: goto label_31db44;
        case 0x31db48u: goto label_31db48;
        case 0x31db4cu: goto label_31db4c;
        case 0x31db50u: goto label_31db50;
        case 0x31db54u: goto label_31db54;
        case 0x31db58u: goto label_31db58;
        case 0x31db5cu: goto label_31db5c;
        case 0x31db60u: goto label_31db60;
        case 0x31db64u: goto label_31db64;
        case 0x31db68u: goto label_31db68;
        case 0x31db6cu: goto label_31db6c;
        case 0x31db70u: goto label_31db70;
        case 0x31db74u: goto label_31db74;
        case 0x31db78u: goto label_31db78;
        case 0x31db7cu: goto label_31db7c;
        case 0x31db80u: goto label_31db80;
        case 0x31db84u: goto label_31db84;
        case 0x31db88u: goto label_31db88;
        case 0x31db8cu: goto label_31db8c;
        case 0x31db90u: goto label_31db90;
        case 0x31db94u: goto label_31db94;
        case 0x31db98u: goto label_31db98;
        case 0x31db9cu: goto label_31db9c;
        case 0x31dba0u: goto label_31dba0;
        case 0x31dba4u: goto label_31dba4;
        case 0x31dba8u: goto label_31dba8;
        case 0x31dbacu: goto label_31dbac;
        case 0x31dbb0u: goto label_31dbb0;
        case 0x31dbb4u: goto label_31dbb4;
        case 0x31dbb8u: goto label_31dbb8;
        case 0x31dbbcu: goto label_31dbbc;
        default: break;
    }

    ctx->pc = 0x31da90u;

label_31da90:
    // 0x31da90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31da94:
    // 0x31da94: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31da98:
    // 0x31da98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_31da9c:
    // 0x31da9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_31daa0:
    // 0x31daa0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31daa4:
    // 0x31daa4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_31daa8:
    // 0x31daa8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_31daac:
    // 0x31daac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_31dab0:
    // 0x31dab0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_31dab4:
    // 0x31dab4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x31dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_31dab8:
    // 0x31dab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31dabc:
    // 0x31dabc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31dac0:
    // 0x31dac0: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x31dac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31dac4:
    // 0x31dac4: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
label_31dac8:
    if (ctx->pc == 0x31DAC8u) {
        ctx->pc = 0x31DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC4u;
        // 0x31dac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DACCu;
        goto label_31dacc;
    }
    ctx->pc = 0x31DAC4u;
    {
        const bool branch_taken_0x31dac4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC4u;
        // 0x31dac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dac4) {
            ctx->pc = 0x31DB8Cu;
            goto label_31db8c;
        }
    }
    ctx->pc = 0x31DACCu;
label_31dacc:
    // 0x31dacc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31dad0:
    // 0x31dad0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x31dad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31dad4:
    // 0x31dad4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_31dad8:
    if (ctx->pc == 0x31DAD8u) {
        ctx->pc = 0x31DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAD4u;
        // 0x31dad8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DADCu;
        goto label_31dadc;
    }
    ctx->pc = 0x31DAD4u;
    {
        const bool branch_taken_0x31dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAD4u;
        // 0x31dad8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dad4) {
            ctx->pc = 0x31DB8Cu;
            goto label_31db8c;
        }
    }
    ctx->pc = 0x31DADCu;
label_31dadc:
    // 0x31dadc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31dae0:
    // 0x31dae0: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x31dae0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31dae4:
    // 0x31dae4: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31dae8:
    // 0x31dae8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31dae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31daec:
    // 0x31daec: 0x0  nop
    ctx->pc = 0x31daecu;
    // NOP
label_31daf0:
    // 0x31daf0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x31daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31daf4:
    // 0x31daf4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x31daf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_31daf8:
    // 0x31daf8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x31daf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_31dafc:
    // 0x31dafc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31db00:
    // 0x31db00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_31db04:
    if (ctx->pc == 0x31DB04u) {
        ctx->pc = 0x31DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB00u;
        // 0x31db04: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB08u;
        goto label_31db08;
    }
    ctx->pc = 0x31DB00u;
    {
        const bool branch_taken_0x31db00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB00u;
        // 0x31db04: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db00) {
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DB08u;
label_31db08:
    // 0x31db08: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x31db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_31db0c:
    // 0x31db0c: 0x40f809  jalr        $v0
label_31db10:
    if (ctx->pc == 0x31DB10u) {
        ctx->pc = 0x31DB14u;
        goto label_31db14;
    }
    ctx->pc = 0x31DB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31DB14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB0Cu, 0x31DB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DB14u;
label_31db14:
    // 0x31db14: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x31db14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31db18:
    // 0x31db18: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x31db18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31db1c:
    // 0x31db1c: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x31db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_31db20:
    // 0x31db20: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x31db20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31db24:
    // 0x31db24: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x31db24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_31db28:
    // 0x31db28: 0x32240010  andi        $a0, $s1, 0x10
    ctx->pc = 0x31db28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_31db2c:
    // 0x31db2c: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x31db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_31db30:
    // 0x31db30: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x31db30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31db34:
    // 0x31db34: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x31db34u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_31db38:
    // 0x31db38: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x31db38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_31db3c:
    // 0x31db3c: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x31db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_31db40:
    // 0x31db40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31db40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_31db44:
    // 0x31db44: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x31db44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_31db48:
    // 0x31db48: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x31db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_31db4c:
    // 0x31db4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_31db50:
    if (ctx->pc == 0x31DB50u) {
        ctx->pc = 0x31DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB4Cu;
        // 0x31db50: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB54u;
        goto label_31db54;
    }
    ctx->pc = 0x31DB4Cu;
    {
        const bool branch_taken_0x31db4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB4Cu;
        // 0x31db50: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db4c) {
            ctx->pc = 0x31DB68u;
            goto label_31db68;
        }
    }
    ctx->pc = 0x31DB54u;
label_31db54:
    // 0x31db54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31db58:
    // 0x31db58: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x31db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_31db5c:
    // 0x31db5c: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x31db5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_31db60:
    // 0x31db60: 0x10000004  b           . + 4 + (0x4 << 2)
label_31db64:
    if (ctx->pc == 0x31DB64u) {
        ctx->pc = 0x31DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB60u;
        // 0x31db64: 0x929021  addu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB68u;
        goto label_31db68;
    }
    ctx->pc = 0x31DB60u;
    {
        const bool branch_taken_0x31db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB60u;
        // 0x31db64: 0x929021  addu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db60) {
            ctx->pc = 0x31DB74u;
            goto label_31db74;
        }
    }
    ctx->pc = 0x31DB68u;
label_31db68:
    // 0x31db68: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x31db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31db6c:
    // 0x31db6c: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x31db6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31db70:
    // 0x31db70: 0x729021  addu        $s2, $v1, $s2
    ctx->pc = 0x31db70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_31db74:
    // 0x31db74: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31db78:
    // 0x31db78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31db78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31db7c:
    // 0x31db7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31db7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_31db80:
    // 0x31db80: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x31db80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31db84:
    // 0x31db84: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_31db88:
    if (ctx->pc == 0x31DB88u) {
        ctx->pc = 0x31DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB84u;
        // 0x31db88: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB8Cu;
        goto label_31db8c;
    }
    ctx->pc = 0x31DB84u;
    {
        const bool branch_taken_0x31db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB84u;
        // 0x31db88: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db84) {
            ctx->pc = 0x31DAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31daf0;
        }
    }
    ctx->pc = 0x31DB8Cu;
label_31db8c:
    // 0x31db8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31db8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31db90:
    // 0x31db90: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31db94:
    // 0x31db94: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31db94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31db98:
    // 0x31db98: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31db98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31db9c:
    // 0x31db9c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31db9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31dba0:
    // 0x31dba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31dba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31dba4:
    // 0x31dba4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31dba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31dba8:
    // 0x31dba8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31dba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31dbac:
    // 0x31dbac: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x31dbacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31dbb0:
    // 0x31dbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31dbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31dbb4:
    // 0x31dbb4: 0x3e00008  jr          $ra
label_31dbb8:
    if (ctx->pc == 0x31DBB8u) {
        ctx->pc = 0x31DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBB4u;
        // 0x31dbb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DBBCu;
        goto label_31dbbc;
    }
    ctx->pc = 0x31DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBB4u;
        // 0x31dbb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DBBCu;
label_31dbbc:
    // 0x31dbbc: 0x0  nop
    ctx->pc = 0x31dbbcu;
    // NOP
    ctx->pc = 0x31dbc0u;
}
