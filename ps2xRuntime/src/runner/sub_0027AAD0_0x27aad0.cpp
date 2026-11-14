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

// Function: sub_0027AAD0
// Address: 0x27aad0 - 0x27ab20
void sub_0027AAD0_0x27aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AAD0_0x27aad0");
#endif

    ctx->pc = 0x27aad0u;

    // 0x27aad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27aad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27aad8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x27aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27aadc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x27aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x27aae0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x27aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x27aae4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aae8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aaec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27aaf0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aaf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aaf8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x27aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x27aafc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ab00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab04: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x27ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x27ab08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ab0c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB14u;
    // 0x27ab14: 0x0  nop
    ctx->pc = 0x27ab14u;
    // NOP
    // 0x27ab18: 0x0  nop
    ctx->pc = 0x27ab18u;
    // NOP
    // 0x27ab1c: 0x0  nop
    ctx->pc = 0x27ab1cu;
    // NOP
    ctx->pc = 0x27ab20u;
}
