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

// Function: sub_0040FC10
// Address: 0x40fc10 - 0x40fd78
void sub_0040FC10_0x40fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FC10_0x40fc10");
#endif

    ctx->pc = 0x40fc10u;

    // 0x40fc10: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x40fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x40fc14: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x40fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x40fc18: 0xc4890010  lwc1        $f9, 0x10($a0)
    ctx->pc = 0x40fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x40fc1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40fc1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40fc20: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x40fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fc24: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x40fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x40fc28: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x40fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40fc2c: 0x46004882  mul.s       $f2, $f9, $f0
    ctx->pc = 0x40fc2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x40fc30: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x40fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40fc34: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x40fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fc38: 0x460451c2  mul.s       $f7, $f10, $f4
    ctx->pc = 0x40fc38u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x40fc3c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x40fc3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x40fc40: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x40fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40fc44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40fc44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x40fc48: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x40fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40fc4c: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x40fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40fc50: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x40fc50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x40fc54: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x40fc54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x40fc58: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40fc58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40fc5c: 0x46061902  mul.s       $f4, $f3, $f6
    ctx->pc = 0x40fc5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x40fc60: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x40fc60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x40fc64: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x40fc64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x40fc68: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40fc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40fc6c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x40fc6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x40fc70: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x40fc70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x40fc74: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x40fc74u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x40fc78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x40fc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40fc7c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x40fc7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40fc80: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x40fc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40fc84: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x40fc84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40fc88: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x40fc88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x40fc8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x40fc8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x40fc90: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x40fc90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40fc94: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x40fc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40fc98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40fc98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x40FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC9Cu;
        // 0x40fca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FCA4u;
    // 0x40fca4: 0x0  nop
    ctx->pc = 0x40fca4u;
    // NOP
    // 0x40fca8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x40fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x40fcac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40fcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40fcb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x40fcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x40fcb4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x40fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fcb8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x40fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x40fcbc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x40fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fcc0: 0x46031141  sub.s       $f5, $f2, $f3
    ctx->pc = 0x40fcc0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x40fcc4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x40fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fcc8: 0x46030a41  sub.s       $f9, $f1, $f3
    ctx->pc = 0x40fcc8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x40fccc: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x40fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40fcd0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40fcd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40fcd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x40fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fcd8: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x40fcd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40fcdc: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x40fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40fce0: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x40fce0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x40fce4: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x40fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40fce8: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x40fce8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x40fcec: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x40fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fcf0: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x40fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x40fcf4: 0x46030a81  sub.s       $f10, $f1, $f3
    ctx->pc = 0x40fcf4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x40fcf8: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x40fcf8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x40fcfc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x40fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x40fd00: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x40fd00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40fd04: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x40fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fd08: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40fd08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40fd0c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x40fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40fd10: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x40fd10u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x40fd14: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x40fd14u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x40fd18: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x40fd18u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x40fd1c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x40fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40fd20: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x40fd20u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x40fd24: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x40fd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x40fd28: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x40fd28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x40fd2c: 0x46083140  add.s       $f5, $f6, $f8
    ctx->pc = 0x40fd2cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x40fd30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40fd30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40fd34: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x40fd34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40fd38: 0x46001280  add.s       $f10, $f2, $f0
    ctx->pc = 0x40fd38u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x40fd3c: 0x46054800  add.s       $f0, $f9, $f5
    ctx->pc = 0x40fd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x40fd40: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x40fd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x40fd44: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x40fd44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x40fd48: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x40fd48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x40fd4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40fd4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x40FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD50u;
        // 0x40fd54: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FD58u;
    // 0x40fd58: 0x8f85bdc0  lw          $a1, -0x4240($gp)
    ctx->pc = 0x40fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40fd5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40fd60: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x40fd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40fd68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x40fd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x40fd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x40FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD6Cu;
        // 0x40fd70: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FD74u;
    // 0x40fd74: 0x0  nop
    ctx->pc = 0x40fd74u;
    // NOP
    ctx->pc = 0x40fd78u;
}
