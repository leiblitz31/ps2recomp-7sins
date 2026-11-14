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

// Function: sub_002B80E0
// Address: 0x2b80e0 - 0x2b8110
void sub_002B80E0_0x2b80e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B80E0_0x2b80e0");
#endif

    ctx->pc = 0x2b80e0u;

    // 0x2b80e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b80e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b80e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2b80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2b80ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b80f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b80f4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x2b80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x2b80f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b80f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b80fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B80FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B80FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8104u;
    // 0x2b8104: 0x0  nop
    ctx->pc = 0x2b8104u;
    // NOP
    // 0x2b8108: 0x0  nop
    ctx->pc = 0x2b8108u;
    // NOP
    // 0x2b810c: 0x0  nop
    ctx->pc = 0x2b810cu;
    // NOP
    ctx->pc = 0x2b8110u;
}
