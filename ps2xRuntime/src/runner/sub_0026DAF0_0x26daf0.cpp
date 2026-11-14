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

// Function: sub_0026DAF0
// Address: 0x26daf0 - 0x26df60
void sub_0026DAF0_0x26daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DAF0_0x26daf0");
#endif

    switch (ctx->pc) {
        case 0x26db38u: goto label_26db38;
        case 0x26db50u: goto label_26db50;
        case 0x26db64u: goto label_26db64;
        case 0x26db98u: goto label_26db98;
        case 0x26dbacu: goto label_26dbac;
        case 0x26dbb8u: goto label_26dbb8;
        case 0x26dbc8u: goto label_26dbc8;
        case 0x26dbd4u: goto label_26dbd4;
        case 0x26dbecu: goto label_26dbec;
        case 0x26dc00u: goto label_26dc00;
        case 0x26dc14u: goto label_26dc14;
        case 0x26dc24u: goto label_26dc24;
        case 0x26dc30u: goto label_26dc30;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dca0u: goto label_26dca0;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcc0u: goto label_26dcc0;
        case 0x26dce0u: goto label_26dce0;
        case 0x26dcfcu: goto label_26dcfc;
        case 0x26dd0cu: goto label_26dd0c;
        case 0x26dd64u: goto label_26dd64;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dd88u: goto label_26dd88;
        case 0x26dd94u: goto label_26dd94;
        case 0x26ddb0u: goto label_26ddb0;
        case 0x26de04u: goto label_26de04;
        case 0x26de14u: goto label_26de14;
        case 0x26de24u: goto label_26de24;
        case 0x26de34u: goto label_26de34;
        case 0x26de44u: goto label_26de44;
        case 0x26de54u: goto label_26de54;
        case 0x26de64u: goto label_26de64;
        case 0x26de78u: goto label_26de78;
        case 0x26de88u: goto label_26de88;
        case 0x26dea4u: goto label_26dea4;
        case 0x26dec0u: goto label_26dec0;
        case 0x26df04u: goto label_26df04;
        case 0x26df1cu: goto label_26df1c;
        case 0x26df2cu: goto label_26df2c;
        default: break;
    }

    ctx->pc = 0x26daf0u;

    // 0x26daf0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x26daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x26daf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26daf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26dafc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26db00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26db04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26db08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26db0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26db10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26db14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26db18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26db1c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x26db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x26db20: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x26db20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x26db24: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26db28: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x26db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x26db2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26db30: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26DB30u;
    SET_GPR_U32(ctx, 31, 0x26DB38u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26DB30u, 0x26DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB38u;
label_26db38:
    // 0x26db38: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x26db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26db3c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x26db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x26db40: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26db44: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26db48: 0xc050fec  jal         func_143FB0
    ctx->pc = 0x26DB48u;
    SET_GPR_U32(ctx, 31, 0x26DB50u);
    ctx->pc = 0x143FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FB0u, 0x26DB48u, 0x26DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB50u;
label_26db50:
    // 0x26db50: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x26db50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26db54: 0x2405046f  addiu       $a1, $zero, 0x46F
    ctx->pc = 0x26db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1135));
    // 0x26db58: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26db58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26db5c: 0xc041a50  jal         func_106940
    ctx->pc = 0x26DB5Cu;
    SET_GPR_U32(ctx, 31, 0x26DB64u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26DB5Cu, 0x26DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB64u;
label_26db64:
    // 0x26db64: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26db64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db68: 0x1017000b  beq         $zero, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x26DB68u;
    {
        const bool branch_taken_0x26db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x26db68) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB70u;
    // 0x26db70: 0x82e20000  lb          $v0, 0x0($s7)
    ctx->pc = 0x26db70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26db74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26db78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26db78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26db7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DB7Cu;
    {
        const bool branch_taken_0x26db7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db7c) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB84u;
    // 0x26db84: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26db88: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x26db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x26db8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26db8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db90: 0xc08d60c  jal         func_235830
    ctx->pc = 0x26DB90u;
    SET_GPR_U32(ctx, 31, 0x26DB98u);
    ctx->pc = 0x235830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235830u, 0x26DB90u, 0x26DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB98u;
label_26db98:
    // 0x26db98: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x26db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26db9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dba4: 0xc09b7d8  jal         func_26DF60
    ctx->pc = 0x26DBA4u;
    SET_GPR_U32(ctx, 31, 0x26DBACu);
    ctx->pc = 0x26DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DF60u, 0x26DBA4u, 0x26DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBACu;
label_26dbac:
    // 0x26dbac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dbb0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x26DBB0u;
    SET_GPR_U32(ctx, 31, 0x26DBB8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x26DBB0u, 0x26DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBB8u;
label_26dbb8:
    // 0x26dbb8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dbbc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x26dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26dbc0: 0xc119354  jal         func_464D50
    ctx->pc = 0x26DBC0u;
    SET_GPR_U32(ctx, 31, 0x26DBC8u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x26DBC0u, 0x26DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBC8u;
label_26dbc8:
    // 0x26dbc8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x26dbc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dbcc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x26DBCCu;
    {
        const bool branch_taken_0x26dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbcc) {
            ctx->pc = 0x26DD44u;
            goto label_26dd44;
        }
    }
    ctx->pc = 0x26DBD4u;
label_26dbd4:
    // 0x26dbd4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26dbd8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26dbdc: 0x24a5cf60  addiu       $a1, $a1, -0x30A0
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954848));
    // 0x26dbe0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26dbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dbe4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26DBE4u;
    SET_GPR_U32(ctx, 31, 0x26DBECu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26DBE4u, 0x26DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBECu;
label_26dbec:
    // 0x26dbec: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x26dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26dbf0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x26dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26dbf4: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26dbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26dbf8: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x26DBF8u;
    SET_GPR_U32(ctx, 31, 0x26DC00u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x26DBF8u, 0x26DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC00u;
label_26dc00:
    // 0x26dc00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26dc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc04: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dc08: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26dc0c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x26DC0Cu;
    SET_GPR_U32(ctx, 31, 0x26DC14u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x26DC0Cu, 0x26DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC14u;
label_26dc14:
    // 0x26dc14: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x26dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x26dc18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26dc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26DC1Cu;
    {
        const bool branch_taken_0x26dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc1c) {
            ctx->pc = 0x26DD28u;
            goto label_26dd28;
        }
    }
    ctx->pc = 0x26DC24u;
label_26dc24:
    // 0x26dc24: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26dc24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DC28u;
    {
        const bool branch_taken_0x26dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc28) {
            ctx->pc = 0x26DC5Cu;
            goto label_26dc5c;
        }
    }
    ctx->pc = 0x26DC30u;
label_26dc30:
    // 0x26dc30: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x26dc34: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dc38: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x26dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x26dc3c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dc40: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26dc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc44: 0xc05db18  jal         func_176C60
    ctx->pc = 0x26DC44u;
    SET_GPR_U32(ctx, 31, 0x26DC4Cu);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x26DC44u, 0x26DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC4Cu;
label_26dc4c:
    // 0x26dc4c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x26dc4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26dc50: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x26dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dc54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26dc58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26dc58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_26dc5c:
    // 0x26dc5c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x26dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x26dc60: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dc60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dc64: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x26dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dc68: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x26dc68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x26dc6c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x26dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26dc70: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DC70u;
    {
        const bool branch_taken_0x26dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26dc70) {
            ctx->pc = 0x26DC90u;
            goto label_26dc90;
        }
    }
    ctx->pc = 0x26DC78u;
    // 0x26dc78: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x26dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x26dc7c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dc80: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dc84: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26dc84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26dc88: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x26DC88u;
    {
        const bool branch_taken_0x26dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dc88) {
            ctx->pc = 0x26DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dc30;
        }
    }
    ctx->pc = 0x26DC90u;
label_26dc90:
    // 0x26dc90: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dc94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26dc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc98: 0xc05db18  jal         func_176C60
    ctx->pc = 0x26DC98u;
    SET_GPR_U32(ctx, 31, 0x26DCA0u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x26DC98u, 0x26DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCA0u;
label_26dca0:
    // 0x26dca0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26dca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26dca4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dca8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26DCA8u;
    SET_GPR_U32(ctx, 31, 0x26DCB0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26DCA8u, 0x26DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x26dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x26dcb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26dcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcb8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26DCB8u;
    SET_GPR_U32(ctx, 31, 0x26DCC0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26DCB8u, 0x26DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCC0u;
label_26dcc0:
    // 0x26dcc0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x26dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x26dcc4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x26dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x26dcc8: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26DCC8u;
    {
        const bool branch_taken_0x26dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x26dcc8) {
            ctx->pc = 0x26DD0Cu;
            goto label_26dd0c;
        }
    }
    ctx->pc = 0x26DCD0u;
    // 0x26dcd0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dcd4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26dcd8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26DCD8u;
    SET_GPR_U32(ctx, 31, 0x26DCE0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26DCD8u, 0x26DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCE0u;
label_26dce0:
    // 0x26dce0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x26dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dce4: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x26dce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x26dce8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x26dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x26dcec: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26dcf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26dcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcf4: 0xc099d2c  jal         func_2674B0
    ctx->pc = 0x26DCF4u;
    SET_GPR_U32(ctx, 31, 0x26DCFCu);
    ctx->pc = 0x2674B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2674B0u, 0x26DCF4u, 0x26DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCFCu;
label_26dcfc:
    // 0x26dcfc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x26dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dd00: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x26dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x26dd04: 0xc09b14c  jal         func_26C530
    ctx->pc = 0x26DD04u;
    SET_GPR_U32(ctx, 31, 0x26DD0Cu);
    ctx->pc = 0x26C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C530u, 0x26DD04u, 0x26DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD0Cu;
label_26dd0c:
    // 0x26dd0c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x26dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x26dd10: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dd14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dd18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26dd18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26dd1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DD1Cu;
    {
        const bool branch_taken_0x26dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd1c) {
            ctx->pc = 0x26DD28u;
            goto label_26dd28;
        }
    }
    ctx->pc = 0x26DD24u;
    // 0x26dd24: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_26dd28:
    // 0x26dd28: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x26dd2c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dd30: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dd34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26dd34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26dd38: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x26DD38u;
    {
        const bool branch_taken_0x26dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd38) {
            ctx->pc = 0x26DC24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dc24;
        }
    }
    ctx->pc = 0x26DD40u;
    // 0x26dd40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26dd44:
    // 0x26dd44: 0x2e81000a  sltiu       $at, $s4, 0xA
    ctx->pc = 0x26dd44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x26dd48: 0x1420ffa2  bnez        $at, . + 4 + (-0x5E << 2)
    ctx->pc = 0x26DD48u;
    {
        const bool branch_taken_0x26dd48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dd48) {
            ctx->pc = 0x26DBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dbd4;
        }
    }
    ctx->pc = 0x26DD50u;
    // 0x26dd50: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x26dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26dd54: 0x24050465  addiu       $a1, $zero, 0x465
    ctx->pc = 0x26dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
    // 0x26dd58: 0x2786a0f4  addiu       $a2, $gp, -0x5F0C
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942964));
    // 0x26dd5c: 0xc041a50  jal         func_106940
    ctx->pc = 0x26DD5Cu;
    SET_GPR_U32(ctx, 31, 0x26DD64u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x26DD5Cu, 0x26DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD64u;
label_26dd64:
    // 0x26dd64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26dd64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd68: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26dd6c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x26dd70: 0xc0905a0  jal         func_241680
    ctx->pc = 0x26DD70u;
    SET_GPR_U32(ctx, 31, 0x26DD78u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x26DD70u, 0x26DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DD78u;
label_26dd78:
    // 0x26dd78: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x26dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x26dd7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26dd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd80: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x26DD80u;
    {
        const bool branch_taken_0x26dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd80) {
            ctx->pc = 0x26DEDCu;
            goto label_26dedc;
        }
    }
    ctx->pc = 0x26DD88u;
label_26dd88:
    // 0x26dd88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26dd88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DD8Cu;
    {
        const bool branch_taken_0x26dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd8c) {
            ctx->pc = 0x26DDC0u;
            goto label_26ddc0;
        }
    }
    ctx->pc = 0x26DD94u;
label_26dd94:
    // 0x26dd94: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x26dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26dd98: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dd9c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x26dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x26dda0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26dda4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26dda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dda8: 0xc05db18  jal         func_176C60
    ctx->pc = 0x26DDA8u;
    SET_GPR_U32(ctx, 31, 0x26DDB0u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x26DDA8u, 0x26DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DDB0u;
label_26ddb0:
    // 0x26ddb0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x26ddb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26ddb4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x26ddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ddb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26ddbc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_26ddc0:
    // 0x26ddc0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x26ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26ddc4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26ddc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ddc8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x26ddc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26ddcc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x26ddccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x26ddd0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x26ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26ddd4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DDD4u;
    {
        const bool branch_taken_0x26ddd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ddd4) {
            ctx->pc = 0x26DDF4u;
            goto label_26ddf4;
        }
    }
    ctx->pc = 0x26DDDCu;
    // 0x26dddc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26dde0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dde0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dde4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dde8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26dde8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26ddec: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x26DDECu;
    {
        const bool branch_taken_0x26ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ddec) {
            ctx->pc = 0x26DD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dd94;
        }
    }
    ctx->pc = 0x26DDF4u;
label_26ddf4:
    // 0x26ddf4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26ddf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26ddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddfc: 0xc05db18  jal         func_176C60
    ctx->pc = 0x26DDFCu;
    SET_GPR_U32(ctx, 31, 0x26DE04u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x26DDFCu, 0x26DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE04u;
label_26de04:
    // 0x26de04: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26de04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26de08: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26de0c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26DE0Cu;
    SET_GPR_U32(ctx, 31, 0x26DE14u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26DE0Cu, 0x26DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE14u;
label_26de14:
    // 0x26de14: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x26de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x26de18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26de18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de1c: 0xc09a364  jal         func_268D90
    ctx->pc = 0x26DE1Cu;
    SET_GPR_U32(ctx, 31, 0x26DE24u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x26DE1Cu, 0x26DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE24u;
label_26de24:
    // 0x26de24: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x26de24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x26de28: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de2c: 0xc099938  jal         func_2664E0
    ctx->pc = 0x26DE2Cu;
    SET_GPR_U32(ctx, 31, 0x26DE34u);
    ctx->pc = 0x2664E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664E0u, 0x26DE2Cu, 0x26DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE34u;
label_26de34:
    // 0x26de34: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x26de34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26de38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de3c: 0xc09ad7c  jal         func_26B5F0
    ctx->pc = 0x26DE3Cu;
    SET_GPR_U32(ctx, 31, 0x26DE44u);
    ctx->pc = 0x26B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B5F0u, 0x26DE3Cu, 0x26DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE44u;
label_26de44:
    // 0x26de44: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26de44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de4c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26DE4Cu;
    SET_GPR_U32(ctx, 31, 0x26DE54u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26DE4Cu, 0x26DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE54u;
label_26de54:
    // 0x26de54: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x26de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x26de58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26de58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de5c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26DE5Cu;
    SET_GPR_U32(ctx, 31, 0x26DE64u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26DE5Cu, 0x26DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE64u;
label_26de64:
    // 0x26de64: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x26de64u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26de68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26de68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de6c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26de70: 0xc09bd40  jal         func_26F500
    ctx->pc = 0x26DE70u;
    SET_GPR_U32(ctx, 31, 0x26DE78u);
    ctx->pc = 0x26F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F500u, 0x26DE70u, 0x26DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE78u;
label_26de78:
    // 0x26de78: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x26de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x26de7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de80: 0xc04808c  jal         func_120230
    ctx->pc = 0x26DE80u;
    SET_GPR_U32(ctx, 31, 0x26DE88u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26DE80u, 0x26DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE88u;
label_26de88:
    // 0x26de88: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x26de88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26de8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DE8Cu;
    {
        const bool branch_taken_0x26de8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26de8c) {
            ctx->pc = 0x26DEACu;
            goto label_26deac;
        }
    }
    ctx->pc = 0x26DE94u;
    // 0x26de94: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x26de94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26de98: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de9c: 0xc09b14c  jal         func_26C530
    ctx->pc = 0x26DE9Cu;
    SET_GPR_U32(ctx, 31, 0x26DEA4u);
    ctx->pc = 0x26C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C530u, 0x26DE9Cu, 0x26DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEA4u;
label_26dea4:
    // 0x26dea4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DEA4u;
    {
        const bool branch_taken_0x26dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dea4) {
            ctx->pc = 0x26DEC0u;
            goto label_26dec0;
        }
    }
    ctx->pc = 0x26DEACu;
label_26deac:
    // 0x26deac: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x26deacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x26deb0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x26deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26deb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26deb8: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26DEB8u;
    SET_GPR_U32(ctx, 31, 0x26DEC0u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26DEB8u, 0x26DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEC0u;
label_26dec0:
    // 0x26dec0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x26dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26dec4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dec8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26decc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26deccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26ded0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DED0u;
    {
        const bool branch_taken_0x26ded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ded0) {
            ctx->pc = 0x26DEDCu;
            goto label_26dedc;
        }
    }
    ctx->pc = 0x26DED8u;
    // 0x26ded8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x26ded8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_26dedc:
    // 0x26dedc: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x26dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x26dee0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26dee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dee4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x26dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x26dee8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x26dee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x26deec: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x26DEECu;
    {
        const bool branch_taken_0x26deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26deec) {
            ctx->pc = 0x26DD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dd88;
        }
    }
    ctx->pc = 0x26DEF4u;
    // 0x26def4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x26def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26def8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26defc: 0xc085530  jal         func_2154C0
    ctx->pc = 0x26DEFCu;
    SET_GPR_U32(ctx, 31, 0x26DF04u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x26DEFCu, 0x26DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF04u;
label_26df04:
    // 0x26df04: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26df08: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DF08u;
    {
        const bool branch_taken_0x26df08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26df08) {
            ctx->pc = 0x26DF1Cu;
            goto label_26df1c;
        }
    }
    ctx->pc = 0x26DF10u;
    // 0x26df10: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26df14: 0xc09bb00  jal         func_26EC00
    ctx->pc = 0x26DF14u;
    SET_GPR_U32(ctx, 31, 0x26DF1Cu);
    ctx->pc = 0x26EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC00u, 0x26DF14u, 0x26DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF1Cu;
label_26df1c:
    // 0x26df1c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x26df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26df20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26df24: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26DF24u;
    SET_GPR_U32(ctx, 31, 0x26DF2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26DF24u, 0x26DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF2Cu;
label_26df2c:
    // 0x26df2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26df30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26df30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26df34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26df34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26df38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26df38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26df3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26df3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26df40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26df40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26df44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26df44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26df48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26df48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26df4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26df4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26df50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26df50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26df54: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x26df54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26df58: 0x3e00008  jr          $ra
    ctx->pc = 0x26DF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DF60u;
}
