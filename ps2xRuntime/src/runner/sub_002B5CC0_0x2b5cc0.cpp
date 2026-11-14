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

// Function: sub_002B5CC0
// Address: 0x2b5cc0 - 0x2b5d10
void sub_002B5CC0_0x2b5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5CC0_0x2b5cc0");
#endif

    ctx->pc = 0x2b5cc0u;

    // 0x2b5cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5cc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b5cc8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2b5cc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b5ccc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b5cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5cd0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2b5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cd4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b5cd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5cd8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5CD8u;
    {
        const bool branch_taken_0x2b5cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5cd8) {
            ctx->pc = 0x2B5CF4u;
            goto label_2b5cf4;
        }
    }
    ctx->pc = 0x2B5CE0u;
    // 0x2b5ce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5ce4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5ce8: 0xa064002e  sb          $a0, 0x2E($v1)
    ctx->pc = 0x2b5ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5cec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5CECu;
    {
        const bool branch_taken_0x2b5cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cec) {
            ctx->pc = 0x2B5CFCu;
            goto label_2b5cfc;
        }
    }
    ctx->pc = 0x2B5CF4u;
label_2b5cf4:
    // 0x2b5cf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cf8: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x2b5cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
label_2b5cfc:
    // 0x2b5cfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5d00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D08u;
    // 0x2b5d08: 0x0  nop
    ctx->pc = 0x2b5d08u;
    // NOP
    // 0x2b5d0c: 0x0  nop
    ctx->pc = 0x2b5d0cu;
    // NOP
    ctx->pc = 0x2b5d10u;
}
