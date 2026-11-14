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

// Function: sub_0028EBD0
// Address: 0x28ebd0 - 0x28ec00
void sub_0028EBD0_0x28ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EBD0_0x28ebd0");
#endif

    ctx->pc = 0x28ebd0u;

    // 0x28ebd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ebd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28ebd8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28ebdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ebe0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebe4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28ebe8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ebec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ebecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBF8u;
    // 0x28ebf8: 0x0  nop
    ctx->pc = 0x28ebf8u;
    // NOP
    // 0x28ebfc: 0x0  nop
    ctx->pc = 0x28ebfcu;
    // NOP
    ctx->pc = 0x28ec00u;
}
