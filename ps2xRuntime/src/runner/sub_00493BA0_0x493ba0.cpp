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

// Function: sub_00493BA0
// Address: 0x493ba0 - 0x493bf0
void sub_00493BA0_0x493ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493BA0_0x493ba0");
#endif

    ctx->pc = 0x493ba0u;

    // 0x493ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x493ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x493ba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x493ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x493ba8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x493ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x493bac: 0x8f83c104  lw          $v1, -0x3EFC($gp)
    ctx->pc = 0x493bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951172)));
    // 0x493bb0: 0x8f82c108  lw          $v0, -0x3EF8($gp)
    ctx->pc = 0x493bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951176)));
    // 0x493bb4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x493BB4u;
    {
        const bool branch_taken_0x493bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493bb4) {
            ctx->pc = 0x493BD4u;
            goto label_493bd4;
        }
    }
    ctx->pc = 0x493BBCu;
    // 0x493bbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x493bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493bc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493bc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x493bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x493bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x493BCCu;
    {
        const bool branch_taken_0x493bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493bcc) {
            ctx->pc = 0x493BE4u;
            goto label_493be4;
        }
    }
    ctx->pc = 0x493BD4u;
label_493bd4:
    // 0x493bd4: 0x8f82c104  lw          $v0, -0x3EFC($gp)
    ctx->pc = 0x493bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951172)));
    // 0x493bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x493bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x493bdc: 0xaf82c104  sw          $v0, -0x3EFC($gp)
    ctx->pc = 0x493bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951172), GPR_U32(ctx, 2));
    // 0x493be0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x493be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_493be4:
    // 0x493be4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x493be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x493be8: 0x3e00008  jr          $ra
    ctx->pc = 0x493BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493BF0u;
}
