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

// Function: sub_00242570
// Address: 0x242570 - 0x2425a0
void sub_00242570_0x242570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242570_0x242570");
#endif

    ctx->pc = 0x242570u;

    // 0x242570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x242574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x242578: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x242578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24257c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242584: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x242584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x242588: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24258c: 0x3e00008  jr          $ra
    ctx->pc = 0x24258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24258Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242594u;
    // 0x242594: 0x0  nop
    ctx->pc = 0x242594u;
    // NOP
    // 0x242598: 0x0  nop
    ctx->pc = 0x242598u;
    // NOP
    // 0x24259c: 0x0  nop
    ctx->pc = 0x24259cu;
    // NOP
    ctx->pc = 0x2425a0u;
}
