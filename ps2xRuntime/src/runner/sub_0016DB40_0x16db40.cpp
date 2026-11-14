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

// Function: sub_0016DB40
// Address: 0x16db40 - 0x16dde0
void sub_0016DB40_0x16db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB40_0x16db40");
#endif

    switch (ctx->pc) {
        case 0x16dbd4u: goto label_16dbd4;
        case 0x16dbf4u: goto label_16dbf4;
        case 0x16dc38u: goto label_16dc38;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc90u: goto label_16dc90;
        case 0x16dd80u: goto label_16dd80;
        case 0x16ddacu: goto label_16ddac;
        default: break;
    }

    ctx->pc = 0x16db40u;

    // 0x16db40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16db44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16db44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16db48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16db4c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x16db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x16db50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16db50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16db54: 0x0  nop
    ctx->pc = 0x16db54u;
    // NOP
    // 0x16db58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x16db58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x16db5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x16db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x16db60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16db60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16db64: 0x0  nop
    ctx->pc = 0x16db64u;
    // NOP
    // 0x16db68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x16db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x16db6c: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x16db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x16db70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x16db70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16db74: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DB74u;
    {
        const bool branch_taken_0x16db74 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16db74) {
            ctx->pc = 0x16DB90u;
            goto label_16db90;
        }
    }
    ctx->pc = 0x16DB7Cu;
    // 0x16db7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16db7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16db80: 0x0  nop
    ctx->pc = 0x16db80u;
    // NOP
    // 0x16db84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16db84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16db88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DB88u;
    {
        const bool branch_taken_0x16db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db88) {
            ctx->pc = 0x16DBACu;
            goto label_16dbac;
        }
    }
    ctx->pc = 0x16DB90u;
label_16db90:
    // 0x16db90: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16db94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16db94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16db98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16db98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16db9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16db9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dba0: 0x0  nop
    ctx->pc = 0x16dba0u;
    // NOP
    // 0x16dba4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16dba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dba8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16dba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16dbac:
    // 0x16dbac: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x16dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x16dbb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dbb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dbb4: 0x0  nop
    ctx->pc = 0x16dbb4u;
    // NOP
    // 0x16dbb8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16dbb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16dbbc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dbc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16dbc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16dbc4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x16dbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x16dbc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16dbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbcc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x16DBCCu;
    {
        const bool branch_taken_0x16dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbcc) {
            ctx->pc = 0x16DD00u;
            goto label_16dd00;
        }
    }
    ctx->pc = 0x16DBD4u;
label_16dbd4:
    // 0x16dbd4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dbd8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dbdc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dbe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dbe4: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dbe8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dbec: 0xc08c7c8  jal         func_231F20
    ctx->pc = 0x16DBECu;
    SET_GPR_U32(ctx, 31, 0x16DBF4u);
    ctx->pc = 0x231F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F20u, 0x16DBECu, 0x16DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DBF4u;
label_16dbf4:
    // 0x16dbf4: 0x1a000014  blez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16DBF4u;
    {
        const bool branch_taken_0x16dbf4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x16dbf4) {
            ctx->pc = 0x16DC48u;
            goto label_16dc48;
        }
    }
    ctx->pc = 0x16DBFCu;
    // 0x16dbfc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dc04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dc0c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dc10: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x16dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dc14: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x16dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dc18: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dc1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16dc1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16dc20: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x16dc20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16dc24: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16dc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16dc28: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dc2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16dc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc30: 0xc08c208  jal         func_230820
    ctx->pc = 0x16DC30u;
    SET_GPR_U32(ctx, 31, 0x16DC38u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x16DC30u, 0x16DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC38u;
label_16dc38:
    // 0x16dc38: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x16dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dc3c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dc40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16dc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16dc44: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x16dc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_16dc48:
    // 0x16dc48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc4c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dc50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dc58: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dc5c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dc60: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16dc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16dc64: 0xc08c704  jal         func_231C10
    ctx->pc = 0x16DC64u;
    SET_GPR_U32(ctx, 31, 0x16DC6Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x16DC64u, 0x16DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC6Cu;
label_16dc6c:
    // 0x16dc6c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dc74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dc78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dc7c: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dc80: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dc84: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x16dc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x16dc88: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x16DC88u;
    SET_GPR_U32(ctx, 31, 0x16DC90u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x16DC88u, 0x16DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DC90u;
label_16dc90:
    // 0x16dc90: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x16dc94: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16dc98: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DC98u;
    {
        const bool branch_taken_0x16dc98 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16dc98) {
            ctx->pc = 0x16DCB4u;
            goto label_16dcb4;
        }
    }
    ctx->pc = 0x16DCA0u;
    // 0x16dca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dca4: 0x0  nop
    ctx->pc = 0x16dca4u;
    // NOP
    // 0x16dca8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dcac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DCACu;
    {
        const bool branch_taken_0x16dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcac) {
            ctx->pc = 0x16DCD0u;
            goto label_16dcd0;
        }
    }
    ctx->pc = 0x16DCB4u;
label_16dcb4:
    // 0x16dcb4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x16dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16dcb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16dcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16dcbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16dcbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16dcc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16dcc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dcc4: 0x0  nop
    ctx->pc = 0x16dcc4u;
    // NOP
    // 0x16dcc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16dcc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dccc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16dcccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16dcd0:
    // 0x16dcd0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x16dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x16dcd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dcd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dcd8: 0x0  nop
    ctx->pc = 0x16dcd8u;
    // NOP
    // 0x16dcdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16dcdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16dce0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16dce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16dce8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x16dce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16dcec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x16dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dcf0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x16dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16dcf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16dcf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x16dcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x16dcfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16dd00:
    // 0x16dd00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dd04: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x16dd08: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16dd08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16dd0c: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x16DD0Cu;
    {
        const bool branch_taken_0x16dd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dd0c) {
            ctx->pc = 0x16DBD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dbd4;
        }
    }
    ctx->pc = 0x16DD14u;
    // 0x16dd14: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x16dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x16dd18: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16dd1c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16DD1Cu;
    {
        const bool branch_taken_0x16dd1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16dd1c) {
            ctx->pc = 0x16DD38u;
            goto label_16dd38;
        }
    }
    ctx->pc = 0x16DD24u;
    // 0x16dd24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dd28: 0x0  nop
    ctx->pc = 0x16dd28u;
    // NOP
    // 0x16dd2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16dd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dd30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DD30u;
    {
        const bool branch_taken_0x16dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd30) {
            ctx->pc = 0x16DD54u;
            goto label_16dd54;
        }
    }
    ctx->pc = 0x16DD38u;
label_16dd38:
    // 0x16dd38: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x16dd3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16dd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16dd40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16dd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16dd44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16dd44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dd48: 0x0  nop
    ctx->pc = 0x16dd48u;
    // NOP
    // 0x16dd4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16dd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dd50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16dd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16dd54:
    // 0x16dd54: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x16dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16dd58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16dd5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16dd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dd64: 0x0  nop
    ctx->pc = 0x16dd64u;
    // NOP
    // 0x16dd68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16dd68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16dd6c: 0x0  nop
    ctx->pc = 0x16dd6cu;
    // NOP
    // 0x16dd70: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x16dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x16dd74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16dd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16DD78u;
    {
        const bool branch_taken_0x16dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd78) {
            ctx->pc = 0x16DDB0u;
            goto label_16ddb0;
        }
    }
    ctx->pc = 0x16DD80u;
label_16dd80:
    // 0x16dd80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dd84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dd88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dd90: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x16dd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16dd94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16dd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16dd98: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16dd9c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x16dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16dda0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dda4: 0xc08c208  jal         func_230820
    ctx->pc = 0x16DDA4u;
    SET_GPR_U32(ctx, 31, 0x16DDACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x16DDA4u, 0x16DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDACu;
label_16ddac:
    // 0x16ddac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16ddb0:
    // 0x16ddb0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ddb4: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x16ddb8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16ddb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ddbc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16DDBCu;
    {
        const bool branch_taken_0x16ddbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ddbc) {
            ctx->pc = 0x16DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dd80;
        }
    }
    ctx->pc = 0x16DDC4u;
    // 0x16ddc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ddc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ddc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ddcc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16ddccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16ddd0: 0x3e00008  jr          $ra
    ctx->pc = 0x16DDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DDD8u;
    // 0x16ddd8: 0x0  nop
    ctx->pc = 0x16ddd8u;
    // NOP
    // 0x16dddc: 0x0  nop
    ctx->pc = 0x16dddcu;
    // NOP
    ctx->pc = 0x16dde0u;
}
