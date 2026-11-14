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

// Function: sub_001509E0
// Address: 0x1509e0 - 0x150a20
void sub_001509E0_0x1509e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001509E0_0x1509e0");
#endif

    switch (ctx->pc) {
        case 0x1509fcu: goto label_1509fc;
        default: break;
    }

    ctx->pc = 0x1509e0u;

    // 0x1509e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1509e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1509e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1509e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1509e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1509ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1509f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1509f4: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x1509F4u;
    SET_GPR_U32(ctx, 31, 0x1509FCu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x1509F4u, 0x1509FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509FCu;
label_1509fc:
    // 0x1509fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1509fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150a00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x150a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x150a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150a0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150a10: 0x3e00008  jr          $ra
    ctx->pc = 0x150A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150A18u;
    // 0x150a18: 0x0  nop
    ctx->pc = 0x150a18u;
    // NOP
    // 0x150a1c: 0x0  nop
    ctx->pc = 0x150a1cu;
    // NOP
    ctx->pc = 0x150a20u;
}
