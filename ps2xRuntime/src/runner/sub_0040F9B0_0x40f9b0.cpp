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

// Function: sub_0040F9B0
// Address: 0x40f9b0 - 0x40faa8
void sub_0040F9B0_0x40f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F9B0_0x40f9b0");
#endif

    switch (ctx->pc) {
        case 0x40fa58u: goto label_40fa58;
        case 0x40fa64u: goto label_40fa64;
        case 0x40fa84u: goto label_40fa84;
        default: break;
    }

    ctx->pc = 0x40f9b0u;

    // 0x40f9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x40f9b4: 0xc7808040  lwc1        $f0, -0x7FC0($gp)
    ctx->pc = 0x40f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f9b8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x40f9b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x40f9bc: 0x46006542  mul.s       $f21, $f12, $f0
    ctx->pc = 0x40f9bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x40f9c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40f9c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40f9c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40f9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40f9d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40f9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9d4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x40f9d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x40f9d8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40f9dc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x40f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40f9e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40f9e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40f9e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40f9e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40f9ec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40f9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40f9f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40f9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x40f9f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x40f9f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x40f9f8: 0x46010044  c1          0x10044
    ctx->pc = 0x40f9f8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x40f9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40f9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40fa00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40fa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fa04: 0x0  nop
    ctx->pc = 0x40fa04u;
    // NOP
    // 0x40fa08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x40FA08u;
    {
        const bool branch_taken_0x40fa08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA08u;
        // 0x40fa0c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa08) {
            ctx->pc = 0x40FA28u;
            goto label_40fa28;
        }
    }
    ctx->pc = 0x40FA10u;
    // 0x40fa10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40fa14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40fa14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40fa18: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x40fa18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x40fa1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40FA1Cu;
    {
        const bool branch_taken_0x40fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA1Cu;
        // 0x40fa20: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa1c) {
            ctx->pc = 0x40FA30u;
            goto label_40fa30;
        }
    }
    ctx->pc = 0x40FA24u;
    // 0x40fa24: 0x0  nop
    ctx->pc = 0x40fa24u;
    // NOP
label_40fa28:
    // 0x40fa28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x40fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fa2c: 0x0  nop
    ctx->pc = 0x40fa2cu;
    // NOP
label_40fa30:
    // 0x40fa30: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x40fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fa34: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x40fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fa38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x40fa38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x40fa3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x40fa3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x40fa40: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x40fa40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x40fa44: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x40fa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40fa48: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x40fa48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40fa4c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40fa4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40fa50: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x40FA50u;
    SET_GPR_U32(ctx, 31, 0x40FA58u);
    ctx->pc = 0x40FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA50u;
    // 0x40fa54: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x40FA50u, 0x40FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA58u;
label_40fa58:
    // 0x40fa58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40fa58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x40fa5c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x40FA5Cu;
    SET_GPR_U32(ctx, 31, 0x40FA64u);
    ctx->pc = 0x40FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA5Cu;
    // 0x40fa60: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x40FA5Cu, 0x40FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA64u;
label_40fa64:
    // 0x40fa64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40fa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40fa68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40fa68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x40fa6c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40fa6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x40fa70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40fa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fa78: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x40fa78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x40fa7c: 0xc103b86  jal         func_40EE18
    ctx->pc = 0x40FA7Cu;
    SET_GPR_U32(ctx, 31, 0x40FA84u);
    ctx->pc = 0x40FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA7Cu;
    // 0x40fa80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40EE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40EE18u, 0x40FA7Cu, 0x40FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA84u;
label_40fa84:
    // 0x40fa84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40fa84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fa88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40fa88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40fa8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40fa8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40fa90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40fa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40fa94: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x40fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x40fa98: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x40fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40fa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x40FA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA9Cu;
        // 0x40faa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FAA4u;
    // 0x40faa4: 0x0  nop
    ctx->pc = 0x40faa4u;
    // NOP
    ctx->pc = 0x40faa8u;
}
