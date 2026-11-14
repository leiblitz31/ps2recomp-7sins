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

// Function: sub_004914A0
// Address: 0x4914a0 - 0x4914e0
void sub_004914A0_0x4914a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004914A0_0x4914a0");
#endif

    ctx->pc = 0x4914a0u;

    // 0x4914a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4914a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4914a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4914a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4914a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4914a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4914acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4914b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4914b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4914b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4914b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4914b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4914b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4914bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4914c0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x4914c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4914c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4914C4u;
    {
        const bool branch_taken_0x4914c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4914c4) {
            ctx->pc = 0x4914D4u;
            goto label_4914d4;
        }
    }
    ctx->pc = 0x4914CCu;
    // 0x4914cc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4914d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4914d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4914d4:
    // 0x4914d4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4914d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4914d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4914D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4914D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4914E0u;
}
