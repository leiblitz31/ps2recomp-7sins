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

// Function: sub_0040DB80
// Address: 0x40db80 - 0x40dc88
void sub_0040DB80_0x40db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040DB80_0x40db80");
#endif

    switch (ctx->pc) {
        case 0x40db80u: goto label_40db80;
        case 0x40db84u: goto label_40db84;
        case 0x40db88u: goto label_40db88;
        case 0x40db8cu: goto label_40db8c;
        case 0x40db90u: goto label_40db90;
        case 0x40db94u: goto label_40db94;
        case 0x40db98u: goto label_40db98;
        case 0x40db9cu: goto label_40db9c;
        case 0x40dba0u: goto label_40dba0;
        case 0x40dba4u: goto label_40dba4;
        case 0x40dba8u: goto label_40dba8;
        case 0x40dbacu: goto label_40dbac;
        case 0x40dbb0u: goto label_40dbb0;
        case 0x40dbb4u: goto label_40dbb4;
        case 0x40dbb8u: goto label_40dbb8;
        case 0x40dbbcu: goto label_40dbbc;
        case 0x40dbc0u: goto label_40dbc0;
        case 0x40dbc4u: goto label_40dbc4;
        case 0x40dbc8u: goto label_40dbc8;
        case 0x40dbccu: goto label_40dbcc;
        case 0x40dbd0u: goto label_40dbd0;
        case 0x40dbd4u: goto label_40dbd4;
        case 0x40dbd8u: goto label_40dbd8;
        case 0x40dbdcu: goto label_40dbdc;
        case 0x40dbe0u: goto label_40dbe0;
        case 0x40dbe4u: goto label_40dbe4;
        case 0x40dbe8u: goto label_40dbe8;
        case 0x40dbecu: goto label_40dbec;
        case 0x40dbf0u: goto label_40dbf0;
        case 0x40dbf4u: goto label_40dbf4;
        case 0x40dbf8u: goto label_40dbf8;
        case 0x40dbfcu: goto label_40dbfc;
        case 0x40dc00u: goto label_40dc00;
        case 0x40dc04u: goto label_40dc04;
        case 0x40dc08u: goto label_40dc08;
        case 0x40dc0cu: goto label_40dc0c;
        case 0x40dc10u: goto label_40dc10;
        case 0x40dc14u: goto label_40dc14;
        case 0x40dc18u: goto label_40dc18;
        case 0x40dc1cu: goto label_40dc1c;
        case 0x40dc20u: goto label_40dc20;
        case 0x40dc24u: goto label_40dc24;
        case 0x40dc28u: goto label_40dc28;
        case 0x40dc2cu: goto label_40dc2c;
        case 0x40dc30u: goto label_40dc30;
        case 0x40dc34u: goto label_40dc34;
        case 0x40dc38u: goto label_40dc38;
        case 0x40dc3cu: goto label_40dc3c;
        case 0x40dc40u: goto label_40dc40;
        case 0x40dc44u: goto label_40dc44;
        case 0x40dc48u: goto label_40dc48;
        case 0x40dc4cu: goto label_40dc4c;
        case 0x40dc50u: goto label_40dc50;
        case 0x40dc54u: goto label_40dc54;
        case 0x40dc58u: goto label_40dc58;
        case 0x40dc5cu: goto label_40dc5c;
        case 0x40dc60u: goto label_40dc60;
        case 0x40dc64u: goto label_40dc64;
        case 0x40dc68u: goto label_40dc68;
        case 0x40dc6cu: goto label_40dc6c;
        case 0x40dc70u: goto label_40dc70;
        case 0x40dc74u: goto label_40dc74;
        case 0x40dc78u: goto label_40dc78;
        case 0x40dc7cu: goto label_40dc7c;
        case 0x40dc80u: goto label_40dc80;
        case 0x40dc84u: goto label_40dc84;
        default: break;
    }

    ctx->pc = 0x40db80u;

label_40db80:
    // 0x40db80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40db84:
    // 0x40db84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_40db88:
    // 0x40db88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40db8c:
    // 0x40db8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40db8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40db90:
    // 0x40db90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40db94:
    // 0x40db94: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x40db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40db98:
    // 0x40db98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40db9c:
    // 0x40db9c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x40db9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_40dba0:
    // 0x40dba0: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_40dba4:
    if (ctx->pc == 0x40DBA4u) {
        ctx->pc = 0x40DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBA0u;
        // 0x40dba4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DBA8u;
        goto label_40dba8;
    }
    ctx->pc = 0x40DBA0u;
    {
        const bool branch_taken_0x40dba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBA0u;
        // 0x40dba4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dba0) {
            ctx->pc = 0x40DC54u;
            goto label_40dc54;
        }
    }
    ctx->pc = 0x40DBA8u;
label_40dba8:
    // 0x40dba8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x40dba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40dbac:
    // 0x40dbac: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x40dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_40dbb0:
    // 0x40dbb0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x40dbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_40dbb4:
    // 0x40dbb4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x40dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dbb8:
    // 0x40dbb8: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x40dbb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_40dbbc:
    // 0x40dbbc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40dbc0:
    // 0x40dbc0: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x40dbc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_40dbc4:
    // 0x40dbc4: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x40dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_40dbc8:
    // 0x40dbc8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x40dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_40dbcc:
    // 0x40dbcc: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x40dbccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40dbd0:
    // 0x40dbd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40dbd4:
    // 0x40dbd4: 0x2812  mflo        $a1
    ctx->pc = 0x40dbd4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_40dbd8:
    // 0x40dbd8: 0x40f809  jalr        $v0
label_40dbdc:
    if (ctx->pc == 0x40DBDCu) {
        ctx->pc = 0x40DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBD8u;
        // 0x40dbdc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DBE0u;
        goto label_40dbe0;
    }
    ctx->pc = 0x40DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DBE0u);
        ctx->pc = 0x40DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBD8u;
        // 0x40dbdc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DBD8u, 0x40DBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DBE0u;
label_40dbe0:
    // 0x40dbe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40dbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dbe4:
    // 0x40dbe4: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_40dbe8:
    if (ctx->pc == 0x40DBE8u) {
        ctx->pc = 0x40DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DBE4u;
        // 0x40dbe8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DBECu;
        goto label_40dbec;
    }
    ctx->pc = 0x40DBE4u;
    {
        const bool branch_taken_0x40dbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40dbe4) {
            ctx->pc = 0x40DBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DBE4u;
            // 0x40dbe8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DC38u;
            goto label_40dc38;
        }
    }
    ctx->pc = 0x40DBECu;
label_40dbec:
    // 0x40dbec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x40dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40dbf0:
    // 0x40dbf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40dbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dbf4:
    // 0x40dbf4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x40dbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dbf8:
    // 0x40dbf8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40dbfc:
    // 0x40dbfc: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x40dbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_40dc00:
    // 0x40dc00: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x40dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_40dc04:
    // 0x40dc04: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x40dc04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_40dc08:
    // 0x40dc08: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x40dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_40dc0c:
    // 0x40dc0c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x40dc0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_40dc10:
    // 0x40dc10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x40dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_40dc14:
    // 0x40dc14: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x40dc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40dc18:
    // 0x40dc18: 0x2812  mflo        $a1
    ctx->pc = 0x40dc18u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_40dc1c:
    // 0x40dc1c: 0xc1035f6  jal         func_40D7D8
label_40dc20:
    if (ctx->pc == 0x40DC20u) {
        ctx->pc = 0x40DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC1Cu;
        // 0x40dc20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC24u;
        goto label_40dc24;
    }
    ctx->pc = 0x40DC1Cu;
    SET_GPR_U32(ctx, 31, 0x40DC24u);
    ctx->pc = 0x40DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DC1Cu;
    // 0x40dc20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40DC1Cu, 0x40DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DC24u;
label_40dc24:
    // 0x40dc24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40dc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40dc28:
    // 0x40dc28: 0xc103628  jal         func_40D8A0
label_40dc2c:
    if (ctx->pc == 0x40DC2Cu) {
        ctx->pc = 0x40DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC28u;
        // 0x40dc2c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC30u;
        goto label_40dc30;
    }
    ctx->pc = 0x40DC28u;
    SET_GPR_U32(ctx, 31, 0x40DC30u);
    ctx->pc = 0x40DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DC28u;
    // 0x40dc2c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40DC28u, 0x40DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DC30u;
label_40dc30:
    // 0x40dc30: 0x1000000f  b           . + 4 + (0xF << 2)
label_40dc34:
    if (ctx->pc == 0x40DC34u) {
        ctx->pc = 0x40DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC30u;
        // 0x40dc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC38u;
        goto label_40dc38;
    }
    ctx->pc = 0x40DC30u;
    {
        const bool branch_taken_0x40dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC30u;
        // 0x40dc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dc30) {
            ctx->pc = 0x40DC70u;
            goto label_40dc70;
        }
    }
    ctx->pc = 0x40DC38u;
label_40dc38:
    // 0x40dc38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40dc3c:
    // 0x40dc3c: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x40dc3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_40dc40:
    // 0x40dc40: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x40dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_40dc44:
    // 0x40dc44: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x40dc44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_40dc48:
    // 0x40dc48: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x40dc48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_40dc4c:
    // 0x40dc4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40dc50:
    // 0x40dc50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x40dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_40dc54:
    // 0x40dc54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x40dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40dc58:
    // 0x40dc58: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x40dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40dc5c:
    // 0x40dc5c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x40dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40dc60:
    // 0x40dc60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x40dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40dc64:
    // 0x40dc64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x40dc64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_40dc68:
    // 0x40dc68: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x40dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_40dc6c:
    // 0x40dc6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x40dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_40dc70:
    // 0x40dc70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40dc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40dc74:
    // 0x40dc74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40dc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40dc78:
    // 0x40dc78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40dc7c:
    // 0x40dc7c: 0x3e00008  jr          $ra
label_40dc80:
    if (ctx->pc == 0x40DC80u) {
        ctx->pc = 0x40DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC7Cu;
        // 0x40dc80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DC84u;
        goto label_40dc84;
    }
    ctx->pc = 0x40DC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DC7Cu;
        // 0x40dc80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DC84u;
label_40dc84:
    // 0x40dc84: 0x0  nop
    ctx->pc = 0x40dc84u;
    // NOP
    ctx->pc = 0x40dc88u;
}
