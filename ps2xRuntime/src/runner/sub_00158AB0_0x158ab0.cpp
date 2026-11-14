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

// Function: sub_00158AB0
// Address: 0x158ab0 - 0x158ae0
void sub_00158AB0_0x158ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158AB0_0x158ab0");
#endif

    ctx->pc = 0x158ab0u;

    // 0x158ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158ab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x158ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x158ab8: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x158ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x158abc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x158abcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ac0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ac4: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x158ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x158ac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158acc: 0x3e00008  jr          $ra
    ctx->pc = 0x158ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158AD4u;
    // 0x158ad4: 0x0  nop
    ctx->pc = 0x158ad4u;
    // NOP
    // 0x158ad8: 0x0  nop
    ctx->pc = 0x158ad8u;
    // NOP
    // 0x158adc: 0x0  nop
    ctx->pc = 0x158adcu;
    // NOP
    ctx->pc = 0x158ae0u;
}
