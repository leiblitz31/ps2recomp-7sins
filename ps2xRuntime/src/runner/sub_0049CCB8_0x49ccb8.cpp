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

// Function: sub_0049CCB8
// Address: 0x49ccb8 - 0x49ce18
void sub_0049CCB8_0x49ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049CCB8_0x49ccb8");
#endif

    switch (ctx->pc) {
        case 0x49cd08u: goto label_49cd08;
        case 0x49cd18u: goto label_49cd18;
        case 0x49cd4cu: goto label_49cd4c;
        case 0x49cd80u: goto label_49cd80;
        case 0x49cd90u: goto label_49cd90;
        case 0x49cdc4u: goto label_49cdc4;
        default: break;
    }

    ctx->pc = 0x49ccb8u;

    // 0x49ccb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x49ccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x49ccbc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x49ccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x49ccc0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x49ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x49ccc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49ccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ccc8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x49ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x49cccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49ccccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ccd0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x49ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x49ccd4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x49ccd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ccd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x49ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x49ccdc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x49ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x49cce0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x49cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49cce4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x49cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x49cce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49cce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49ccec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x49ccf0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x49ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x49ccf4: 0x8cb7004c  lw          $s7, 0x4C($a1)
    ctx->pc = 0x49ccf4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x49ccf8: 0x96960014  lhu         $s6, 0x14($s4)
    ctx->pc = 0x49ccf8u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x49ccfc: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x49CCFCu;
    {
        const bool branch_taken_0x49ccfc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CCFCu;
        // 0x49cd00: 0x96f5000c  lhu         $s5, 0xC($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ccfc) {
            ctx->pc = 0x49CD68u;
            goto label_49cd68;
        }
    }
    ctx->pc = 0x49CD04u;
    // 0x49cd04: 0x0  nop
    ctx->pc = 0x49cd04u;
    // NOP
label_49cd08:
    // 0x49cd08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49cd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49cd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd10: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x49cd10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x49cd14: 0x0  nop
    ctx->pc = 0x49cd14u;
    // NOP
label_49cd18:
    // 0x49cd18: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x49cd18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x49cd1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49CD1Cu;
    {
        const bool branch_taken_0x49cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD1Cu;
        // 0x49cd20: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd1c) {
            ctx->pc = 0x49CD58u;
            goto label_49cd58;
        }
    }
    ctx->pc = 0x49CD24u;
    // 0x49cd24: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x49cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x49cd28: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x49cd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49cd2c: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x49cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x49cd30: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x49cd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49cd34: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x49cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x49cd38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49cd3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49cd40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49cd44: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x49CD44u;
    SET_GPR_U32(ctx, 31, 0x49CD4Cu);
    ctx->pc = 0x49CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CD44u;
    // 0x49cd48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49CD44u, 0x49CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CD4Cu;
label_49cd4c:
    // 0x49cd4c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x49CD4Cu;
    {
        const bool branch_taken_0x49cd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49cd4c) {
            ctx->pc = 0x49CD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49CD4Cu;
            // 0x49cd50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49CD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd18;
        }
    }
    ctx->pc = 0x49CD54u;
    // 0x49cd54: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x49cd54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cd58:
    // 0x49cd58: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x49cd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd5c: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x49cd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x49cd60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49CD60u;
    {
        const bool branch_taken_0x49cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD60u;
        // 0x49cd64: 0x13f00a  movz        $fp, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd60) {
            ctx->pc = 0x49CD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd08;
        }
    }
    ctx->pc = 0x49CD68u;
label_49cd68:
    // 0x49cd68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49cd6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49cd6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd70: 0x96960016  lhu         $s6, 0x16($s4)
    ctx->pc = 0x49cd70u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x49cd74: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x49cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x49cd78: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x49CD78u;
    {
        const bool branch_taken_0x49cd78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD78u;
        // 0x49cd7c: 0x9455000e  lhu         $s5, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd78) {
            ctx->pc = 0x49CDE0u;
            goto label_49cde0;
        }
    }
    ctx->pc = 0x49CD80u;
label_49cd80:
    // 0x49cd80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49cd80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49cd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cd88: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x49cd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x49cd8c: 0x0  nop
    ctx->pc = 0x49cd8cu;
    // NOP
label_49cd90:
    // 0x49cd90: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x49cd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x49cd94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x49CD94u;
    {
        const bool branch_taken_0x49cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CD94u;
        // 0x49cd98: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cd94) {
            ctx->pc = 0x49CDD0u;
            goto label_49cdd0;
        }
    }
    ctx->pc = 0x49CD9Cu;
    // 0x49cd9c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x49cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x49cda0: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x49cda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49cda4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x49cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x49cda8: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x49cda8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49cdac: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x49cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x49cdb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x49cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x49cdb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49cdb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49cdbc: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x49CDBCu;
    SET_GPR_U32(ctx, 31, 0x49CDC4u);
    ctx->pc = 0x49CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CDBCu;
    // 0x49cdc0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x49CDBCu, 0x49CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CDC4u;
label_49cdc4:
    // 0x49cdc4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x49CDC4u;
    {
        const bool branch_taken_0x49cdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CDC4u;
        // 0x49cdc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdc4) {
            ctx->pc = 0x49CD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd90;
        }
    }
    ctx->pc = 0x49CDCCu;
    // 0x49cdcc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x49cdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49cdd0:
    // 0x49cdd0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x49cdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cdd4: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x49cdd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x49cdd8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49CDD8u;
    {
        const bool branch_taken_0x49cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CDD8u;
        // 0x49cddc: 0x13f00a  movz        $fp, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cdd8) {
            ctx->pc = 0x49CD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cd80;
        }
    }
    ctx->pc = 0x49CDE0u;
label_49cde0:
    // 0x49cde0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49cde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cde4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x49cde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49cde8: 0x29e100b  movn        $v0, $s4, $fp
    ctx->pc = 0x49cde8u;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
    // 0x49cdec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x49cdecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49cdf0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x49cdf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49cdf4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x49cdf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49cdf8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x49cdf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49cdfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49cdfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49ce00: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x49ce00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49ce04: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x49ce04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ce08: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x49ce08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ce0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49ce0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ce10: 0x3e00008  jr          $ra
    ctx->pc = 0x49CE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE10u;
        // 0x49ce14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49CE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49CE18u;
}
