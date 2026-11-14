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

// Function: sub_00478F20
// Address: 0x478f20 - 0x478f60
void sub_00478F20_0x478f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478F20_0x478f20");
#endif

    ctx->pc = 0x478f20u;

    // 0x478f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x478f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x478f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x478f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x478f28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x478f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x478f2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478f30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x478f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x478f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478f38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x478f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x478f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x478f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x478f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x478f44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x478F44u;
    {
        const bool branch_taken_0x478f44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x478f44) {
            ctx->pc = 0x478F50u;
            goto label_478f50;
        }
    }
    ctx->pc = 0x478F4Cu;
    // 0x478f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x478f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478f50:
    // 0x478f50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x478f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x478f54: 0x3e00008  jr          $ra
    ctx->pc = 0x478F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478F5Cu;
    // 0x478f5c: 0x0  nop
    ctx->pc = 0x478f5cu;
    // NOP
    ctx->pc = 0x478f60u;
}
