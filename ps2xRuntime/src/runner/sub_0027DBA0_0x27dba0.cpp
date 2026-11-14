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

// Function: sub_0027DBA0
// Address: 0x27dba0 - 0x27e230
void sub_0027DBA0_0x27dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DBA0_0x27dba0");
#endif

    switch (ctx->pc) {
        case 0x27dbfcu: goto label_27dbfc;
        case 0x27dc18u: goto label_27dc18;
        case 0x27dc20u: goto label_27dc20;
        case 0x27dc2cu: goto label_27dc2c;
        case 0x27dc6cu: goto label_27dc6c;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dc90u: goto label_27dc90;
        case 0x27dcd8u: goto label_27dcd8;
        case 0x27dcf0u: goto label_27dcf0;
        case 0x27dcf8u: goto label_27dcf8;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dea0u: goto label_27dea0;
        case 0x27deb4u: goto label_27deb4;
        case 0x27dec8u: goto label_27dec8;
        case 0x27ded8u: goto label_27ded8;
        case 0x27dee8u: goto label_27dee8;
        case 0x27df44u: goto label_27df44;
        case 0x27df74u: goto label_27df74;
        case 0x27df94u: goto label_27df94;
        case 0x27e034u: goto label_27e034;
        case 0x27e074u: goto label_27e074;
        case 0x27e138u: goto label_27e138;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e174u: goto label_27e174;
        case 0x27e184u: goto label_27e184;
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1c4u: goto label_27e1c4;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1ecu: goto label_27e1ec;
        default: break;
    }

    ctx->pc = 0x27dba0u;

    // 0x27dba0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27dba4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27dba8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x27dbac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27dbb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27dbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x27dbb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27dbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27dbb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27dbbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27dbc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27dbc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27dbc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27dbcc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x27dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x27dbd0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27dbd4: 0xa3a200ef  sb          $v0, 0xEF($sp)
    ctx->pc = 0x27dbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dbd8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dbdc: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x27dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dbe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DBE0u;
    {
        const bool branch_taken_0x27dbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dbe0) {
            ctx->pc = 0x27DBF4u;
            goto label_27dbf4;
        }
    }
    ctx->pc = 0x27DBE8u;
    // 0x27dbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27dbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dbec: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x27DBECu;
    {
        const bool branch_taken_0x27dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbec) {
            ctx->pc = 0x27E1F0u;
            goto label_27e1f0;
        }
    }
    ctx->pc = 0x27DBF4u;
label_27dbf4:
    // 0x27dbf4: 0xc0ac870  jal         func_2B21C0
    ctx->pc = 0x27DBF4u;
    SET_GPR_U32(ctx, 31, 0x27DBFCu);
    ctx->pc = 0x2B21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21C0u, 0x27DBF4u, 0x27DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBFCu;
label_27dbfc:
    // 0x27dbfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27dbfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc00: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x27dc00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc04: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dc08: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x27dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x27dc0c: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dc10: 0xc09f964  jal         func_27E590
    ctx->pc = 0x27DC10u;
    SET_GPR_U32(ctx, 31, 0x27DC18u);
    ctx->pc = 0x27E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E590u, 0x27DC10u, 0x27DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC18u;
label_27dc18:
    // 0x27dc18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27DC18u;
    {
        const bool branch_taken_0x27dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc18) {
            ctx->pc = 0x27DC6Cu;
            goto label_27dc6c;
        }
    }
    ctx->pc = 0x27DC20u;
label_27dc20:
    // 0x27dc20: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x27dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x27dc24: 0xc09f95c  jal         func_27E570
    ctx->pc = 0x27DC24u;
    SET_GPR_U32(ctx, 31, 0x27DC2Cu);
    ctx->pc = 0x27E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E570u, 0x27DC24u, 0x27DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC2Cu;
label_27dc2c:
    // 0x27dc2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27dc2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27dc34: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x27dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x27dc38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27dc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27dc3c: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x27dc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dc40: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x27dc40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27dc44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27dc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc48: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x27dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x27dc4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27dc50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27dc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27dc54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27dc58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27dc5c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x27dc5cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27dc60: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x27dc64: 0xc09f94c  jal         func_27E530
    ctx->pc = 0x27DC64u;
    SET_GPR_U32(ctx, 31, 0x27DC6Cu);
    ctx->pc = 0x27E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E530u, 0x27DC64u, 0x27DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC6Cu;
label_27dc6c:
    // 0x27dc6c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dc70: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x27dc74: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dc78: 0xc09f920  jal         func_27E480
    ctx->pc = 0x27DC78u;
    SET_GPR_U32(ctx, 31, 0x27DC80u);
    ctx->pc = 0x27E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E480u, 0x27DC78u, 0x27DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC80u;
label_27dc80:
    // 0x27dc80: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x27dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x27dc84: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x27dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x27dc88: 0xc041998  jal         func_106660
    ctx->pc = 0x27DC88u;
    SET_GPR_U32(ctx, 31, 0x27DC90u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27DC88u, 0x27DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC90u;
label_27dc90:
    // 0x27dc90: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27DC90u;
    {
        const bool branch_taken_0x27dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc90) {
            ctx->pc = 0x27DC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dc20;
        }
    }
    ctx->pc = 0x27DC98u;
    // 0x27dc98: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x27DC98u;
    {
        const bool branch_taken_0x27dc98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dc98) {
            ctx->pc = 0x27DCDCu;
            goto label_27dcdc;
        }
    }
    ctx->pc = 0x27DCA0u;
    // 0x27dca0: 0x16c0000e  bnez        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x27DCA0u;
    {
        const bool branch_taken_0x27dca0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dca0) {
            ctx->pc = 0x27DCDCu;
            goto label_27dcdc;
        }
    }
    ctx->pc = 0x27DCA8u;
    // 0x27dca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dcac: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x27dcacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27dcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dcb4: 0x0  nop
    ctx->pc = 0x27dcb4u;
    // NOP
    // 0x27dcb8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x27dcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27dcbc: 0xafb400a8  sw          $s4, 0xA8($sp)
    ctx->pc = 0x27dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 20));
    // 0x27dcc0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dcc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27dcc8: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dccc: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x27dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x27dcd0: 0xc09f8f8  jal         func_27E3E0
    ctx->pc = 0x27DCD0u;
    SET_GPR_U32(ctx, 31, 0x27DCD8u);
    ctx->pc = 0x27E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E3E0u, 0x27DCD0u, 0x27DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCD8u;
label_27dcd8:
    // 0x27dcd8: 0xaf94bc14  sw          $s4, -0x43EC($gp)
    ctx->pc = 0x27dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949908), GPR_U32(ctx, 20));
label_27dcdc:
    // 0x27dcdc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dce0: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27dce4: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dce8: 0xc09f964  jal         func_27E590
    ctx->pc = 0x27DCE8u;
    SET_GPR_U32(ctx, 31, 0x27DCF0u);
    ctx->pc = 0x27E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E590u, 0x27DCE8u, 0x27DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCF0u;
label_27dcf0:
    // 0x27dcf0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x27DCF0u;
    {
        const bool branch_taken_0x27dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dcf0) {
            ctx->pc = 0x27E138u;
            goto label_27e138;
        }
    }
    ctx->pc = 0x27DCF8u;
label_27dcf8:
    // 0x27dcf8: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27dcfc: 0xc09f95c  jal         func_27E570
    ctx->pc = 0x27DCFCu;
    SET_GPR_U32(ctx, 31, 0x27DD04u);
    ctx->pc = 0x27E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E570u, 0x27DCFCu, 0x27DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD04u;
label_27dd04:
    // 0x27dd04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27dd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27dd0c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27dd10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27DD10u;
    SET_GPR_U32(ctx, 31, 0x27DD18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27DD10u, 0x27DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD18u;
label_27dd18:
    // 0x27dd18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27dd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd1c: 0x10130106  beq         $zero, $s3, . + 4 + (0x106 << 2)
    ctx->pc = 0x27DD1Cu;
    {
        const bool branch_taken_0x27dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x27dd1c) {
            ctx->pc = 0x27E138u;
            goto label_27e138;
        }
    }
    ctx->pc = 0x27DD24u;
    // 0x27dd24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd28: 0xc094190  jal         func_250640
    ctx->pc = 0x27DD28u;
    SET_GPR_U32(ctx, 31, 0x27DD30u);
    ctx->pc = 0x250640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250640u, 0x27DD28u, 0x27DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD30u;
label_27dd30:
    // 0x27dd30: 0x10020101  beq         $zero, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x27DD30u;
    {
        const bool branch_taken_0x27dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27dd30) {
            ctx->pc = 0x27E138u;
            goto label_27e138;
        }
    }
    ctx->pc = 0x27DD38u;
    // 0x27dd38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27dd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd3c: 0xc094190  jal         func_250640
    ctx->pc = 0x27DD3Cu;
    SET_GPR_U32(ctx, 31, 0x27DD44u);
    ctx->pc = 0x250640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250640u, 0x27DD3Cu, 0x27DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD44u;
label_27dd44:
    // 0x27dd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd48: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x27DD48u;
    SET_GPR_U32(ctx, 31, 0x27DD50u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x27DD48u, 0x27DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD50u;
label_27dd50:
    // 0x27dd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd54: 0x24050562  addiu       $a1, $zero, 0x562
    ctx->pc = 0x27dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x27dd58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27dd58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd5c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x27DD5Cu;
    SET_GPR_U32(ctx, 31, 0x27DD64u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x27DD5Cu, 0x27DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DD64u;
label_27dd64:
    // 0x27dd64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27dd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27dd68: 0x102000f0  beqz        $at, . + 4 + (0xF0 << 2)
    ctx->pc = 0x27DD68u;
    {
        const bool branch_taken_0x27dd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dd68) {
            ctx->pc = 0x27E12Cu;
            goto label_27e12c;
        }
    }
    ctx->pc = 0x27DD70u;
    // 0x27dd70: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x27dd70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27dd74: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27DD74u;
    {
        const bool branch_taken_0x27dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dd74) {
            ctx->pc = 0x27DDFCu;
            goto label_27ddfc;
        }
    }
    ctx->pc = 0x27DD7Cu;
    // 0x27dd7c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd80: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27dd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27dd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dd88: 0x0  nop
    ctx->pc = 0x27dd88u;
    // NOP
    // 0x27dd8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27dd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dd90: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x27DD90u;
    {
        const bool branch_taken_0x27dd90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27dd90) {
            ctx->pc = 0x27DDFCu;
            goto label_27ddfc;
        }
    }
    ctx->pc = 0x27DD98u;
    // 0x27dd98: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dd9c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27dda0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dda4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27dda4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27dda8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27ddac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddb0: 0x0  nop
    ctx->pc = 0x27ddb0u;
    // NOP
    // 0x27ddb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ddb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ddb8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27DDB8u;
    {
        const bool branch_taken_0x27ddb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ddb8) {
            ctx->pc = 0x27DDD8u;
            goto label_27ddd8;
        }
    }
    ctx->pc = 0x27DDC0u;
    // 0x27ddc0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27ddc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ddc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ddc8: 0x0  nop
    ctx->pc = 0x27ddc8u;
    // NOP
    // 0x27ddcc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x27ddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x27ddd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27DDD0u;
    {
        const bool branch_taken_0x27ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddd0) {
            ctx->pc = 0x27DDECu;
            goto label_27ddec;
        }
    }
    ctx->pc = 0x27DDD8u;
label_27ddd8:
    // 0x27ddd8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dddc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27dde0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dde4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27dde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27dde8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x27dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_27ddec:
    // 0x27ddec: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x27ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ddf0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x27ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27ddf4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x27DDF4u;
    {
        const bool branch_taken_0x27ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddf4) {
            ctx->pc = 0x27DEBCu;
            goto label_27debc;
        }
    }
    ctx->pc = 0x27DDFCu;
label_27ddfc:
    // 0x27ddfc: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x27ddfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27de00: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27DE00u;
    {
        const bool branch_taken_0x27de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27de00) {
            ctx->pc = 0x27DEBCu;
            goto label_27debc;
        }
    }
    ctx->pc = 0x27DE08u;
    // 0x27de08: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de10: 0x0  nop
    ctx->pc = 0x27de10u;
    // NOP
    // 0x27de14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27de14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27de18: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x27DE18u;
    {
        const bool branch_taken_0x27de18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27de18) {
            ctx->pc = 0x27DEBCu;
            goto label_27debc;
        }
    }
    ctx->pc = 0x27DE20u;
    // 0x27de20: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de24: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27de28: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27de2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27de30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de34: 0x0  nop
    ctx->pc = 0x27de34u;
    // NOP
    // 0x27de38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27de38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27de3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x27DE3Cu;
    {
        const bool branch_taken_0x27de3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27de3c) {
            ctx->pc = 0x27DE58u;
            goto label_27de58;
        }
    }
    ctx->pc = 0x27DE44u;
    // 0x27de44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de48: 0x0  nop
    ctx->pc = 0x27de48u;
    // NOP
    // 0x27de4c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x27de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x27de50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27DE50u;
    {
        const bool branch_taken_0x27de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de50) {
            ctx->pc = 0x27DE6Cu;
            goto label_27de6c;
        }
    }
    ctx->pc = 0x27DE58u;
label_27de58:
    // 0x27de58: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de5c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27de60: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27de64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27de68: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x27de68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_27de6c:
    // 0x27de6c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x27de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27de70: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x27de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27de74: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27de78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27de7c: 0x0  nop
    ctx->pc = 0x27de7cu;
    // NOP
    // 0x27de80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27de80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27de84: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x27DE84u;
    {
        const bool branch_taken_0x27de84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27de84) {
            ctx->pc = 0x27DEBCu;
            goto label_27debc;
        }
    }
    ctx->pc = 0x27DE8Cu;
    // 0x27de8c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x27de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x27de90: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x27de90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27de94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27de94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de98: 0xc09f8d4  jal         func_27E350
    ctx->pc = 0x27DE98u;
    SET_GPR_U32(ctx, 31, 0x27DEA0u);
    ctx->pc = 0x27E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E350u, 0x27DE98u, 0x27DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEA0u;
label_27dea0:
    // 0x27dea0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27dea4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27dea8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x27dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27deac: 0xc09f88c  jal         func_27E230
    ctx->pc = 0x27DEACu;
    SET_GPR_U32(ctx, 31, 0x27DEB4u);
    ctx->pc = 0x27E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E230u, 0x27DEACu, 0x27DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEB4u;
label_27deb4:
    // 0x27deb4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x27DEB4u;
    {
        const bool branch_taken_0x27deb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27deb4) {
            ctx->pc = 0x27E138u;
            goto label_27e138;
        }
    }
    ctx->pc = 0x27DEBCu;
label_27debc:
    // 0x27debc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dec0: 0xc094190  jal         func_250640
    ctx->pc = 0x27DEC0u;
    SET_GPR_U32(ctx, 31, 0x27DEC8u);
    ctx->pc = 0x250640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250640u, 0x27DEC0u, 0x27DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEC8u;
label_27dec8:
    // 0x27dec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27decc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27ded0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27DED0u;
    SET_GPR_U32(ctx, 31, 0x27DED8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27DED0u, 0x27DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DED8u;
label_27ded8:
    // 0x27ded8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27ded8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dedc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dee0: 0xc091008  jal         func_244020
    ctx->pc = 0x27DEE0u;
    SET_GPR_U32(ctx, 31, 0x27DEE8u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x27DEE0u, 0x27DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEE8u;
label_27dee8:
    // 0x27dee8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x27dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x27deec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27def0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27def0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27def4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27def8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x27def8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27defc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x27defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x27df00: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27df04: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x27df04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27df08: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27df0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27df0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27df10: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x27df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27df14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27df14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df18: 0x0  nop
    ctx->pc = 0x27df18u;
    // NOP
    // 0x27df1c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x27df1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x27df20: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x27df20u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x27df24: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x27df24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x27df28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27df2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27df30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df34: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x27df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27df38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27df3c: 0xc090fe0  jal         func_243F80
    ctx->pc = 0x27DF3Cu;
    SET_GPR_U32(ctx, 31, 0x27DF44u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x27DF3Cu, 0x27DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF44u;
label_27df44:
    // 0x27df44: 0xc7818284  lwc1        $f1, -0x7D7C($gp)
    ctx->pc = 0x27df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27df48: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27df4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27df4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27df50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27df50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27df54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27df54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27df58: 0x0  nop
    ctx->pc = 0x27df58u;
    // NOP
    // 0x27df5c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x27df5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27df60: 0x0  nop
    ctx->pc = 0x27df60u;
    // NOP
    // 0x27df64: 0x0  nop
    ctx->pc = 0x27df64u;
    // NOP
    // 0x27df68: 0x0  nop
    ctx->pc = 0x27df68u;
    // NOP
    // 0x27df6c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x27DF6Cu;
    SET_GPR_U32(ctx, 31, 0x27DF74u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x27DF6Cu, 0x27DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF74u;
label_27df74:
    // 0x27df74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27df78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27df78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27df7c: 0x0  nop
    ctx->pc = 0x27df7cu;
    // NOP
    // 0x27df80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27df80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27df84: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x27df84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x27df88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df8c: 0xc091018  jal         func_244060
    ctx->pc = 0x27DF8Cu;
    SET_GPR_U32(ctx, 31, 0x27DF94u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x27DF8Cu, 0x27DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF94u;
label_27df94:
    // 0x27df94: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x27df98: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x27df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27df9c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dfa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfa4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x27dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27dfa8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x27dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dfac: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dfb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfb4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x27dfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27dfb8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x27dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dfbc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfc4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x27dfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x27dfc8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dfcc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfd4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27dfd8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x27dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dfdc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dfe4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x27dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x27dfe8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dfec: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dff0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27dff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27dff4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x27dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x27dff8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x27dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27dffc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e004: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x27e004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27e008: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x27e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e00c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e010: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e014: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x27e014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x27e018: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x27e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e01c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e024: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x27e024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x27e028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e02c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x27E02Cu;
    SET_GPR_U32(ctx, 31, 0x27E034u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x27E02Cu, 0x27E034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E034u;
label_27e034:
    // 0x27e034: 0x8f83bc14  lw          $v1, -0x43EC($gp)
    ctx->pc = 0x27e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949908)));
    // 0x27e038: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e03c: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x27E03Cu;
    {
        const bool branch_taken_0x27e03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e03c) {
            ctx->pc = 0x27E12Cu;
            goto label_27e12c;
        }
    }
    ctx->pc = 0x27E044u;
    // 0x27e044: 0xc7818284  lwc1        $f1, -0x7D7C($gp)
    ctx->pc = 0x27e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e048: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e04c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e04cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e050: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27e054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e058: 0x0  nop
    ctx->pc = 0x27e058u;
    // NOP
    // 0x27e05c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x27e05cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27e060: 0x0  nop
    ctx->pc = 0x27e060u;
    // NOP
    // 0x27e064: 0x0  nop
    ctx->pc = 0x27e064u;
    // NOP
    // 0x27e068: 0x0  nop
    ctx->pc = 0x27e068u;
    // NOP
    // 0x27e06c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x27E06Cu;
    SET_GPR_U32(ctx, 31, 0x27E074u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x27E06Cu, 0x27E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E074u;
label_27e074:
    // 0x27e074: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x27e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
    // 0x27e078: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x27e078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27e07c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27e080: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27e080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x27e084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e088: 0x0  nop
    ctx->pc = 0x27e088u;
    // NOP
    // 0x27e08c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x27e08cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x27e090: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x27e090u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x27e094: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x27e094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x27e098: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27e098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27e09c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27e09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27e0a0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x27e0a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e0a8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x27e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e0ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e0b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27e0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e0b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27E0B4u;
    {
        const bool branch_taken_0x27e0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e0b4) {
            ctx->pc = 0x27E0D4u;
            goto label_27e0d4;
        }
    }
    ctx->pc = 0x27E0BCu;
    // 0x27e0bc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x27e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x27e0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e0c4: 0x0  nop
    ctx->pc = 0x27e0c4u;
    // NOP
    // 0x27e0c8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x27e0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27e0cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E0CCu;
    {
        const bool branch_taken_0x27e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e0cc) {
            ctx->pc = 0x27E0E8u;
            goto label_27e0e8;
        }
    }
    ctx->pc = 0x27E0D4u;
label_27e0d4:
    // 0x27e0d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x27e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x27e0d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e0dc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x27e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e0e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27e0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e0e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x27e0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_27e0e8:
    // 0x27e0e8: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x27e0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27e0ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x27e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x27e0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e0f4: 0x0  nop
    ctx->pc = 0x27e0f4u;
    // NOP
    // 0x27e0f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27e0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e0fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x27E0FCu;
    {
        const bool branch_taken_0x27e0fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e0fc) {
            ctx->pc = 0x27E114u;
            goto label_27e114;
        }
    }
    ctx->pc = 0x27E104u;
    // 0x27e104: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e108: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27e108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27e10c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E10Cu;
    {
        const bool branch_taken_0x27e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e10c) {
            ctx->pc = 0x27E128u;
            goto label_27e128;
        }
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27e114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27e118: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27e118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27e11c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x27e11cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27e120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27e124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27e124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27e128:
    // 0x27e128: 0xa3a300ef  sb          $v1, 0xEF($sp)
    ctx->pc = 0x27e128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 3));
label_27e12c:
    // 0x27e12c: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27e130: 0xc09f94c  jal         func_27E530
    ctx->pc = 0x27E130u;
    SET_GPR_U32(ctx, 31, 0x27E138u);
    ctx->pc = 0x27E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E530u, 0x27E130u, 0x27E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E138u;
label_27e138:
    // 0x27e138: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27e13c: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x27e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x27e140: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27e140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27e144: 0xc09f920  jal         func_27E480
    ctx->pc = 0x27E144u;
    SET_GPR_U32(ctx, 31, 0x27E14Cu);
    ctx->pc = 0x27E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E480u, 0x27E144u, 0x27E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E14Cu;
label_27e14c:
    // 0x27e14c: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x27e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x27e150: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x27e154: 0xc041998  jal         func_106660
    ctx->pc = 0x27E154u;
    SET_GPR_U32(ctx, 31, 0x27E15Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27E154u, 0x27E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E15Cu;
label_27e15c:
    // 0x27e15c: 0x1440fee6  bnez        $v0, . + 4 + (-0x11A << 2)
    ctx->pc = 0x27E15Cu;
    {
        const bool branch_taken_0x27e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e15c) {
            ctx->pc = 0x27DCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dcf8;
        }
    }
    ctx->pc = 0x27E164u;
    // 0x27e164: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x27e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x27e168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e16c: 0xc04fbc4  jal         func_13EF10
    ctx->pc = 0x27E16Cu;
    SET_GPR_U32(ctx, 31, 0x27E174u);
    ctx->pc = 0x13EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF10u, 0x27E16Cu, 0x27E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E174u;
label_27e174:
    // 0x27e174: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27e174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x27e178: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27e17c: 0xc0acb38  jal         func_2B2CE0
    ctx->pc = 0x27E17Cu;
    SET_GPR_U32(ctx, 31, 0x27E184u);
    ctx->pc = 0x2B2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2CE0u, 0x27E17Cu, 0x27E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E184u;
label_27e184:
    // 0x27e184: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27e184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e188: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E188u;
    {
        const bool branch_taken_0x27e188 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e188) {
            ctx->pc = 0x27E19Cu;
            goto label_27e19c;
        }
    }
    ctx->pc = 0x27E190u;
    // 0x27e190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e194: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27E194u;
    {
        const bool branch_taken_0x27e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e194) {
            ctx->pc = 0x27E1F0u;
            goto label_27e1f0;
        }
    }
    ctx->pc = 0x27E19Cu;
label_27e19c:
    // 0x27e19c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x27e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27e1a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27E1A4u;
    SET_GPR_U32(ctx, 31, 0x27E1ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27E1A4u, 0x27E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1ACu;
label_27e1ac:
    // 0x27e1ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27e1acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1b0: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x27E1B0u;
    {
        const bool branch_taken_0x27e1b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e1b0) {
            ctx->pc = 0x27E1ECu;
            goto label_27e1ec;
        }
    }
    ctx->pc = 0x27E1B8u;
    // 0x27e1b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1bc: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x27E1BCu;
    SET_GPR_U32(ctx, 31, 0x27E1C4u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x27E1BCu, 0x27E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1C4u;
label_27e1c4:
    // 0x27e1c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27e1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1c8: 0xc121d18  jal         func_487460
    ctx->pc = 0x27E1C8u;
    SET_GPR_U32(ctx, 31, 0x27E1D0u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x27E1C8u, 0x27E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1D0u;
label_27e1d0:
    // 0x27e1d0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x27e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x27e1d4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x27e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27e1d8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27e1dc: 0x24a589c0  addiu       $a1, $a1, -0x7640
    ctx->pc = 0x27e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937024));
    // 0x27e1e0: 0x27a600ef  addiu       $a2, $sp, 0xEF
    ctx->pc = 0x27e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 239));
    // 0x27e1e4: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x27E1E4u;
    SET_GPR_U32(ctx, 31, 0x27E1ECu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x27E1E4u, 0x27E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1ECu;
label_27e1ec:
    // 0x27e1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e1f0:
    // 0x27e1f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e1f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27e1f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e1f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27e1f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e1fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27e1fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e200: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27e200u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e204: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27e204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27e208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27e20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27e214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e218: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x27e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x27e21c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E224u;
    // 0x27e224: 0x0  nop
    ctx->pc = 0x27e224u;
    // NOP
    // 0x27e228: 0x0  nop
    ctx->pc = 0x27e228u;
    // NOP
    // 0x27e22c: 0x0  nop
    ctx->pc = 0x27e22cu;
    // NOP
    ctx->pc = 0x27e230u;
}
