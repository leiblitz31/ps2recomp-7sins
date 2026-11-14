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

// Function: sub_003BAA78
// Address: 0x3baa78 - 0x3babc8
void sub_003BAA78_0x3baa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAA78_0x3baa78");
#endif

    switch (ctx->pc) {
        case 0x3baab8u: goto label_3baab8;
        case 0x3bab00u: goto label_3bab00;
        default: break;
    }

    ctx->pc = 0x3baa78u;

    // 0x3baa78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3baa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3baa7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3baa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3baa80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3baa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3baa84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3baa84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baa88: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3baa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3baa8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3baa8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baa90: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3baa90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3baa94: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3baa94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3baa98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3baa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3baa9c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3baa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3baaa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3baaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3baaa4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3baaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3baaa8: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3baaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3baaac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3baaacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3baab0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3baab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3baab4: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3baab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3baab8:
    // 0x3baab8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3baab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3baabc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3baabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3baac0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3baac4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3baac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baac8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x3baac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3baacc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3baaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3baad0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3baad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3baad4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3baad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3baad8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3baad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3baadc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3baadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3baae0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3baae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3baae4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3baae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3baae8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3baae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3baaec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3baaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3baaf0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3baaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3baaf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3baaf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3baaf8: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x3BAAF8u;
    SET_GPR_U32(ctx, 31, 0x3BAB00u);
    ctx->pc = 0x3BAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAAF8u;
    // 0x3baafc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x3BAAF8u, 0x3BAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAB00u;
label_3bab00:
    // 0x3bab00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bab04: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3bab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3bab08: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3bab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3bab0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3bab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3bab10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3bab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3bab14: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3bab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3bab18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bab1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3bab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3bab20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3bab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bab24: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3bab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bab28: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3bab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bab2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3bab2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3bab30: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3bab30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bab34: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3bab34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3bab38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3bab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bab3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3bab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bab40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bab40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bab44: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x3bab44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3bab48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3bab48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3bab4c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x3bab4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bab50: 0x0  nop
    ctx->pc = 0x3bab50u;
    // NOP
    // 0x3bab54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAB54u;
    {
        const bool branch_taken_0x3bab54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB54u;
        // 0x3bab58: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab54) {
            ctx->pc = 0x3BAB64u;
            goto label_3bab64;
        }
    }
    ctx->pc = 0x3BAB5Cu;
    // 0x3bab5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAB5Cu;
    {
        const bool branch_taken_0x3bab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB5Cu;
        // 0x3bab60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab5c) {
            ctx->pc = 0x3BAB78u;
            goto label_3bab78;
        }
    }
    ctx->pc = 0x3BAB64u;
label_3bab64:
    // 0x3bab64: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x3bab64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bab68: 0x0  nop
    ctx->pc = 0x3bab68u;
    // NOP
    // 0x3bab6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BAB6Cu;
    {
        const bool branch_taken_0x3bab6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB6Cu;
        // 0x3bab70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab6c) {
            ctx->pc = 0x3BAB78u;
            goto label_3bab78;
        }
    }
    ctx->pc = 0x3BAB74u;
    // 0x3bab74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bab78:
    // 0x3bab78: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAB78u;
    {
        const bool branch_taken_0x3bab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3bab78) {
            ctx->pc = 0x3BAB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BAB78u;
            // 0x3bab7c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BAB8Cu;
            goto label_3bab8c;
        }
    }
    ctx->pc = 0x3BAB80u;
    // 0x3bab80: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3bab80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x3bab84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3BAB84u;
    {
        const bool branch_taken_0x3bab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB84u;
        // 0x3bab88: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab84) {
            ctx->pc = 0x3BAB9Cu;
            goto label_3bab9c;
        }
    }
    ctx->pc = 0x3BAB8Cu;
label_3bab8c:
    // 0x3bab8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3bab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3bab90: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3bab90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bab94: 0x1602ffc8  bne         $s0, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3BAB94u;
    {
        const bool branch_taken_0x3bab94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB94u;
        // 0x3bab98: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab94) {
            ctx->pc = 0x3BAAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3baab8;
        }
    }
    ctx->pc = 0x3BAB9Cu;
label_3bab9c:
    // 0x3bab9c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3bab9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baba0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3baba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3baba4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3baba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3baba8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3baba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3babac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3babacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3babb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3babb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3babb4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3babb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3babb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3babb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3babbc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3babbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3babc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BABC0u;
        // 0x3babc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BABC8u;
}
