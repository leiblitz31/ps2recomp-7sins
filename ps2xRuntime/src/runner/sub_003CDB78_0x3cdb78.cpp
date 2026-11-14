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

// Function: sub_003CDB78
// Address: 0x3cdb78 - 0x3cdd40
void sub_003CDB78_0x3cdb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDB78_0x3cdb78");
#endif

    switch (ctx->pc) {
        case 0x3cdb78u: goto label_3cdb78;
        case 0x3cdb7cu: goto label_3cdb7c;
        case 0x3cdb80u: goto label_3cdb80;
        case 0x3cdb84u: goto label_3cdb84;
        case 0x3cdb88u: goto label_3cdb88;
        case 0x3cdb8cu: goto label_3cdb8c;
        case 0x3cdb90u: goto label_3cdb90;
        case 0x3cdb94u: goto label_3cdb94;
        case 0x3cdb98u: goto label_3cdb98;
        case 0x3cdb9cu: goto label_3cdb9c;
        case 0x3cdba0u: goto label_3cdba0;
        case 0x3cdba4u: goto label_3cdba4;
        case 0x3cdba8u: goto label_3cdba8;
        case 0x3cdbacu: goto label_3cdbac;
        case 0x3cdbb0u: goto label_3cdbb0;
        case 0x3cdbb4u: goto label_3cdbb4;
        case 0x3cdbb8u: goto label_3cdbb8;
        case 0x3cdbbcu: goto label_3cdbbc;
        case 0x3cdbc0u: goto label_3cdbc0;
        case 0x3cdbc4u: goto label_3cdbc4;
        case 0x3cdbc8u: goto label_3cdbc8;
        case 0x3cdbccu: goto label_3cdbcc;
        case 0x3cdbd0u: goto label_3cdbd0;
        case 0x3cdbd4u: goto label_3cdbd4;
        case 0x3cdbd8u: goto label_3cdbd8;
        case 0x3cdbdcu: goto label_3cdbdc;
        case 0x3cdbe0u: goto label_3cdbe0;
        case 0x3cdbe4u: goto label_3cdbe4;
        case 0x3cdbe8u: goto label_3cdbe8;
        case 0x3cdbecu: goto label_3cdbec;
        case 0x3cdbf0u: goto label_3cdbf0;
        case 0x3cdbf4u: goto label_3cdbf4;
        case 0x3cdbf8u: goto label_3cdbf8;
        case 0x3cdbfcu: goto label_3cdbfc;
        case 0x3cdc00u: goto label_3cdc00;
        case 0x3cdc04u: goto label_3cdc04;
        case 0x3cdc08u: goto label_3cdc08;
        case 0x3cdc0cu: goto label_3cdc0c;
        case 0x3cdc10u: goto label_3cdc10;
        case 0x3cdc14u: goto label_3cdc14;
        case 0x3cdc18u: goto label_3cdc18;
        case 0x3cdc1cu: goto label_3cdc1c;
        case 0x3cdc20u: goto label_3cdc20;
        case 0x3cdc24u: goto label_3cdc24;
        case 0x3cdc28u: goto label_3cdc28;
        case 0x3cdc2cu: goto label_3cdc2c;
        case 0x3cdc30u: goto label_3cdc30;
        case 0x3cdc34u: goto label_3cdc34;
        case 0x3cdc38u: goto label_3cdc38;
        case 0x3cdc3cu: goto label_3cdc3c;
        case 0x3cdc40u: goto label_3cdc40;
        case 0x3cdc44u: goto label_3cdc44;
        case 0x3cdc48u: goto label_3cdc48;
        case 0x3cdc4cu: goto label_3cdc4c;
        case 0x3cdc50u: goto label_3cdc50;
        case 0x3cdc54u: goto label_3cdc54;
        case 0x3cdc58u: goto label_3cdc58;
        case 0x3cdc5cu: goto label_3cdc5c;
        case 0x3cdc60u: goto label_3cdc60;
        case 0x3cdc64u: goto label_3cdc64;
        case 0x3cdc68u: goto label_3cdc68;
        case 0x3cdc6cu: goto label_3cdc6c;
        case 0x3cdc70u: goto label_3cdc70;
        case 0x3cdc74u: goto label_3cdc74;
        case 0x3cdc78u: goto label_3cdc78;
        case 0x3cdc7cu: goto label_3cdc7c;
        case 0x3cdc80u: goto label_3cdc80;
        case 0x3cdc84u: goto label_3cdc84;
        case 0x3cdc88u: goto label_3cdc88;
        case 0x3cdc8cu: goto label_3cdc8c;
        case 0x3cdc90u: goto label_3cdc90;
        case 0x3cdc94u: goto label_3cdc94;
        case 0x3cdc98u: goto label_3cdc98;
        case 0x3cdc9cu: goto label_3cdc9c;
        case 0x3cdca0u: goto label_3cdca0;
        case 0x3cdca4u: goto label_3cdca4;
        case 0x3cdca8u: goto label_3cdca8;
        case 0x3cdcacu: goto label_3cdcac;
        case 0x3cdcb0u: goto label_3cdcb0;
        case 0x3cdcb4u: goto label_3cdcb4;
        case 0x3cdcb8u: goto label_3cdcb8;
        case 0x3cdcbcu: goto label_3cdcbc;
        case 0x3cdcc0u: goto label_3cdcc0;
        case 0x3cdcc4u: goto label_3cdcc4;
        case 0x3cdcc8u: goto label_3cdcc8;
        case 0x3cdcccu: goto label_3cdccc;
        case 0x3cdcd0u: goto label_3cdcd0;
        case 0x3cdcd4u: goto label_3cdcd4;
        case 0x3cdcd8u: goto label_3cdcd8;
        case 0x3cdcdcu: goto label_3cdcdc;
        case 0x3cdce0u: goto label_3cdce0;
        case 0x3cdce4u: goto label_3cdce4;
        case 0x3cdce8u: goto label_3cdce8;
        case 0x3cdcecu: goto label_3cdcec;
        case 0x3cdcf0u: goto label_3cdcf0;
        case 0x3cdcf4u: goto label_3cdcf4;
        case 0x3cdcf8u: goto label_3cdcf8;
        case 0x3cdcfcu: goto label_3cdcfc;
        case 0x3cdd00u: goto label_3cdd00;
        case 0x3cdd04u: goto label_3cdd04;
        case 0x3cdd08u: goto label_3cdd08;
        case 0x3cdd0cu: goto label_3cdd0c;
        case 0x3cdd10u: goto label_3cdd10;
        case 0x3cdd14u: goto label_3cdd14;
        case 0x3cdd18u: goto label_3cdd18;
        case 0x3cdd1cu: goto label_3cdd1c;
        case 0x3cdd20u: goto label_3cdd20;
        case 0x3cdd24u: goto label_3cdd24;
        case 0x3cdd28u: goto label_3cdd28;
        case 0x3cdd2cu: goto label_3cdd2c;
        case 0x3cdd30u: goto label_3cdd30;
        case 0x3cdd34u: goto label_3cdd34;
        case 0x3cdd38u: goto label_3cdd38;
        case 0x3cdd3cu: goto label_3cdd3c;
        default: break;
    }

    ctx->pc = 0x3cdb78u;

label_3cdb78:
    // 0x3cdb78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cdb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cdb7c:
    // 0x3cdb7c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3cdb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3cdb80:
    // 0x3cdb80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3cdb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3cdb84:
    // 0x3cdb84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cdb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb88:
    // 0x3cdb88: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3cdb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3cdb8c:
    // 0x3cdb8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3cdb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb90:
    // 0x3cdb90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3cdb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3cdb94:
    // 0x3cdb94: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cdb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cdb98:
    // 0x3cdb98: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3cdb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3cdb9c:
    // 0x3cdb9c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3cdb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3cdba0:
    // 0x3cdba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cdba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cdba4:
    // 0x3cdba4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cdba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cdba8:
    // 0x3cdba8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3cdbac:
    if (ctx->pc == 0x3CDBACu) {
        ctx->pc = 0x3CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBA8u;
        // 0x3cdbac: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBB0u;
        goto label_3cdbb0;
    }
    ctx->pc = 0x3CDBA8u;
    {
        const bool branch_taken_0x3cdba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBA8u;
        // 0x3cdbac: 0x3c140062  lui         $s4, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdba8) {
            ctx->pc = 0x3CDC04u;
            goto label_3cdc04;
        }
    }
    ctx->pc = 0x3CDBB0u;
label_3cdbb0:
    // 0x3cdbb0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3cdbb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbb4:
    // 0x3cdbb4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3cdbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3cdbb8:
    // 0x3cdbb8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3cdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3cdbbc:
    // 0x3cdbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cdbc0:
    // 0x3cdbc0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3cdbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3cdbc4:
    // 0x3cdbc4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3cdbc8:
    if (ctx->pc == 0x3CDBC8u) {
        ctx->pc = 0x3CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBC4u;
        // 0x3cdbc8: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBCCu;
        goto label_3cdbcc;
    }
    ctx->pc = 0x3CDBC4u;
    {
        const bool branch_taken_0x3cdbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBC4u;
        // 0x3cdbc8: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdbc4) {
            ctx->pc = 0x3CDBF0u;
            goto label_3cdbf0;
        }
    }
    ctx->pc = 0x3CDBCCu;
label_3cdbcc:
    // 0x3cdbcc: 0x26b3e880  addiu       $s3, $s5, -0x1780
    ctx->pc = 0x3cdbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3cdbd0:
    // 0x3cdbd0: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3cdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3cdbd4:
    // 0x3cdbd4: 0x0  nop
    ctx->pc = 0x3cdbd4u;
    // NOP
label_3cdbd8:
    // 0x3cdbd8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3cdbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbdc:
    // 0x3cdbdc: 0x40f809  jalr        $v0
label_3cdbe0:
    if (ctx->pc == 0x3CDBE0u) {
        ctx->pc = 0x3CDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBDCu;
        // 0x3cdbe0: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBE4u;
        goto label_3cdbe4;
    }
    ctx->pc = 0x3CDBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDBE4u);
        ctx->pc = 0x3CDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBDCu;
        // 0x3cdbe0: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDBDCu, 0x3CDBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDBE4u;
label_3cdbe4:
    // 0x3cdbe4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3cdbe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbe8:
    // 0x3cdbe8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
label_3cdbec:
    if (ctx->pc == 0x3CDBECu) {
        ctx->pc = 0x3CDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBE8u;
        // 0x3cdbec: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDBF0u;
        goto label_3cdbf0;
    }
    ctx->pc = 0x3CDBE8u;
    {
        const bool branch_taken_0x3cdbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdbe8) {
            ctx->pc = 0x3CDBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDBE8u;
            // 0x3cdbec: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdbd8;
        }
    }
    ctx->pc = 0x3CDBF0u;
label_3cdbf0:
    // 0x3cdbf0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cdbf4:
    // 0x3cdbf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cdbf8:
    // 0x3cdbf8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3cdbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cdbfc:
    // 0x3cdbfc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_3cdc00:
    if (ctx->pc == 0x3CDC00u) {
        ctx->pc = 0x3CDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDBFCu;
        // 0x3cdc00: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC04u;
        goto label_3cdc04;
    }
    ctx->pc = 0x3CDBFCu;
    {
        const bool branch_taken_0x3cdbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdbfc) {
            ctx->pc = 0x3CDC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDBFCu;
            // 0x3cdc00: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdbb8;
        }
    }
    ctx->pc = 0x3CDC04u;
label_3cdc04:
    // 0x3cdc04: 0x2682e880  addiu       $v0, $s4, -0x1780
    ctx->pc = 0x3cdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3cdc08:
    // 0x3cdc08: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3cdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3cdc0c:
    // 0x3cdc0c: 0x60f809  jalr        $v1
label_3cdc10:
    if (ctx->pc == 0x3CDC10u) {
        ctx->pc = 0x3CDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC0Cu;
        // 0x3cdc10: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC14u;
        goto label_3cdc14;
    }
    ctx->pc = 0x3CDC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CDC14u);
        ctx->pc = 0x3CDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC0Cu;
        // 0x3cdc10: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDC0Cu, 0x3CDC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDC14u;
label_3cdc14:
    // 0x3cdc14: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cdc18:
    // 0x3cdc18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3cdc1c:
    if (ctx->pc == 0x3CDC1Cu) {
        ctx->pc = 0x3CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC18u;
        // 0x3cdc1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC20u;
        goto label_3cdc20;
    }
    ctx->pc = 0x3CDC18u;
    {
        const bool branch_taken_0x3cdc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC18u;
        // 0x3cdc1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc18) {
            ctx->pc = 0x3CDC74u;
            goto label_3cdc74;
        }
    }
    ctx->pc = 0x3CDC20u;
label_3cdc20:
    // 0x3cdc20: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3cdc20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc24:
    // 0x3cdc24: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3cdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3cdc28:
    // 0x3cdc28: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3cdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3cdc2c:
    // 0x3cdc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cdc30:
    // 0x3cdc30: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3cdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3cdc34:
    // 0x3cdc34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3cdc38:
    if (ctx->pc == 0x3CDC38u) {
        ctx->pc = 0x3CDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC34u;
        // 0x3cdc38: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC3Cu;
        goto label_3cdc3c;
    }
    ctx->pc = 0x3CDC34u;
    {
        const bool branch_taken_0x3cdc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC34u;
        // 0x3cdc38: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc34) {
            ctx->pc = 0x3CDC60u;
            goto label_3cdc60;
        }
    }
    ctx->pc = 0x3CDC3Cu;
label_3cdc3c:
    // 0x3cdc3c: 0x26b3e880  addiu       $s3, $s5, -0x1780
    ctx->pc = 0x3cdc3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3cdc40:
    // 0x3cdc40: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3cdc44:
    // 0x3cdc44: 0x0  nop
    ctx->pc = 0x3cdc44u;
    // NOP
label_3cdc48:
    // 0x3cdc48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3cdc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc4c:
    // 0x3cdc4c: 0x40f809  jalr        $v0
label_3cdc50:
    if (ctx->pc == 0x3CDC50u) {
        ctx->pc = 0x3CDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC4Cu;
        // 0x3cdc50: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC54u;
        goto label_3cdc54;
    }
    ctx->pc = 0x3CDC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDC54u);
        ctx->pc = 0x3CDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC4Cu;
        // 0x3cdc50: 0x8c70001c  lw          $s0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDC4Cu, 0x3CDC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDC54u;
label_3cdc54:
    // 0x3cdc54: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3cdc54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc58:
    // 0x3cdc58: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
label_3cdc5c:
    if (ctx->pc == 0x3CDC5Cu) {
        ctx->pc = 0x3CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC58u;
        // 0x3cdc5c: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC60u;
        goto label_3cdc60;
    }
    ctx->pc = 0x3CDC58u;
    {
        const bool branch_taken_0x3cdc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdc58) {
            ctx->pc = 0x3CDC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDC58u;
            // 0x3cdc5c: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdc48;
        }
    }
    ctx->pc = 0x3CDC60u;
label_3cdc60:
    // 0x3cdc60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cdc64:
    // 0x3cdc64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cdc68:
    // 0x3cdc68: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3cdc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cdc6c:
    // 0x3cdc6c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_3cdc70:
    if (ctx->pc == 0x3CDC70u) {
        ctx->pc = 0x3CDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC6Cu;
        // 0x3cdc70: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC74u;
        goto label_3cdc74;
    }
    ctx->pc = 0x3CDC6Cu;
    {
        const bool branch_taken_0x3cdc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cdc6c) {
            ctx->pc = 0x3CDC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDC6Cu;
            // 0x3cdc70: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdc28;
        }
    }
    ctx->pc = 0x3CDC74u;
label_3cdc74:
    // 0x3cdc74: 0x2690e880  addiu       $s0, $s4, -0x1780
    ctx->pc = 0x3cdc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3cdc78:
    // 0x3cdc78: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3cdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cdc7c:
    // 0x3cdc7c: 0x40f809  jalr        $v0
label_3cdc80:
    if (ctx->pc == 0x3CDC80u) {
        ctx->pc = 0x3CDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC7Cu;
        // 0x3cdc80: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC84u;
        goto label_3cdc84;
    }
    ctx->pc = 0x3CDC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDC84u);
        ctx->pc = 0x3CDC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC7Cu;
        // 0x3cdc80: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDC7Cu, 0x3CDC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDC84u;
label_3cdc84:
    // 0x3cdc84: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3cdc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cdc88:
    // 0x3cdc88: 0x60f809  jalr        $v1
label_3cdc8c:
    if (ctx->pc == 0x3CDC8Cu) {
        ctx->pc = 0x3CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC88u;
        // 0x3cdc8c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC90u;
        goto label_3cdc90;
    }
    ctx->pc = 0x3CDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CDC90u);
        ctx->pc = 0x3CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC88u;
        // 0x3cdc8c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDC88u, 0x3CDC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDC90u;
label_3cdc90:
    // 0x3cdc90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3cdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cdc94:
    // 0x3cdc94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3cdc98:
    if (ctx->pc == 0x3CDC98u) {
        ctx->pc = 0x3CDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC94u;
        // 0x3cdc98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDC9Cu;
        goto label_3cdc9c;
    }
    ctx->pc = 0x3CDC94u;
    {
        const bool branch_taken_0x3cdc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDC94u;
        // 0x3cdc98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdc94) {
            ctx->pc = 0x3CDCF0u;
            goto label_3cdcf0;
        }
    }
    ctx->pc = 0x3CDC9Cu;
label_3cdc9c:
    // 0x3cdc9c: 0x2416002c  addiu       $s6, $zero, 0x2C
    ctx->pc = 0x3cdc9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3cdca0:
    // 0x3cdca0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3cdca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cdca4:
    // 0x3cdca4: 0x961018  mult        $v0, $a0, $s6
    ctx->pc = 0x3cdca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cdca8:
    // 0x3cdca8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3cdca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3cdcac:
    // 0x3cdcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cdcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cdcb0:
    // 0x3cdcb0: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x3cdcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3cdcb4:
    // 0x3cdcb4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3cdcb8:
    if (ctx->pc == 0x3CDCB8u) {
        ctx->pc = 0x3CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCB4u;
        // 0x3cdcb8: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDCBCu;
        goto label_3cdcbc;
    }
    ctx->pc = 0x3CDCB4u;
    {
        const bool branch_taken_0x3cdcb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCB4u;
        // 0x3cdcb8: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdcb4) {
            ctx->pc = 0x3CDCDCu;
            goto label_3cdcdc;
        }
    }
    ctx->pc = 0x3CDCBCu;
label_3cdcbc:
    // 0x3cdcbc: 0x26b3e880  addiu       $s3, $s5, -0x1780
    ctx->pc = 0x3cdcbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3cdcc0:
    // 0x3cdcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cdcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdcc4:
    // 0x3cdcc4: 0x0  nop
    ctx->pc = 0x3cdcc4u;
    // NOP
label_3cdcc8:
    // 0x3cdcc8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x3cdcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_3cdccc:
    // 0x3cdccc: 0x40f809  jalr        $v0
label_3cdcd0:
    if (ctx->pc == 0x3CDCD0u) {
        ctx->pc = 0x3CDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCCCu;
        // 0x3cdcd0: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDCD4u;
        goto label_3cdcd4;
    }
    ctx->pc = 0x3CDCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDCD4u);
        ctx->pc = 0x3CDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCCCu;
        // 0x3cdcd0: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDCCCu, 0x3CDCD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDCD4u;
label_3cdcd4:
    // 0x3cdcd4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
label_3cdcd8:
    if (ctx->pc == 0x3CDCD8u) {
        ctx->pc = 0x3CDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCD4u;
        // 0x3cdcd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDCDCu;
        goto label_3cdcdc;
    }
    ctx->pc = 0x3CDCD4u;
    {
        const bool branch_taken_0x3cdcd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCD4u;
        // 0x3cdcd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdcd4) {
            ctx->pc = 0x3CDCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdcc8;
        }
    }
    ctx->pc = 0x3CDCDCu;
label_3cdcdc:
    // 0x3cdcdc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3cdcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cdce0:
    // 0x3cdce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cdce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cdce4:
    // 0x3cdce4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3cdce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cdce8:
    // 0x3cdce8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_3cdcec:
    if (ctx->pc == 0x3CDCECu) {
        ctx->pc = 0x3CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCE8u;
        // 0x3cdcec: 0x961018  mult        $v0, $a0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDCF0u;
        goto label_3cdcf0;
    }
    ctx->pc = 0x3CDCE8u;
    {
        const bool branch_taken_0x3cdce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCE8u;
        // 0x3cdcec: 0x961018  mult        $v0, $a0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdce8) {
            ctx->pc = 0x3CDCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdca8;
        }
    }
    ctx->pc = 0x3CDCF0u;
label_3cdcf0:
    // 0x3cdcf0: 0x2690e880  addiu       $s0, $s4, -0x1780
    ctx->pc = 0x3cdcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3cdcf4:
    // 0x3cdcf4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cdcf8:
    // 0x3cdcf8: 0x40f809  jalr        $v0
label_3cdcfc:
    if (ctx->pc == 0x3CDCFCu) {
        ctx->pc = 0x3CDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCF8u;
        // 0x3cdcfc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDD00u;
        goto label_3cdd00;
    }
    ctx->pc = 0x3CDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDD00u);
        ctx->pc = 0x3CDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDCF8u;
        // 0x3cdcfc: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDCF8u, 0x3CDD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDD00u;
label_3cdd00:
    // 0x3cdd00: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3cdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cdd04:
    // 0x3cdd04: 0x40f809  jalr        $v0
label_3cdd08:
    if (ctx->pc == 0x3CDD08u) {
        ctx->pc = 0x3CDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD04u;
        // 0x3cdd08: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDD0Cu;
        goto label_3cdd0c;
    }
    ctx->pc = 0x3CDD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDD0Cu);
        ctx->pc = 0x3CDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD04u;
        // 0x3cdd08: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDD04u, 0x3CDD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDD0Cu;
label_3cdd0c:
    // 0x3cdd0c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3cdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cdd10:
    // 0x3cdd10: 0x60f809  jalr        $v1
label_3cdd14:
    if (ctx->pc == 0x3CDD14u) {
        ctx->pc = 0x3CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD10u;
        // 0x3cdd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDD18u;
        goto label_3cdd18;
    }
    ctx->pc = 0x3CDD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CDD18u);
        ctx->pc = 0x3CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD10u;
        // 0x3cdd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDD10u, 0x3CDD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDD18u;
label_3cdd18:
    // 0x3cdd18: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3cdd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cdd1c:
    // 0x3cdd1c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3cdd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cdd20:
    // 0x3cdd20: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3cdd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cdd24:
    // 0x3cdd24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3cdd24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cdd28:
    // 0x3cdd28: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3cdd28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cdd2c:
    // 0x3cdd2c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3cdd2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cdd30:
    // 0x3cdd30: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3cdd30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cdd34:
    // 0x3cdd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cdd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cdd38:
    // 0x3cdd38: 0x3e00008  jr          $ra
label_3cdd3c:
    if (ctx->pc == 0x3CDD3Cu) {
        ctx->pc = 0x3CDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD38u;
        // 0x3cdd3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDD40u;
        goto label_fallthrough_0x3cdd38;
    }
    ctx->pc = 0x3CDD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDD38u;
        // 0x3cdd3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cdd38:
    ctx->pc = 0x3CDD40u;
}
