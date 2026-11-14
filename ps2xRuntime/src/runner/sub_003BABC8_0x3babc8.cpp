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

// Function: sub_003BABC8
// Address: 0x3babc8 - 0x3bad20
void sub_003BABC8_0x3babc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BABC8_0x3babc8");
#endif

    switch (ctx->pc) {
        case 0x3bac18u: goto label_3bac18;
        case 0x3bac2cu: goto label_3bac2c;
        case 0x3bac7cu: goto label_3bac7c;
        default: break;
    }

    ctx->pc = 0x3babc8u;

    // 0x3babc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3babc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3babcc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3babccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3babd0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3babd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3babd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3babd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3babd8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3babd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3babdc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3babdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3babe0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3babe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3babe4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3babe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3babe8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3babe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3babec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3babecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3babf0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3babf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3babf4: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x3babf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3babf8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3babf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3babfc: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x3babfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bac00: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x3bac00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3bac04: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3bac04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3bac08: 0x12110038  beq         $s0, $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3BAC08u;
    {
        const bool branch_taken_0x3bac08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC08u;
        // 0x3bac0c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac08) {
            ctx->pc = 0x3BACECu;
            goto label_3bacec;
        }
    }
    ctx->pc = 0x3BAC10u;
    // 0x3bac10: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x3bac10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3bac14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bac18:
    // 0x3bac18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bac1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3bac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bac20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3bac20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bac24: 0xc0ee9e8  jal         func_3BA7A0
    ctx->pc = 0x3BAC24u;
    SET_GPR_U32(ctx, 31, 0x3BAC2Cu);
    ctx->pc = 0x3BAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAC24u;
    // 0x3bac28: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA7A0u, 0x3BAC24u, 0x3BAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAC2Cu;
label_3bac2c:
    // 0x3bac2c: 0x5456002d  bnel        $v0, $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x3BAC2Cu;
    {
        const bool branch_taken_0x3bac2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3bac2c) {
            ctx->pc = 0x3BAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BAC2Cu;
            // 0x3bac30: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BACE4u;
            goto label_3bace4;
        }
    }
    ctx->pc = 0x3BAC34u;
    // 0x3bac34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3bac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3bac38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3bac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bac3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3bac40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bac44: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x3bac44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3bac48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3bac48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3bac4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3bac50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3bac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3bac54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3bac54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3bac58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3bac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bac5c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3bac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bac60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bac60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3bac64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3bac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3bac68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3bac68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bac6c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3bac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bac70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bac70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bac74: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x3BAC74u;
    SET_GPR_U32(ctx, 31, 0x3BAC7Cu);
    ctx->pc = 0x3BAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAC74u;
    // 0x3bac78: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x3BAC74u, 0x3BAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAC7Cu;
label_3bac7c:
    // 0x3bac7c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3bac80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3bac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bac84: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3bac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3bac88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bac88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3bac8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3bac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3bac90: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3bac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bac94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bac98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bac9c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3bac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3baca0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3baca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3baca4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3baca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3baca8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3baca8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bacac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3bacacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bacb0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3bacb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3bacb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3bacb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bacb8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3bacb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bacbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bacbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bacc0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x3bacc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3bacc4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3bacc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3bacc8: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x3bacc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3baccc: 0x0  nop
    ctx->pc = 0x3bacccu;
    // NOP
    // 0x3bacd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BACD0u;
    {
        const bool branch_taken_0x3bacd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BACD0u;
        // 0x3bacd4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bacd0) {
            ctx->pc = 0x3BACE0u;
            goto label_3bace0;
        }
    }
    ctx->pc = 0x3BACD8u;
    // 0x3bacd8: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x3bacd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x3bacdc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3bacdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bace0:
    // 0x3bace0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3bace0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bace4:
    // 0x3bace4: 0x1611ffcc  bne         $s0, $s1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3BACE4u;
    {
        const bool branch_taken_0x3bace4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3BACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BACE4u;
        // 0x3bace8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bace4) {
            ctx->pc = 0x3BAC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bac18;
        }
    }
    ctx->pc = 0x3BACECu;
label_3bacec:
    // 0x3bacec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3bacecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bacf0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bacf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3bacf4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bacf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3bacf8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bacf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3bacfc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bacfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3bad00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bad00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bad04: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3bad04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bad08: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3bad08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bad0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bad0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bad10: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3bad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bad14: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD14u;
        // 0x3bad18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAD1Cu;
    // 0x3bad1c: 0x0  nop
    ctx->pc = 0x3bad1cu;
    // NOP
    ctx->pc = 0x3bad20u;
}
