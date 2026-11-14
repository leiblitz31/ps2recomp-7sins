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

// Function: sub_00141410
// Address: 0x141410 - 0x1414c0
void sub_00141410_0x141410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141410_0x141410");
#endif

    switch (ctx->pc) {
        case 0x141450u: goto label_141450;
        default: break;
    }

    ctx->pc = 0x141410u;

    // 0x141410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141418: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x141418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x14141c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141420: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141420u;
    {
        const bool branch_taken_0x141420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141420) {
            ctx->pc = 0x141434u;
            goto label_141434;
        }
    }
    ctx->pc = 0x141428u;
    // 0x141428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14142c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14142Cu;
    {
        const bool branch_taken_0x14142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14142c) {
            ctx->pc = 0x1414A8u;
            goto label_1414a8;
        }
    }
    ctx->pc = 0x141434u;
label_141434:
    // 0x141434: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x141434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141438: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14143c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141440: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x141444: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x141444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141448: 0xc103eaa  jal         func_40FAA8
    ctx->pc = 0x141448u;
    SET_GPR_U32(ctx, 31, 0x141450u);
    ctx->pc = 0x40FAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAA8u, 0x141448u, 0x141450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141450u;
label_141450:
    // 0x141450: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x141450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141458: 0x0  nop
    ctx->pc = 0x141458u;
    // NOP
    // 0x14145c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14145cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141460: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x141460u;
    {
        const bool branch_taken_0x141460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141460) {
            ctx->pc = 0x141474u;
            goto label_141474;
        }
    }
    ctx->pc = 0x141468u;
    // 0x141468: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x141468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14146c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14146cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x141470: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x141470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_141474:
    // 0x141474: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x141474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14147c: 0x0  nop
    ctx->pc = 0x14147cu;
    // NOP
    // 0x141480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x141480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141484: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414A4u;
            goto label_1414a4;
        }
    }
    ctx->pc = 0x14148Cu;
    // 0x14148c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x14148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141490: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x141494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x141494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141498: 0x0  nop
    ctx->pc = 0x141498u;
    // NOP
    // 0x14149c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14149cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1414a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1414a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1414a4:
    // 0x1414a4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1414a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1414a8:
    // 0x1414a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1414a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1414acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1414b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1414B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1414B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1414B8u;
    // 0x1414b8: 0x0  nop
    ctx->pc = 0x1414b8u;
    // NOP
    // 0x1414bc: 0x0  nop
    ctx->pc = 0x1414bcu;
    // NOP
    ctx->pc = 0x1414c0u;
}
