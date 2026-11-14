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

// Function: sub_0025F230
// Address: 0x25f230 - 0x25f270
void sub_0025F230_0x25f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F230_0x25f230");
#endif

    ctx->pc = 0x25f230u;

    // 0x25f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25f234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25f238: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f23c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25f240: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f244: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25f248: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25f248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f24c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25f250: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x25f250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25f254: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F254u;
    {
        const bool branch_taken_0x25f254 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25f254) {
            ctx->pc = 0x25F264u;
            goto label_25f264;
        }
    }
    ctx->pc = 0x25F25Cu;
    // 0x25f25c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25f260: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x25f260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_25f264:
    // 0x25f264: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25f264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25f268: 0x3e00008  jr          $ra
    ctx->pc = 0x25F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F270u;
}
