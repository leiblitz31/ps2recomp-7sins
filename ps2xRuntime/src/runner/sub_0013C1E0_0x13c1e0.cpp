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

// Function: sub_0013C1E0
// Address: 0x13c1e0 - 0x13c230
void sub_0013C1E0_0x13c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C1E0_0x13c1e0");
#endif

    ctx->pc = 0x13c1e0u;

    // 0x13c1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c1e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13c1e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13c1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c1f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c1f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c1fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c200: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c204: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13c204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13c208: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C208u;
    {
        const bool branch_taken_0x13c208 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c208) {
            ctx->pc = 0x13C218u;
            goto label_13c218;
        }
    }
    ctx->pc = 0x13C210u;
    // 0x13c210: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13c214: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13c218:
    // 0x13c218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C224u;
    // 0x13c224: 0x0  nop
    ctx->pc = 0x13c224u;
    // NOP
    // 0x13c228: 0x0  nop
    ctx->pc = 0x13c228u;
    // NOP
    // 0x13c22c: 0x0  nop
    ctx->pc = 0x13c22cu;
    // NOP
    ctx->pc = 0x13c230u;
}
