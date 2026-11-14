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

// Function: sub_0045E620
// Address: 0x45e620 - 0x45e660
void sub_0045E620_0x45e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E620_0x45e620");
#endif

    ctx->pc = 0x45e620u;

    // 0x45e620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45e624: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45e624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45e628: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e62c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x45E62Cu;
    {
        const bool branch_taken_0x45e62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e62c) {
            ctx->pc = 0x45E650u;
            goto label_45e650;
        }
    }
    ctx->pc = 0x45E634u;
    // 0x45e634: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e638: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45e638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45e63c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x45e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x45e640: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e644: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x45e644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x45e648: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e64c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x45e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_45e650:
    // 0x45e650: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45e654: 0x3e00008  jr          $ra
    ctx->pc = 0x45E654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E65Cu;
    // 0x45e65c: 0x0  nop
    ctx->pc = 0x45e65cu;
    // NOP
    ctx->pc = 0x45e660u;
}
