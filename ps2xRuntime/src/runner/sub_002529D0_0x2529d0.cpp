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

// Function: sub_002529D0
// Address: 0x2529d0 - 0x252a30
void sub_002529D0_0x2529d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002529D0_0x2529d0");
#endif

    switch (ctx->pc) {
        case 0x2529ecu: goto label_2529ec;
        case 0x2529fcu: goto label_2529fc;
        default: break;
    }

    ctx->pc = 0x2529d0u;

    // 0x2529d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2529d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2529d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2529d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2529d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2529d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2529dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2529dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2529e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2529e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2529e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2529E4u;
    {
        const bool branch_taken_0x2529e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2529e4) {
            ctx->pc = 0x252A08u;
            goto label_252a08;
        }
    }
    ctx->pc = 0x2529ECu;
label_2529ec:
    // 0x2529ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2529ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2529f0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2529f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2529f4: 0xc09489c  jal         func_252270
    ctx->pc = 0x2529F4u;
    SET_GPR_U32(ctx, 31, 0x2529FCu);
    ctx->pc = 0x252270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252270u, 0x2529F4u, 0x2529FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529FCu;
label_2529fc:
    // 0x2529fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2529fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252a00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x252a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x252a04: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x252a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_252a08:
    // 0x252a08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252a0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x252a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252a10: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x252A10u;
    {
        const bool branch_taken_0x252a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x252a10) {
            ctx->pc = 0x2529ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2529ec;
        }
    }
    ctx->pc = 0x252A18u;
    // 0x252a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252a1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252a20: 0x3e00008  jr          $ra
    ctx->pc = 0x252A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252A28u;
    // 0x252a28: 0x0  nop
    ctx->pc = 0x252a28u;
    // NOP
    // 0x252a2c: 0x0  nop
    ctx->pc = 0x252a2cu;
    // NOP
    ctx->pc = 0x252a30u;
}
