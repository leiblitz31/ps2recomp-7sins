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

// Function: sub_00180EA0
// Address: 0x180ea0 - 0x180ef0
void sub_00180EA0_0x180ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180EA0_0x180ea0");
#endif

    switch (ctx->pc) {
        case 0x180eb8u: goto label_180eb8;
        default: break;
    }

    ctx->pc = 0x180ea0u;

    // 0x180ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180ea4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x180ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x180ea8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x180ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x180eac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x180eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x180eb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180EB0u;
    {
        const bool branch_taken_0x180eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180eb0) {
            ctx->pc = 0x180ED4u;
            goto label_180ed4;
        }
    }
    ctx->pc = 0x180EB8u;
label_180eb8:
    // 0x180eb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x180eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180ebc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ec0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ec4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x180ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x180ec8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x180ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ecc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x180eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x180ed0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x180ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_180ed4:
    // 0x180ed4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x180ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ed8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180edc: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x180EDCu;
    {
        const bool branch_taken_0x180edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x180edc) {
            ctx->pc = 0x180EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180eb8;
        }
    }
    ctx->pc = 0x180EE4u;
    // 0x180ee4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x180ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x180EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EF0u;
}
