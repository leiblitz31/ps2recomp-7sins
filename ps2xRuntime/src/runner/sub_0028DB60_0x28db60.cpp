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

// Function: sub_0028DB60
// Address: 0x28db60 - 0x28dda0
void sub_0028DB60_0x28db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DB60_0x28db60");
#endif

    switch (ctx->pc) {
        case 0x28db60u: goto label_28db60;
        case 0x28db64u: goto label_28db64;
        case 0x28db68u: goto label_28db68;
        case 0x28db6cu: goto label_28db6c;
        case 0x28db70u: goto label_28db70;
        case 0x28db74u: goto label_28db74;
        case 0x28db78u: goto label_28db78;
        case 0x28db7cu: goto label_28db7c;
        case 0x28db80u: goto label_28db80;
        case 0x28db84u: goto label_28db84;
        case 0x28db88u: goto label_28db88;
        case 0x28db8cu: goto label_28db8c;
        case 0x28db90u: goto label_28db90;
        case 0x28db94u: goto label_28db94;
        case 0x28db98u: goto label_28db98;
        case 0x28db9cu: goto label_28db9c;
        case 0x28dba0u: goto label_28dba0;
        case 0x28dba4u: goto label_28dba4;
        case 0x28dba8u: goto label_28dba8;
        case 0x28dbacu: goto label_28dbac;
        case 0x28dbb0u: goto label_28dbb0;
        case 0x28dbb4u: goto label_28dbb4;
        case 0x28dbb8u: goto label_28dbb8;
        case 0x28dbbcu: goto label_28dbbc;
        case 0x28dbc0u: goto label_28dbc0;
        case 0x28dbc4u: goto label_28dbc4;
        case 0x28dbc8u: goto label_28dbc8;
        case 0x28dbccu: goto label_28dbcc;
        case 0x28dbd0u: goto label_28dbd0;
        case 0x28dbd4u: goto label_28dbd4;
        case 0x28dbd8u: goto label_28dbd8;
        case 0x28dbdcu: goto label_28dbdc;
        case 0x28dbe0u: goto label_28dbe0;
        case 0x28dbe4u: goto label_28dbe4;
        case 0x28dbe8u: goto label_28dbe8;
        case 0x28dbecu: goto label_28dbec;
        case 0x28dbf0u: goto label_28dbf0;
        case 0x28dbf4u: goto label_28dbf4;
        case 0x28dbf8u: goto label_28dbf8;
        case 0x28dbfcu: goto label_28dbfc;
        case 0x28dc00u: goto label_28dc00;
        case 0x28dc04u: goto label_28dc04;
        case 0x28dc08u: goto label_28dc08;
        case 0x28dc0cu: goto label_28dc0c;
        case 0x28dc10u: goto label_28dc10;
        case 0x28dc14u: goto label_28dc14;
        case 0x28dc18u: goto label_28dc18;
        case 0x28dc1cu: goto label_28dc1c;
        case 0x28dc20u: goto label_28dc20;
        case 0x28dc24u: goto label_28dc24;
        case 0x28dc28u: goto label_28dc28;
        case 0x28dc2cu: goto label_28dc2c;
        case 0x28dc30u: goto label_28dc30;
        case 0x28dc34u: goto label_28dc34;
        case 0x28dc38u: goto label_28dc38;
        case 0x28dc3cu: goto label_28dc3c;
        case 0x28dc40u: goto label_28dc40;
        case 0x28dc44u: goto label_28dc44;
        case 0x28dc48u: goto label_28dc48;
        case 0x28dc4cu: goto label_28dc4c;
        case 0x28dc50u: goto label_28dc50;
        case 0x28dc54u: goto label_28dc54;
        case 0x28dc58u: goto label_28dc58;
        case 0x28dc5cu: goto label_28dc5c;
        case 0x28dc60u: goto label_28dc60;
        case 0x28dc64u: goto label_28dc64;
        case 0x28dc68u: goto label_28dc68;
        case 0x28dc6cu: goto label_28dc6c;
        case 0x28dc70u: goto label_28dc70;
        case 0x28dc74u: goto label_28dc74;
        case 0x28dc78u: goto label_28dc78;
        case 0x28dc7cu: goto label_28dc7c;
        case 0x28dc80u: goto label_28dc80;
        case 0x28dc84u: goto label_28dc84;
        case 0x28dc88u: goto label_28dc88;
        case 0x28dc8cu: goto label_28dc8c;
        case 0x28dc90u: goto label_28dc90;
        case 0x28dc94u: goto label_28dc94;
        case 0x28dc98u: goto label_28dc98;
        case 0x28dc9cu: goto label_28dc9c;
        case 0x28dca0u: goto label_28dca0;
        case 0x28dca4u: goto label_28dca4;
        case 0x28dca8u: goto label_28dca8;
        case 0x28dcacu: goto label_28dcac;
        case 0x28dcb0u: goto label_28dcb0;
        case 0x28dcb4u: goto label_28dcb4;
        case 0x28dcb8u: goto label_28dcb8;
        case 0x28dcbcu: goto label_28dcbc;
        case 0x28dcc0u: goto label_28dcc0;
        case 0x28dcc4u: goto label_28dcc4;
        case 0x28dcc8u: goto label_28dcc8;
        case 0x28dcccu: goto label_28dccc;
        case 0x28dcd0u: goto label_28dcd0;
        case 0x28dcd4u: goto label_28dcd4;
        case 0x28dcd8u: goto label_28dcd8;
        case 0x28dcdcu: goto label_28dcdc;
        case 0x28dce0u: goto label_28dce0;
        case 0x28dce4u: goto label_28dce4;
        case 0x28dce8u: goto label_28dce8;
        case 0x28dcecu: goto label_28dcec;
        case 0x28dcf0u: goto label_28dcf0;
        case 0x28dcf4u: goto label_28dcf4;
        case 0x28dcf8u: goto label_28dcf8;
        case 0x28dcfcu: goto label_28dcfc;
        case 0x28dd00u: goto label_28dd00;
        case 0x28dd04u: goto label_28dd04;
        case 0x28dd08u: goto label_28dd08;
        case 0x28dd0cu: goto label_28dd0c;
        case 0x28dd10u: goto label_28dd10;
        case 0x28dd14u: goto label_28dd14;
        case 0x28dd18u: goto label_28dd18;
        case 0x28dd1cu: goto label_28dd1c;
        case 0x28dd20u: goto label_28dd20;
        case 0x28dd24u: goto label_28dd24;
        case 0x28dd28u: goto label_28dd28;
        case 0x28dd2cu: goto label_28dd2c;
        case 0x28dd30u: goto label_28dd30;
        case 0x28dd34u: goto label_28dd34;
        case 0x28dd38u: goto label_28dd38;
        case 0x28dd3cu: goto label_28dd3c;
        case 0x28dd40u: goto label_28dd40;
        case 0x28dd44u: goto label_28dd44;
        case 0x28dd48u: goto label_28dd48;
        case 0x28dd4cu: goto label_28dd4c;
        case 0x28dd50u: goto label_28dd50;
        case 0x28dd54u: goto label_28dd54;
        case 0x28dd58u: goto label_28dd58;
        case 0x28dd5cu: goto label_28dd5c;
        case 0x28dd60u: goto label_28dd60;
        case 0x28dd64u: goto label_28dd64;
        case 0x28dd68u: goto label_28dd68;
        case 0x28dd6cu: goto label_28dd6c;
        case 0x28dd70u: goto label_28dd70;
        case 0x28dd74u: goto label_28dd74;
        case 0x28dd78u: goto label_28dd78;
        case 0x28dd7cu: goto label_28dd7c;
        case 0x28dd80u: goto label_28dd80;
        case 0x28dd84u: goto label_28dd84;
        case 0x28dd88u: goto label_28dd88;
        case 0x28dd8cu: goto label_28dd8c;
        case 0x28dd90u: goto label_28dd90;
        case 0x28dd94u: goto label_28dd94;
        case 0x28dd98u: goto label_28dd98;
        case 0x28dd9cu: goto label_28dd9c;
        default: break;
    }

    ctx->pc = 0x28db60u;

label_28db60:
    // 0x28db60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28db64:
    // 0x28db64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_28db68:
    // 0x28db68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28db6c:
    // 0x28db6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28db70:
    // 0x28db70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28db74:
    // 0x28db74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x28db74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_28db78:
    // 0x28db78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x28db78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_28db7c:
    // 0x28db7c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28db80:
    // 0x28db80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28db84:
    // 0x28db84: 0xc08ec98  jal         func_23B260
label_28db88:
    if (ctx->pc == 0x28DB88u) {
        ctx->pc = 0x28DB8Cu;
        goto label_28db8c;
    }
    ctx->pc = 0x28DB84u;
    SET_GPR_U32(ctx, 31, 0x28DB8Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x28DB84u, 0x28DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB8Cu;
label_28db8c:
    // 0x28db8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28db90:
    // 0x28db90: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x28db90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_28db94:
    // 0x28db94: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28db98:
    // 0x28db98: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_28db9c:
    // 0x28db9c: 0xc0422a8  jal         func_108AA0
label_28dba0:
    if (ctx->pc == 0x28DBA0u) {
        ctx->pc = 0x28DBA4u;
        goto label_28dba4;
    }
    ctx->pc = 0x28DB9Cu;
    SET_GPR_U32(ctx, 31, 0x28DBA4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x28DB9Cu, 0x28DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBA4u;
label_28dba4:
    // 0x28dba4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28dba8:
    // 0x28dba8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x28dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_28dbac:
    // 0x28dbac: 0xc0a1848  jal         func_286120
label_28dbb0:
    if (ctx->pc == 0x28DBB0u) {
        ctx->pc = 0x28DBB4u;
        goto label_28dbb4;
    }
    ctx->pc = 0x28DBACu;
    SET_GPR_U32(ctx, 31, 0x28DBB4u);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x28DBACu, 0x28DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBB4u;
label_28dbb4:
    // 0x28dbb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28dbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28dbb8:
    // 0x28dbb8: 0x10000019  b           . + 4 + (0x19 << 2)
label_28dbbc:
    if (ctx->pc == 0x28DBBCu) {
        ctx->pc = 0x28DBC0u;
        goto label_28dbc0;
    }
    ctx->pc = 0x28DBB8u;
    {
        const bool branch_taken_0x28dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dbb8) {
            ctx->pc = 0x28DC20u;
            goto label_28dc20;
        }
    }
    ctx->pc = 0x28DBC0u;
label_28dbc0:
    // 0x28dbc0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dbc4:
    // 0x28dbc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28dbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28dbc8:
    // 0x28dbc8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x28dbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_28dbcc:
    // 0x28dbcc: 0x320f809  jalr        $t9
label_28dbd0:
    if (ctx->pc == 0x28DBD0u) {
        ctx->pc = 0x28DBD4u;
        goto label_28dbd4;
    }
    ctx->pc = 0x28DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28DBD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DBCCu, 0x28DBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DBD4u;
label_28dbd4:
    // 0x28dbd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dbd8:
    // 0x28dbd8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_28dbdc:
    if (ctx->pc == 0x28DBDCu) {
        ctx->pc = 0x28DBE0u;
        goto label_28dbe0;
    }
    ctx->pc = 0x28DBD8u;
    {
        const bool branch_taken_0x28dbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28dbd8) {
            ctx->pc = 0x28DBFCu;
            goto label_28dbfc;
        }
    }
    ctx->pc = 0x28DBE0u;
label_28dbe0:
    // 0x28dbe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28dbe4:
    // 0x28dbe4: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
label_28dbe8:
    if (ctx->pc == 0x28DBE8u) {
        ctx->pc = 0x28DBECu;
        goto label_28dbec;
    }
    ctx->pc = 0x28DBE4u;
    {
        const bool branch_taken_0x28dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28dbe4) {
            ctx->pc = 0x28DBFCu;
            goto label_28dbfc;
        }
    }
    ctx->pc = 0x28DBECu;
label_28dbec:
    // 0x28dbec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28dbf0:
    // 0x28dbf0: 0xc12061c  jal         func_481870
label_28dbf4:
    if (ctx->pc == 0x28DBF4u) {
        ctx->pc = 0x28DBF8u;
        goto label_28dbf8;
    }
    ctx->pc = 0x28DBF0u;
    SET_GPR_U32(ctx, 31, 0x28DBF8u);
    ctx->pc = 0x481870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481870u, 0x28DBF0u, 0x28DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBF8u;
label_28dbf8:
    // 0x28dbf8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x28dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_28dbfc:
    // 0x28dbfc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dc00:
    // 0x28dc00: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x28dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_28dc04:
    // 0x28dc04: 0xc042298  jal         func_108A60
label_28dc08:
    if (ctx->pc == 0x28DC08u) {
        ctx->pc = 0x28DC0Cu;
        goto label_28dc0c;
    }
    ctx->pc = 0x28DC04u;
    SET_GPR_U32(ctx, 31, 0x28DC0Cu);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x28DC04u, 0x28DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC0Cu;
label_28dc0c:
    // 0x28dc0c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dc10:
    // 0x28dc10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28dc14:
    // 0x28dc14: 0xc11fde4  jal         func_47F790
label_28dc18:
    if (ctx->pc == 0x28DC18u) {
        ctx->pc = 0x28DC1Cu;
        goto label_28dc1c;
    }
    ctx->pc = 0x28DC14u;
    SET_GPR_U32(ctx, 31, 0x28DC1Cu);
    ctx->pc = 0x47F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F790u, 0x28DC14u, 0x28DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC1Cu;
label_28dc1c:
    // 0x28dc1c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x28dc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_28dc20:
    // 0x28dc20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28dc24:
    // 0x28dc24: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_28dc28:
    // 0x28dc28: 0xc0a1840  jal         func_286100
label_28dc2c:
    if (ctx->pc == 0x28DC2Cu) {
        ctx->pc = 0x28DC30u;
        goto label_28dc30;
    }
    ctx->pc = 0x28DC28u;
    SET_GPR_U32(ctx, 31, 0x28DC30u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x28DC28u, 0x28DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC30u;
label_28dc30:
    // 0x28dc30: 0x1602ffe3  bne         $s0, $v0, . + 4 + (-0x1D << 2)
label_28dc34:
    if (ctx->pc == 0x28DC34u) {
        ctx->pc = 0x28DC38u;
        goto label_28dc38;
    }
    ctx->pc = 0x28DC30u;
    {
        const bool branch_taken_0x28dc30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dc30) {
            ctx->pc = 0x28DBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dbc0;
        }
    }
    ctx->pc = 0x28DC38u;
label_28dc38:
    // 0x28dc38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28dc3c:
    // 0x28dc3c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dc40:
    // 0x28dc40: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x28dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_28dc44:
    // 0x28dc44: 0xc0542d8  jal         func_150B60
label_28dc48:
    if (ctx->pc == 0x28DC48u) {
        ctx->pc = 0x28DC4Cu;
        goto label_28dc4c;
    }
    ctx->pc = 0x28DC44u;
    SET_GPR_U32(ctx, 31, 0x28DC4Cu);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x28DC44u, 0x28DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC4Cu;
label_28dc4c:
    // 0x28dc4c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_28dc50:
    if (ctx->pc == 0x28DC50u) {
        ctx->pc = 0x28DC54u;
        goto label_28dc54;
    }
    ctx->pc = 0x28DC4Cu;
    {
        const bool branch_taken_0x28dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc4c) {
            ctx->pc = 0x28DD40u;
            goto label_28dd40;
        }
    }
    ctx->pc = 0x28DC54u;
label_28dc54:
    // 0x28dc54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28dc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28dc58:
    // 0x28dc58: 0x10000033  b           . + 4 + (0x33 << 2)
label_28dc5c:
    if (ctx->pc == 0x28DC5Cu) {
        ctx->pc = 0x28DC60u;
        goto label_28dc60;
    }
    ctx->pc = 0x28DC58u;
    {
        const bool branch_taken_0x28dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc58) {
            ctx->pc = 0x28DD28u;
            goto label_28dd28;
        }
    }
    ctx->pc = 0x28DC60u;
label_28dc60:
    // 0x28dc60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dc64:
    // 0x28dc64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28dc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28dc68:
    // 0x28dc68: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x28dc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_28dc6c:
    // 0x28dc6c: 0x320f809  jalr        $t9
label_28dc70:
    if (ctx->pc == 0x28DC70u) {
        ctx->pc = 0x28DC74u;
        goto label_28dc74;
    }
    ctx->pc = 0x28DC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28DC74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC6Cu, 0x28DC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28DC74u;
label_28dc74:
    // 0x28dc74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28dc78:
    // 0x28dc78: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_28dc7c:
    if (ctx->pc == 0x28DC7Cu) {
        ctx->pc = 0x28DC80u;
        goto label_28dc80;
    }
    ctx->pc = 0x28DC78u;
    {
        const bool branch_taken_0x28dc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28dc78) {
            ctx->pc = 0x28DCDCu;
            goto label_28dcdc;
        }
    }
    ctx->pc = 0x28DC80u;
label_28dc80:
    // 0x28dc80: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dc84:
    // 0x28dc84: 0xc0542b4  jal         func_150AD0
label_28dc88:
    if (ctx->pc == 0x28DC88u) {
        ctx->pc = 0x28DC8Cu;
        goto label_28dc8c;
    }
    ctx->pc = 0x28DC84u;
    SET_GPR_U32(ctx, 31, 0x28DC8Cu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28DC84u, 0x28DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC8Cu;
label_28dc8c:
    // 0x28dc8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dc90:
    // 0x28dc90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dc94:
    // 0x28dc94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28dc98:
    // 0x28dc98: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_28dc9c:
    if (ctx->pc == 0x28DC9Cu) {
        ctx->pc = 0x28DCA0u;
        goto label_28dca0;
    }
    ctx->pc = 0x28DC98u;
    {
        const bool branch_taken_0x28dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28dc98) {
            ctx->pc = 0x28DCDCu;
            goto label_28dcdc;
        }
    }
    ctx->pc = 0x28DCA0u;
label_28dca0:
    // 0x28dca0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dca4:
    // 0x28dca4: 0xc0542c0  jal         func_150B00
label_28dca8:
    if (ctx->pc == 0x28DCA8u) {
        ctx->pc = 0x28DCACu;
        goto label_28dcac;
    }
    ctx->pc = 0x28DCA4u;
    SET_GPR_U32(ctx, 31, 0x28DCACu);
    ctx->pc = 0x150B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B00u, 0x28DCA4u, 0x28DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCACu;
label_28dcac:
    // 0x28dcac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28dcacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28dcb0:
    // 0x28dcb0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dcb4:
    // 0x28dcb4: 0xc0542b4  jal         func_150AD0
label_28dcb8:
    if (ctx->pc == 0x28DCB8u) {
        ctx->pc = 0x28DCBCu;
        goto label_28dcbc;
    }
    ctx->pc = 0x28DCB4u;
    SET_GPR_U32(ctx, 31, 0x28DCBCu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28DCB4u, 0x28DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCBCu;
label_28dcbc:
    // 0x28dcbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dcc0:
    // 0x28dcc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dcc4:
    // 0x28dcc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28dcc8:
    // 0x28dcc8: 0xc12061c  jal         func_481870
label_28dccc:
    if (ctx->pc == 0x28DCCCu) {
        ctx->pc = 0x28DCD0u;
        goto label_28dcd0;
    }
    ctx->pc = 0x28DCC8u;
    SET_GPR_U32(ctx, 31, 0x28DCD0u);
    ctx->pc = 0x481870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481870u, 0x28DCC8u, 0x28DCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCD0u;
label_28dcd0:
    // 0x28dcd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dcd4:
    // 0x28dcd4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x28dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_28dcd8:
    // 0x28dcd8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28dcdc:
    // 0x28dcdc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dce0:
    // 0x28dce0: 0xc0542b4  jal         func_150AD0
label_28dce4:
    if (ctx->pc == 0x28DCE4u) {
        ctx->pc = 0x28DCE8u;
        goto label_28dce8;
    }
    ctx->pc = 0x28DCE0u;
    SET_GPR_U32(ctx, 31, 0x28DCE8u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28DCE0u, 0x28DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCE8u;
label_28dce8:
    // 0x28dce8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dcec:
    // 0x28dcec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dcf0:
    // 0x28dcf0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dcf4:
    // 0x28dcf4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x28dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_28dcf8:
    // 0x28dcf8: 0xc042298  jal         func_108A60
label_28dcfc:
    if (ctx->pc == 0x28DCFCu) {
        ctx->pc = 0x28DD00u;
        goto label_28dd00;
    }
    ctx->pc = 0x28DCF8u;
    SET_GPR_U32(ctx, 31, 0x28DD00u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x28DCF8u, 0x28DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD00u;
label_28dd00:
    // 0x28dd00: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dd04:
    // 0x28dd04: 0xc0542b4  jal         func_150AD0
label_28dd08:
    if (ctx->pc == 0x28DD08u) {
        ctx->pc = 0x28DD0Cu;
        goto label_28dd0c;
    }
    ctx->pc = 0x28DD04u;
    SET_GPR_U32(ctx, 31, 0x28DD0Cu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x28DD04u, 0x28DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD0Cu;
label_28dd0c:
    // 0x28dd0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28dd10:
    // 0x28dd10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dd14:
    // 0x28dd14: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dd18:
    // 0x28dd18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28dd1c:
    // 0x28dd1c: 0xc11fde4  jal         func_47F790
label_28dd20:
    if (ctx->pc == 0x28DD20u) {
        ctx->pc = 0x28DD24u;
        goto label_28dd24;
    }
    ctx->pc = 0x28DD1Cu;
    SET_GPR_U32(ctx, 31, 0x28DD24u);
    ctx->pc = 0x47F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F790u, 0x28DD1Cu, 0x28DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD24u;
label_28dd24:
    // 0x28dd24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28dd28:
    // 0x28dd28: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x28dd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28dd2c:
    // 0x28dd2c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_28dd30:
    if (ctx->pc == 0x28DD30u) {
        ctx->pc = 0x28DD34u;
        goto label_28dd34;
    }
    ctx->pc = 0x28DD2Cu;
    {
        const bool branch_taken_0x28dd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dd2c) {
            ctx->pc = 0x28DC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dc60;
        }
    }
    ctx->pc = 0x28DD34u;
label_28dd34:
    // 0x28dd34: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dd38:
    // 0x28dd38: 0xc054278  jal         func_1509E0
label_28dd3c:
    if (ctx->pc == 0x28DD3Cu) {
        ctx->pc = 0x28DD40u;
        goto label_28dd40;
    }
    ctx->pc = 0x28DD38u;
    SET_GPR_U32(ctx, 31, 0x28DD40u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x28DD38u, 0x28DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD40u;
label_28dd40:
    // 0x28dd40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28dd44:
    // 0x28dd44: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x28dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_28dd48:
    // 0x28dd48: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x28dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_28dd4c:
    // 0x28dd4c: 0xc054288  jal         func_150A20
label_28dd50:
    if (ctx->pc == 0x28DD50u) {
        ctx->pc = 0x28DD54u;
        goto label_28dd54;
    }
    ctx->pc = 0x28DD4Cu;
    SET_GPR_U32(ctx, 31, 0x28DD54u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x28DD4Cu, 0x28DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD54u;
label_28dd54:
    // 0x28dd54: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x28dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_28dd58:
    // 0x28dd58: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x28dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_28dd5c:
    // 0x28dd5c: 0xc041998  jal         func_106660
label_28dd60:
    if (ctx->pc == 0x28DD60u) {
        ctx->pc = 0x28DD64u;
        goto label_28dd64;
    }
    ctx->pc = 0x28DD5Cu;
    SET_GPR_U32(ctx, 31, 0x28DD64u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x28DD5Cu, 0x28DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD64u;
label_28dd64:
    // 0x28dd64: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_28dd68:
    if (ctx->pc == 0x28DD68u) {
        ctx->pc = 0x28DD6Cu;
        goto label_28dd6c;
    }
    ctx->pc = 0x28DD64u;
    {
        const bool branch_taken_0x28dd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dd64) {
            ctx->pc = 0x28DC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dc54;
        }
    }
    ctx->pc = 0x28DD6Cu;
label_28dd6c:
    // 0x28dd6c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x28dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_28dd70:
    // 0x28dd70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dd74:
    // 0x28dd74: 0xc08ec98  jal         func_23B260
label_28dd78:
    if (ctx->pc == 0x28DD78u) {
        ctx->pc = 0x28DD7Cu;
        goto label_28dd7c;
    }
    ctx->pc = 0x28DD74u;
    SET_GPR_U32(ctx, 31, 0x28DD7Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x28DD74u, 0x28DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD7Cu;
label_28dd7c:
    // 0x28dd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28dd80:
    // 0x28dd80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28dd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28dd84:
    // 0x28dd84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28dd84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28dd88:
    // 0x28dd88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28dd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28dd8c:
    // 0x28dd8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28dd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28dd90:
    // 0x28dd90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28dd94:
    // 0x28dd94: 0x3e00008  jr          $ra
label_28dd98:
    if (ctx->pc == 0x28DD98u) {
        ctx->pc = 0x28DD9Cu;
        goto label_28dd9c;
    }
    ctx->pc = 0x28DD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DD9Cu;
label_28dd9c:
    // 0x28dd9c: 0x0  nop
    ctx->pc = 0x28dd9cu;
    // NOP
    ctx->pc = 0x28dda0u;
}
