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

// Function: sub_003AEE60
// Address: 0x3aee60 - 0x3af108
void sub_003AEE60_0x3aee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEE60_0x3aee60");
#endif

    switch (ctx->pc) {
        case 0x3aee98u: goto label_3aee98;
        case 0x3aeeb4u: goto label_3aeeb4;
        default: break;
    }

    ctx->pc = 0x3aee60u;

    // 0x3aee60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3aee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3aee64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3aee64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3aee68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3aee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3aee6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aee6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3aee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3aee74: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3aee74u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3aee78: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3aee78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3aee7c: 0xe7ae0010  swc1        $f14, 0x10($sp)
    ctx->pc = 0x3aee7cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3aee80: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x3aee80u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3aee84: 0xe7b00020  swc1        $f16, 0x20($sp)
    ctx->pc = 0x3aee84u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3aee88: 0xe7b10024  swc1        $f17, 0x24($sp)
    ctx->pc = 0x3aee88u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3aee8c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3aee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3aee90: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AEE90u;
    SET_GPR_U32(ctx, 31, 0x3AEE98u);
    ctx->pc = 0x3AEE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEE90u;
    // 0x3aee94: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AEE90u, 0x3AEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEE98u;
label_3aee98:
    // 0x3aee98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aee98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aee9c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3aee9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3aeea0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3aeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3aeea4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3aeea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aeea8: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3aeea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    // 0x3aeeac: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3AEEACu;
    SET_GPR_U32(ctx, 31, 0x3AEEB4u);
    ctx->pc = 0x3AEEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEEACu;
    // 0x3aeeb0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3AEEACu, 0x3AEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEEB4u;
label_3aeeb4:
    // 0x3aeeb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3aeeb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeeb8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3aeeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aeebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aeec0: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3aeec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aeec4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3aeec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3aeec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3aeec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3aeecc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3aeeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aeed0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3aeed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3aeed4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3aeed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aeed8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3aeed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aeedc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3aeedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3aeee0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3aeee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3aeee4: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3aeee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aeee8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3aeee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3aeeec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3aeeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3aeef0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3aeef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3aeef4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3aeef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3aeef8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3aeef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3aeefc: 0x46010104  c1          0x10104
    ctx->pc = 0x3aeefcu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3aef00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3aef00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aef04: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3aef04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3aef08: 0x0  nop
    ctx->pc = 0x3aef08u;
    // NOP
    // 0x3aef0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AEF0Cu;
    {
        const bool branch_taken_0x3aef0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF0Cu;
        // 0x3aef10: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef0c) {
            ctx->pc = 0x3AEF20u;
            goto label_3aef20;
        }
    }
    ctx->pc = 0x3AEF14u;
    // 0x3aef14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3aef18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aef18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3aef1c: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3aef1cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_3aef20:
    // 0x3aef20: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3aef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aef24: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3aef24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aef28: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3aef28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3aef2c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3aef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aef30: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3aef30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aef34: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3aef34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3aef38: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3aef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aef3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3aef3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3aef40: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3aef40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3aef44: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AEF44u;
    {
        const bool branch_taken_0x3aef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF44u;
        // 0x3aef48: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef44) {
            ctx->pc = 0x3AEFA8u;
            goto label_3aefa8;
        }
    }
    ctx->pc = 0x3AEF4Cu;
    // 0x3aef4c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3aef50: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3aef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aef54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3aef54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3aef58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3aef58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3aef5c: 0xc4437ff8  lwc1        $f3, 0x7FF8($v0)
    ctx->pc = 0x3aef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aef60: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3aef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aef64: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3aef64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3aef68: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x3aef68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3aef6c: 0xc4427ff4  lwc1        $f2, 0x7FF4($v0)
    ctx->pc = 0x3aef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aef70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aef70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3aef74: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3aef74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3aef78: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x3aef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aef7c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3aef7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3aef80: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3aef80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3aef84: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3aef84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3aef88: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x3aef88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x3aef8c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3aef8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3aef90: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3aef90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3aef94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3aef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aef98: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3aef98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3aef9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AEF9Cu;
    {
        const bool branch_taken_0x3aef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF9Cu;
        // 0x3aefa0: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef9c) {
            ctx->pc = 0x3AEFB8u;
            goto label_3aefb8;
        }
    }
    ctx->pc = 0x3AEFA4u;
    // 0x3aefa4: 0x0  nop
    ctx->pc = 0x3aefa4u;
    // NOP
label_3aefa8:
    // 0x3aefa8: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x3aefa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3aefac: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x3aefacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3aefb0: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x3aefb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3aefb4: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x3aefb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3aefb8:
    // 0x3aefb8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3aefb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aefbc: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3aefbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3aefc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aefc4: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3aefc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3aefc8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3aefc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3aefcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3aefccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3aefd0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3aefd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aefd4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3aefd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3aefd8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3aefd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3aefdc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3aefdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3aefe0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3aefe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3aefe4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3aefe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3aefe8: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3aefe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3aefec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3aefecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3aeff0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3aeff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3aeff4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3aeff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3aeff8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3aeff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3aeffc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3aeffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af000: 0x46010104  c1          0x10104
    ctx->pc = 0x3af000u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3af004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3af004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af008: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3af008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af00c: 0x0  nop
    ctx->pc = 0x3af00cu;
    // NOP
    // 0x3af010: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AF010u;
    {
        const bool branch_taken_0x3af010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF010u;
        // 0x3af014: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af010) {
            ctx->pc = 0x3AF028u;
            goto label_3af028;
        }
    }
    ctx->pc = 0x3AF018u;
    // 0x3af018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af020: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3af020u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3af024: 0x0  nop
    ctx->pc = 0x3af024u;
    // NOP
label_3af028:
    // 0x3af028: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3af028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af02c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3af02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3af030: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3af030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3af034: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3af034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af038: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3af038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3af03c: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x3af03cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3af040: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x3af040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3af044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af048: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3af048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3af04c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3af04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3af050: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3af050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3af054: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3af054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af058: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3af058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3af05c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3af05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3af060: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3af060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3af064: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3af064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af068: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3af068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3af06c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3af06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af070: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x3af070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3af074: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3af074u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3af078: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3af078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3af07c: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3af07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af080: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3af080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3af084: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3af084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3af088: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3af088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3af08c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3af08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3af090: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3af090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3af094: 0x460100c4  c1          0x100C4
    ctx->pc = 0x3af094u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x3af098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3af098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af09c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3af09cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af0a0: 0x0  nop
    ctx->pc = 0x3af0a0u;
    // NOP
    // 0x3af0a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3AF0A4u;
    {
        const bool branch_taken_0x3af0a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0A4u;
        // 0x3af0a8: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0a4) {
            ctx->pc = 0x3AF0C0u;
            goto label_3af0c0;
        }
    }
    ctx->pc = 0x3AF0ACu;
    // 0x3af0ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3af0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3af0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af0b4: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x3af0b4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3af0b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF0B8u;
    {
        const bool branch_taken_0x3af0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0B8u;
        // 0x3af0bc: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0b8) {
            ctx->pc = 0x3AF0C8u;
            goto label_3af0c8;
        }
    }
    ctx->pc = 0x3AF0C0u;
label_3af0c0:
    // 0x3af0c0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3af0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af0c4: 0x0  nop
    ctx->pc = 0x3af0c4u;
    // NOP
label_3af0c8:
    // 0x3af0c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3af0c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3af0cc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3af0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3af0d0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3af0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3af0d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3af0d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3af0d8: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x3af0d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3af0dc: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x3af0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af0e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3af0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3af0e4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3af0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3af0e8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3af0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3af0ec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3af0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3af0f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3af0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af0f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3af0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af0f8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3af0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af0fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3af0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af100: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF100u;
        // 0x3af104: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF108u;
}
