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

// Function: sub_004912D0
// Address: 0x4912d0 - 0x491320
void sub_004912D0_0x4912d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004912D0_0x4912d0");
#endif

    ctx->pc = 0x4912d0u;

    // 0x4912d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4912d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4912d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4912d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4912d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4912d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4912dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4912dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x4912e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x4912e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x4912e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4912e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4912e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4912e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4912ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4912ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4912f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4912f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4912f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4912f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4912f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4912f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4912fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4912fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491300: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x491300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491304: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x491304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x491308: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x491308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x49130c: 0x3e00008  jr          $ra
    ctx->pc = 0x49130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49130Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491314u;
    // 0x491314: 0x0  nop
    ctx->pc = 0x491314u;
    // NOP
    // 0x491318: 0x0  nop
    ctx->pc = 0x491318u;
    // NOP
    // 0x49131c: 0x0  nop
    ctx->pc = 0x49131cu;
    // NOP
    ctx->pc = 0x491320u;
}
