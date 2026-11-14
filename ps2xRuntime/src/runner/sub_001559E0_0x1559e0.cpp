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

// Function: sub_001559E0
// Address: 0x1559e0 - 0x155a20
void sub_001559E0_0x1559e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001559E0_0x1559e0");
#endif

    switch (ctx->pc) {
        case 0x1559fcu: goto label_1559fc;
        default: break;
    }

    ctx->pc = 0x1559e0u;

    // 0x1559e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1559e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1559e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1559e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1559e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1559ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1559f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1559f4: 0xc042734  jal         func_109CD0
    ctx->pc = 0x1559F4u;
    SET_GPR_U32(ctx, 31, 0x1559FCu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x1559F4u, 0x1559FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559FCu;
label_1559fc:
    // 0x1559fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155a00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x155a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x155a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155a0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x155a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155a10: 0x3e00008  jr          $ra
    ctx->pc = 0x155A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A18u;
    // 0x155a18: 0x0  nop
    ctx->pc = 0x155a18u;
    // NOP
    // 0x155a1c: 0x0  nop
    ctx->pc = 0x155a1cu;
    // NOP
    ctx->pc = 0x155a20u;
}
