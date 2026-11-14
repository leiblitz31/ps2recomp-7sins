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

// Function: sub_003AED00
// Address: 0x3aed00 - 0x3aee60
void sub_003AED00_0x3aed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AED00_0x3aed00");
#endif

    switch (ctx->pc) {
        case 0x3aed28u: goto label_3aed28;
        case 0x3aed40u: goto label_3aed40;
        default: break;
    }

    ctx->pc = 0x3aed00u;

    // 0x3aed00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3aed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3aed04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aed08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3aed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3aed0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aed0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aed14: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3aed14u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aed18: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3aed18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aed1c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3aed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3aed20: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AED20u;
    SET_GPR_U32(ctx, 31, 0x3AED28u);
    ctx->pc = 0x3AED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AED20u;
    // 0x3aed24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AED20u, 0x3AED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AED28u;
label_3aed28:
    // 0x3aed28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aed28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed2c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3aed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3aed30: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3aed34: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3aed34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x3aed38: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AED38u;
    SET_GPR_U32(ctx, 31, 0x3AED40u);
    ctx->pc = 0x3AED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AED38u;
    // 0x3aed3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AED38u, 0x3AED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AED40u;
label_3aed40:
    // 0x3aed40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3aed40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aed44: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3aed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aed48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aed4c: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3aed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aed50: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3aed50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3aed54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3aed54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3aed58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3aed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aed5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3aed5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3aed60: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3aed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aed64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3aed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aed68: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3aed68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3aed6c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3aed6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aed70: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3aed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aed74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3aed74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3aed78: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3aed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3aed7c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3aed7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3aed80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3aed80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3aed84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3aed84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3aed88: 0x46010104  c1          0x10104
    ctx->pc = 0x3aed88u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3aed8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aed8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aed90: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3aed90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aed94: 0x0  nop
    ctx->pc = 0x3aed94u;
    // NOP
    // 0x3aed98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AED98u;
    {
        const bool branch_taken_0x3aed98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AED98u;
        // 0x3aed9c: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aed98) {
            ctx->pc = 0x3AEDB0u;
            goto label_3aedb0;
        }
    }
    ctx->pc = 0x3AEDA0u;
    // 0x3aeda0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aeda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3aeda4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aeda4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aeda8: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3aeda8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3aedac: 0x0  nop
    ctx->pc = 0x3aedacu;
    // NOP
label_3aedb0:
    // 0x3aedb0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3aedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aedb4: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3aedb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aedb8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3aedb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3aedbc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3aedbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aedc0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3aedc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aedc4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3aedc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3aedc8: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3aedc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aedcc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3aedccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3aedd0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3aedd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3aedd4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AEDD4u;
    {
        const bool branch_taken_0x3aedd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEDD4u;
        // 0x3aedd8: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedd4) {
            ctx->pc = 0x3AEE38u;
            goto label_3aee38;
        }
    }
    ctx->pc = 0x3AEDDCu;
    // 0x3aeddc: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3aeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3aede0: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3aede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aede4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3aede4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3aede8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3aede8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aedec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3aedecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aedf0: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x3aedf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aedf4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3aedf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3aedf8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3aedf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3aedfc: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3aedfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aee00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aee00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3aee04: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3aee04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3aee08: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x3aee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aee0c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3aee0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3aee10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3aee10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3aee14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3aee14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3aee18: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3aee18u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3aee1c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3aee1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3aee20: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3aee20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3aee24: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3aee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aee28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3aee28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aee2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AEE2Cu;
    {
        const bool branch_taken_0x3aee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE2Cu;
        // 0x3aee30: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee2c) {
            ctx->pc = 0x3AEE48u;
            goto label_3aee48;
        }
    }
    ctx->pc = 0x3AEE34u;
    // 0x3aee34: 0x0  nop
    ctx->pc = 0x3aee34u;
    // NOP
label_3aee38:
    // 0x3aee38: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x3aee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3aee3c: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x3aee3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3aee40: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x3aee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aee44: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x3aee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3aee48:
    // 0x3aee48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3aee48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3aee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aee50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3aee50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aee54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aee54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aee58: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEE58u;
        // 0x3aee5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEE60u;
}
