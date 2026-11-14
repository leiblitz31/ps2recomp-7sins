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

// Function: sub_0047DB40
// Address: 0x47db40 - 0x47dce0
void sub_0047DB40_0x47db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DB40_0x47db40");
#endif

    switch (ctx->pc) {
        case 0x47db40u: goto label_47db40;
        case 0x47db44u: goto label_47db44;
        case 0x47db48u: goto label_47db48;
        case 0x47db4cu: goto label_47db4c;
        case 0x47db50u: goto label_47db50;
        case 0x47db54u: goto label_47db54;
        case 0x47db58u: goto label_47db58;
        case 0x47db5cu: goto label_47db5c;
        case 0x47db60u: goto label_47db60;
        case 0x47db64u: goto label_47db64;
        case 0x47db68u: goto label_47db68;
        case 0x47db6cu: goto label_47db6c;
        case 0x47db70u: goto label_47db70;
        case 0x47db74u: goto label_47db74;
        case 0x47db78u: goto label_47db78;
        case 0x47db7cu: goto label_47db7c;
        case 0x47db80u: goto label_47db80;
        case 0x47db84u: goto label_47db84;
        case 0x47db88u: goto label_47db88;
        case 0x47db8cu: goto label_47db8c;
        case 0x47db90u: goto label_47db90;
        case 0x47db94u: goto label_47db94;
        case 0x47db98u: goto label_47db98;
        case 0x47db9cu: goto label_47db9c;
        case 0x47dba0u: goto label_47dba0;
        case 0x47dba4u: goto label_47dba4;
        case 0x47dba8u: goto label_47dba8;
        case 0x47dbacu: goto label_47dbac;
        case 0x47dbb0u: goto label_47dbb0;
        case 0x47dbb4u: goto label_47dbb4;
        case 0x47dbb8u: goto label_47dbb8;
        case 0x47dbbcu: goto label_47dbbc;
        case 0x47dbc0u: goto label_47dbc0;
        case 0x47dbc4u: goto label_47dbc4;
        case 0x47dbc8u: goto label_47dbc8;
        case 0x47dbccu: goto label_47dbcc;
        case 0x47dbd0u: goto label_47dbd0;
        case 0x47dbd4u: goto label_47dbd4;
        case 0x47dbd8u: goto label_47dbd8;
        case 0x47dbdcu: goto label_47dbdc;
        case 0x47dbe0u: goto label_47dbe0;
        case 0x47dbe4u: goto label_47dbe4;
        case 0x47dbe8u: goto label_47dbe8;
        case 0x47dbecu: goto label_47dbec;
        case 0x47dbf0u: goto label_47dbf0;
        case 0x47dbf4u: goto label_47dbf4;
        case 0x47dbf8u: goto label_47dbf8;
        case 0x47dbfcu: goto label_47dbfc;
        case 0x47dc00u: goto label_47dc00;
        case 0x47dc04u: goto label_47dc04;
        case 0x47dc08u: goto label_47dc08;
        case 0x47dc0cu: goto label_47dc0c;
        case 0x47dc10u: goto label_47dc10;
        case 0x47dc14u: goto label_47dc14;
        case 0x47dc18u: goto label_47dc18;
        case 0x47dc1cu: goto label_47dc1c;
        case 0x47dc20u: goto label_47dc20;
        case 0x47dc24u: goto label_47dc24;
        case 0x47dc28u: goto label_47dc28;
        case 0x47dc2cu: goto label_47dc2c;
        case 0x47dc30u: goto label_47dc30;
        case 0x47dc34u: goto label_47dc34;
        case 0x47dc38u: goto label_47dc38;
        case 0x47dc3cu: goto label_47dc3c;
        case 0x47dc40u: goto label_47dc40;
        case 0x47dc44u: goto label_47dc44;
        case 0x47dc48u: goto label_47dc48;
        case 0x47dc4cu: goto label_47dc4c;
        case 0x47dc50u: goto label_47dc50;
        case 0x47dc54u: goto label_47dc54;
        case 0x47dc58u: goto label_47dc58;
        case 0x47dc5cu: goto label_47dc5c;
        case 0x47dc60u: goto label_47dc60;
        case 0x47dc64u: goto label_47dc64;
        case 0x47dc68u: goto label_47dc68;
        case 0x47dc6cu: goto label_47dc6c;
        case 0x47dc70u: goto label_47dc70;
        case 0x47dc74u: goto label_47dc74;
        case 0x47dc78u: goto label_47dc78;
        case 0x47dc7cu: goto label_47dc7c;
        case 0x47dc80u: goto label_47dc80;
        case 0x47dc84u: goto label_47dc84;
        case 0x47dc88u: goto label_47dc88;
        case 0x47dc8cu: goto label_47dc8c;
        case 0x47dc90u: goto label_47dc90;
        case 0x47dc94u: goto label_47dc94;
        case 0x47dc98u: goto label_47dc98;
        case 0x47dc9cu: goto label_47dc9c;
        case 0x47dca0u: goto label_47dca0;
        case 0x47dca4u: goto label_47dca4;
        case 0x47dca8u: goto label_47dca8;
        case 0x47dcacu: goto label_47dcac;
        case 0x47dcb0u: goto label_47dcb0;
        case 0x47dcb4u: goto label_47dcb4;
        case 0x47dcb8u: goto label_47dcb8;
        case 0x47dcbcu: goto label_47dcbc;
        case 0x47dcc0u: goto label_47dcc0;
        case 0x47dcc4u: goto label_47dcc4;
        case 0x47dcc8u: goto label_47dcc8;
        case 0x47dcccu: goto label_47dccc;
        case 0x47dcd0u: goto label_47dcd0;
        case 0x47dcd4u: goto label_47dcd4;
        case 0x47dcd8u: goto label_47dcd8;
        case 0x47dcdcu: goto label_47dcdc;
        default: break;
    }

    ctx->pc = 0x47db40u;

label_47db40:
    // 0x47db40: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x47db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_47db44:
    // 0x47db44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47db48:
    // 0x47db48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47db4c:
    // 0x47db4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47db4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47db50:
    // 0x47db50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47db54:
    // 0x47db54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47db58:
    // 0x47db58: 0x8f82c0a0  lw          $v0, -0x3F60($gp)
    ctx->pc = 0x47db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
label_47db5c:
    // 0x47db5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_47db60:
    if (ctx->pc == 0x47DB60u) {
        ctx->pc = 0x47DB64u;
        goto label_47db64;
    }
    ctx->pc = 0x47DB5Cu;
    {
        const bool branch_taken_0x47db5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47db5c) {
            ctx->pc = 0x47DB70u;
            goto label_47db70;
        }
    }
    ctx->pc = 0x47DB64u;
label_47db64:
    // 0x47db64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47db64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db68:
    // 0x47db68: 0x10000054  b           . + 4 + (0x54 << 2)
label_47db6c:
    if (ctx->pc == 0x47DB6Cu) {
        ctx->pc = 0x47DB70u;
        goto label_47db70;
    }
    ctx->pc = 0x47DB68u;
    {
        const bool branch_taken_0x47db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db68) {
            ctx->pc = 0x47DCBCu;
            goto label_47dcbc;
        }
    }
    ctx->pc = 0x47DB70u;
label_47db70:
    // 0x47db70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47db70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db74:
    // 0x47db74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47db74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db78:
    // 0x47db78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db7c:
    // 0x47db7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47db7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47db80:
    // 0x47db80: 0x10000049  b           . + 4 + (0x49 << 2)
label_47db84:
    if (ctx->pc == 0x47DB84u) {
        ctx->pc = 0x47DB88u;
        goto label_47db88;
    }
    ctx->pc = 0x47DB80u;
    {
        const bool branch_taken_0x47db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db80) {
            ctx->pc = 0x47DCA8u;
            goto label_47dca8;
        }
    }
    ctx->pc = 0x47DB88u;
label_47db88:
    // 0x47db88: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x47db88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_47db8c:
    // 0x47db8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_47db90:
    // 0x47db90: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_47db94:
    // 0x47db94: 0x8f82c0a4  lw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
label_47db98:
    // 0x47db98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x47db98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47db9c:
    // 0x47db9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47db9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dba0:
    // 0x47dba0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x47dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47dba4:
    // 0x47dba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_47dba8:
    if (ctx->pc == 0x47DBA8u) {
        ctx->pc = 0x47DBACu;
        goto label_47dbac;
    }
    ctx->pc = 0x47DBA4u;
    {
        const bool branch_taken_0x47dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dba4) {
            ctx->pc = 0x47DBB0u;
            goto label_47dbb0;
        }
    }
    ctx->pc = 0x47DBACu;
label_47dbac:
    // 0x47dbac: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x47dbacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47dbb0:
    // 0x47dbb0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x47dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_47dbb4:
    // 0x47dbb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47dbb8:
    // 0x47dbb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47dbbc:
    // 0x47dbbc: 0x8f82c0ac  lw          $v0, -0x3F54($gp)
    ctx->pc = 0x47dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
label_47dbc0:
    // 0x47dbc0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x47dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47dbc4:
    // 0x47dbc4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x47dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_47dbc8:
    // 0x47dbc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x47dbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47dbcc:
    // 0x47dbcc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x47dbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_47dbd0:
    // 0x47dbd0: 0xc1111fe  jal         func_4447F8
label_47dbd4:
    if (ctx->pc == 0x47DBD4u) {
        ctx->pc = 0x47DBD8u;
        goto label_47dbd8;
    }
    ctx->pc = 0x47DBD0u;
    SET_GPR_U32(ctx, 31, 0x47DBD8u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x47DBD0u, 0x47DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DBD8u;
label_47dbd8:
    // 0x47dbd8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_47dbdc:
    if (ctx->pc == 0x47DBDCu) {
        ctx->pc = 0x47DBE0u;
        goto label_47dbe0;
    }
    ctx->pc = 0x47DBD8u;
    {
        const bool branch_taken_0x47dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dbd8) {
            ctx->pc = 0x47DC9Cu;
            goto label_47dc9c;
        }
    }
    ctx->pc = 0x47DBE0u;
label_47dbe0:
    // 0x47dbe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x47dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47dbe4:
    // 0x47dbe4: 0xc1110a8  jal         func_4442A0
label_47dbe8:
    if (ctx->pc == 0x47DBE8u) {
        ctx->pc = 0x47DBECu;
        goto label_47dbec;
    }
    ctx->pc = 0x47DBE4u;
    SET_GPR_U32(ctx, 31, 0x47DBECu);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x47DBE4u, 0x47DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DBECu;
label_47dbec:
    // 0x47dbec: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_47dbf0:
    if (ctx->pc == 0x47DBF0u) {
        ctx->pc = 0x47DBF4u;
        goto label_47dbf4;
    }
    ctx->pc = 0x47DBECu;
    {
        const bool branch_taken_0x47dbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dbec) {
            ctx->pc = 0x47DC94u;
            goto label_47dc94;
        }
    }
    ctx->pc = 0x47DBF4u;
label_47dbf4:
    // 0x47dbf4: 0x8f82b504  lw          $v0, -0x4AFC($gp)
    ctx->pc = 0x47dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948100)));
label_47dbf8:
    // 0x47dbf8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_47dbfc:
    if (ctx->pc == 0x47DBFCu) {
        ctx->pc = 0x47DC00u;
        goto label_47dc00;
    }
    ctx->pc = 0x47DBF8u;
    {
        const bool branch_taken_0x47dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dbf8) {
            ctx->pc = 0x47DC94u;
            goto label_47dc94;
        }
    }
    ctx->pc = 0x47DC00u;
label_47dc00:
    // 0x47dc00: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47dc04:
    // 0x47dc04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47dc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47dc08:
    // 0x47dc08: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x47dc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_47dc0c:
    // 0x47dc0c: 0xc115ee8  jal         func_457BA0
label_47dc10:
    if (ctx->pc == 0x47DC10u) {
        ctx->pc = 0x47DC14u;
        goto label_47dc14;
    }
    ctx->pc = 0x47DC0Cu;
    SET_GPR_U32(ctx, 31, 0x47DC14u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47DC0Cu, 0x47DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DC14u;
label_47dc14:
    // 0x47dc14: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_47dc18:
    if (ctx->pc == 0x47DC18u) {
        ctx->pc = 0x47DC1Cu;
        goto label_47dc1c;
    }
    ctx->pc = 0x47DC14u;
    {
        const bool branch_taken_0x47dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dc14) {
            ctx->pc = 0x47DC94u;
            goto label_47dc94;
        }
    }
    ctx->pc = 0x47DC1Cu;
label_47dc1c:
    // 0x47dc1c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x47dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_47dc20:
    // 0x47dc20: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_47dc24:
    if (ctx->pc == 0x47DC24u) {
        ctx->pc = 0x47DC28u;
        goto label_47dc28;
    }
    ctx->pc = 0x47DC20u;
    {
        const bool branch_taken_0x47dc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dc20) {
            ctx->pc = 0x47DC94u;
            goto label_47dc94;
        }
    }
    ctx->pc = 0x47DC28u;
label_47dc28:
    // 0x47dc28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47dc2c:
    // 0x47dc2c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47dc30:
    // 0x47dc30: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x47dc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_47dc34:
    // 0x47dc34: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47dc34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47dc38:
    // 0x47dc38: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47dc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47dc3c:
    // 0x47dc3c: 0x240804d6  addiu       $t0, $zero, 0x4D6
    ctx->pc = 0x47dc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1238));
label_47dc40:
    // 0x47dc40: 0x2789b508  addiu       $t1, $gp, -0x4AF8
    ctx->pc = 0x47dc40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948104));
label_47dc44:
    // 0x47dc44: 0xc113940  jal         func_44E500
label_47dc48:
    if (ctx->pc == 0x47DC48u) {
        ctx->pc = 0x47DC4Cu;
        goto label_47dc4c;
    }
    ctx->pc = 0x47DC44u;
    SET_GPR_U32(ctx, 31, 0x47DC4Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47DC44u, 0x47DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DC4Cu;
label_47dc4c:
    // 0x47dc4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47dc50:
    // 0x47dc50: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47dc54:
    // 0x47dc54: 0xc115c24  jal         func_457090
label_47dc58:
    if (ctx->pc == 0x47DC58u) {
        ctx->pc = 0x47DC5Cu;
        goto label_47dc5c;
    }
    ctx->pc = 0x47DC54u;
    SET_GPR_U32(ctx, 31, 0x47DC5Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47DC54u, 0x47DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DC5Cu;
label_47dc5c:
    // 0x47dc5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47dc60:
    // 0x47dc60: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x47dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_47dc64:
    // 0x47dc64: 0x40f809  jalr        $v0
label_47dc68:
    if (ctx->pc == 0x47DC68u) {
        ctx->pc = 0x47DC6Cu;
        goto label_47dc6c;
    }
    ctx->pc = 0x47DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47DC6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DC64u, 0x47DC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47DC6Cu;
label_47dc6c:
    // 0x47dc6c: 0xaf82b504  sw          $v0, -0x4AFC($gp)
    ctx->pc = 0x47dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948100), GPR_U32(ctx, 2));
label_47dc70:
    // 0x47dc70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_47dc74:
    // 0x47dc74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47dc78:
    if (ctx->pc == 0x47DC78u) {
        ctx->pc = 0x47DC7Cu;
        goto label_47dc7c;
    }
    ctx->pc = 0x47DC74u;
    {
        const bool branch_taken_0x47dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dc74) {
            ctx->pc = 0x47DC84u;
            goto label_47dc84;
        }
    }
    ctx->pc = 0x47DC7Cu;
label_47dc7c:
    // 0x47dc7c: 0xd  break       0
    ctx->pc = 0x47dc7cu;
    runtime->handleBreak(rdram, ctx);
label_47dc80:
    // 0x47dc80: 0x0  nop
    ctx->pc = 0x47dc80u;
    // NOP
label_47dc84:
    // 0x47dc84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x47dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47dc88:
    // 0x47dc88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47dc8c:
    // 0x47dc8c: 0xc11392c  jal         func_44E4B0
label_47dc90:
    if (ctx->pc == 0x47DC90u) {
        ctx->pc = 0x47DC94u;
        goto label_47dc94;
    }
    ctx->pc = 0x47DC8Cu;
    SET_GPR_U32(ctx, 31, 0x47DC94u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47DC8Cu, 0x47DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DC94u;
label_47dc94:
    // 0x47dc94: 0xc111228  jal         func_4448A0
label_47dc98:
    if (ctx->pc == 0x47DC98u) {
        ctx->pc = 0x47DC9Cu;
        goto label_47dc9c;
    }
    ctx->pc = 0x47DC94u;
    SET_GPR_U32(ctx, 31, 0x47DC9Cu);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x47DC94u, 0x47DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DC9Cu;
label_47dc9c:
    // 0x47dc9c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x47dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_47dca0:
    // 0x47dca0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x47dca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47dca4:
    // 0x47dca4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_47dca8:
    // 0x47dca8: 0x8f82c0a0  lw          $v0, -0x3F60($gp)
    ctx->pc = 0x47dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
label_47dcac:
    // 0x47dcac: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x47dcacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47dcb0:
    // 0x47dcb0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_47dcb4:
    if (ctx->pc == 0x47DCB4u) {
        ctx->pc = 0x47DCB8u;
        goto label_47dcb8;
    }
    ctx->pc = 0x47DCB0u;
    {
        const bool branch_taken_0x47dcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47dcb0) {
            ctx->pc = 0x47DB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47db88;
        }
    }
    ctx->pc = 0x47DCB8u;
label_47dcb8:
    // 0x47dcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47dcbc:
    // 0x47dcbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47dcc0:
    // 0x47dcc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47dcc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47dcc4:
    // 0x47dcc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47dcc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47dcc8:
    // 0x47dcc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47dcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47dccc:
    // 0x47dccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47dcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47dcd0:
    // 0x47dcd0: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x47dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_47dcd4:
    // 0x47dcd4: 0x3e00008  jr          $ra
label_47dcd8:
    if (ctx->pc == 0x47DCD8u) {
        ctx->pc = 0x47DCDCu;
        goto label_47dcdc;
    }
    ctx->pc = 0x47DCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DCDCu;
label_47dcdc:
    // 0x47dcdc: 0x0  nop
    ctx->pc = 0x47dcdcu;
    // NOP
    ctx->pc = 0x47dce0u;
}
