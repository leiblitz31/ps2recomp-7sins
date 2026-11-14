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

// Function: sub_002162B0
// Address: 0x2162b0 - 0x216310
void sub_002162B0_0x2162b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002162B0_0x2162b0");
#endif

    ctx->pc = 0x2162b0u;

    // 0x2162b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2162b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2162b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2162b8: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x2162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x2162bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2162bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2162c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2162c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2162c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2162c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2162c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162cc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2162ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2162d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2162d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2162d4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2162d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2162d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2162dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2162dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2162e0: 0x0  nop
    ctx->pc = 0x2162e0u;
    // NOP
    // 0x2162e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2162e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2162e8: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2162e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2162ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2162ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2162f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2162f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2162f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2162f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2162fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2162FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2162FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216304u;
    // 0x216304: 0x0  nop
    ctx->pc = 0x216304u;
    // NOP
    // 0x216308: 0x0  nop
    ctx->pc = 0x216308u;
    // NOP
    // 0x21630c: 0x0  nop
    ctx->pc = 0x21630cu;
    // NOP
    ctx->pc = 0x216310u;
}
