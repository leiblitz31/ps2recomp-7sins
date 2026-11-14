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

// Function: sub_002527E0
// Address: 0x2527e0 - 0x252830
void sub_002527E0_0x2527e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002527E0_0x2527e0");
#endif

    ctx->pc = 0x2527e0u;

    // 0x2527e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2527e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2527e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2527e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2527e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2527e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2527ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2527ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2527f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2527f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2527f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2527f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2527f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2527f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2527fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2527fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x252800: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252804: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x252804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252808: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x252808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25280c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252810: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252814: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x252814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x252818: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25281c: 0x3e00008  jr          $ra
    ctx->pc = 0x25281Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25281Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252824u;
    // 0x252824: 0x0  nop
    ctx->pc = 0x252824u;
    // NOP
    // 0x252828: 0x0  nop
    ctx->pc = 0x252828u;
    // NOP
    // 0x25282c: 0x0  nop
    ctx->pc = 0x25282cu;
    // NOP
    ctx->pc = 0x252830u;
}
