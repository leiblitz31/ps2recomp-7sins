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

// Function: sub_00131EC0
// Address: 0x131ec0 - 0x131f10
void sub_00131EC0_0x131ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131EC0_0x131ec0");
#endif

    ctx->pc = 0x131ec0u;

    // 0x131ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131ec4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x131ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x131ec8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x131ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x131ecc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x131eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x131ed0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x131ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x131ed4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x131ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131ed8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131edc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x131edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x131ee0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131ee4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ee8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x131ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x131eec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131ef0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131ef4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x131ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x131ef8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131efc: 0x3e00008  jr          $ra
    ctx->pc = 0x131EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131F04u;
    // 0x131f04: 0x0  nop
    ctx->pc = 0x131f04u;
    // NOP
    // 0x131f08: 0x0  nop
    ctx->pc = 0x131f08u;
    // NOP
    // 0x131f0c: 0x0  nop
    ctx->pc = 0x131f0cu;
    // NOP
    ctx->pc = 0x131f10u;
}
