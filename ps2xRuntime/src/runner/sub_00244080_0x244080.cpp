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

// Function: sub_00244080
// Address: 0x244080 - 0x2440b0
void sub_00244080_0x244080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244080_0x244080");
#endif

    ctx->pc = 0x244080u;

    // 0x244080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244084: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244088: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x244088u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x24408c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x24408cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244090: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244094: 0xa0640034  sb          $a0, 0x34($v1)
    ctx->pc = 0x244094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 4));
    // 0x244098: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24409c: 0x3e00008  jr          $ra
    ctx->pc = 0x24409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24409Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2440A4u;
    // 0x2440a4: 0x0  nop
    ctx->pc = 0x2440a4u;
    // NOP
    // 0x2440a8: 0x0  nop
    ctx->pc = 0x2440a8u;
    // NOP
    // 0x2440ac: 0x0  nop
    ctx->pc = 0x2440acu;
    // NOP
    ctx->pc = 0x2440b0u;
}
