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

// Function: sub_00488B00
// Address: 0x488b00 - 0x488b30
void sub_00488B00_0x488b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488B00_0x488b00");
#endif

    ctx->pc = 0x488b00u;

    // 0x488b00: 0x8f82c0c4  lw          $v0, -0x3F3C($gp)
    ctx->pc = 0x488b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951108)));
    // 0x488b04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x488B04u;
    {
        const bool branch_taken_0x488b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b04) {
            ctx->pc = 0x488B1Cu;
            goto label_488b1c;
        }
    }
    ctx->pc = 0x488B0Cu;
    // 0x488b0c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488b10: 0x24427c30  addiu       $v0, $v0, 0x7C30
    ctx->pc = 0x488b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31792));
    // 0x488b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x488B14u;
    {
        const bool branch_taken_0x488b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488b14) {
            ctx->pc = 0x488B20u;
            goto label_488b20;
        }
    }
    ctx->pc = 0x488B1Cu;
label_488b1c:
    // 0x488b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x488b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488b20:
    // 0x488b20: 0x3e00008  jr          $ra
    ctx->pc = 0x488B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488B28u;
    // 0x488b28: 0x0  nop
    ctx->pc = 0x488b28u;
    // NOP
    // 0x488b2c: 0x0  nop
    ctx->pc = 0x488b2cu;
    // NOP
    ctx->pc = 0x488b30u;
}
