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

// Function: sub_0040FB68
// Address: 0x40fb68 - 0x40fc10
void sub_0040FB68_0x40fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FB68_0x40fb68");
#endif

    ctx->pc = 0x40fb68u;

    // 0x40fb68: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x40fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x40fb6c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x40fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40fb70: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x40fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fb74: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x40fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x40fb78: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x40fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x40fb7c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x40fb7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x40fb80: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x40fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40fb84: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x40fb84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40fb88: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x40fb88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x40fb8c: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x40fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x40fb90: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x40fb90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40fb94: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x40fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fb98: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x40fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fb9c: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x40fb9cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x40fba0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x40fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40fba4: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x40fba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x40fba8: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x40fba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x40fbac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40fbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x40fbb0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x40fbb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x40fbb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x40fbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x40fbb8: 0xc4660008  lwc1        $f6, 0x8($v1)
    ctx->pc = 0x40fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x40fbbc: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x40fbbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x40fbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x40fbc4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x40fbc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40fbc8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x40fbc8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x40fbcc: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x40fbccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x40fbd0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x40fbd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x40fbd4: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x40fbd4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x40fbd8: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x40fbd8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x40fbdc: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x40fbdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x40fbe0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x40fbe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x40fbe4: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x40fbe4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x40fbe8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x40fbe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x40fbec: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x40fbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x40fbf0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x40fbf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40fbf4: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x40fbf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x40fbf8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x40fbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x40fbfc: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x40fbfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x40fc00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x40fc00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x40fc04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x40fc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x40fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x40FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC08u;
        // 0x40fc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FC10u;
}
