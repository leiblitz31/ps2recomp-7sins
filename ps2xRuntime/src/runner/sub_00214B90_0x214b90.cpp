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

// Function: sub_00214B90
// Address: 0x214b90 - 0x214bc0
void sub_00214B90_0x214b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B90_0x214b90");
#endif

    ctx->pc = 0x214b90u;

    // 0x214b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x214b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x214b98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x214b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x214b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ba4: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x214ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x214ba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214bac: 0x3e00008  jr          $ra
    ctx->pc = 0x214BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BB4u;
    // 0x214bb4: 0x0  nop
    ctx->pc = 0x214bb4u;
    // NOP
    // 0x214bb8: 0x0  nop
    ctx->pc = 0x214bb8u;
    // NOP
    // 0x214bbc: 0x0  nop
    ctx->pc = 0x214bbcu;
    // NOP
    ctx->pc = 0x214bc0u;
}
