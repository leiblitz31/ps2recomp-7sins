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

// Function: sub_00109710
// Address: 0x109710 - 0x109750
void sub_00109710_0x109710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109710_0x109710");
#endif

    ctx->pc = 0x109710u;

    // 0x109710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109714: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x109714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x109718: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10971c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109720: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109728: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x109728u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10972c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109730: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x109730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x109734: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109734u;
    {
        const bool branch_taken_0x109734 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x109734) {
            ctx->pc = 0x109744u;
            goto label_109744;
        }
    }
    ctx->pc = 0x10973Cu;
    // 0x10973c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x10973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x109740: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_109744:
    // 0x109744: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x109744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x109748: 0x3e00008  jr          $ra
    ctx->pc = 0x109748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109750u;
}
