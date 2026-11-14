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

// Function: sub_00248530
// Address: 0x248530 - 0x248560
void sub_00248530_0x248530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248530_0x248530");
#endif

    switch (ctx->pc) {
        case 0x248548u: goto label_248548;
        default: break;
    }

    ctx->pc = 0x248530u;

    // 0x248530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24853c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24853cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248540: 0xc091e20  jal         func_247880
    ctx->pc = 0x248540u;
    SET_GPR_U32(ctx, 31, 0x248548u);
    ctx->pc = 0x247880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247880u, 0x248540u, 0x248548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248548u;
label_248548:
    // 0x248548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24854c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24854cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x248550: 0x3e00008  jr          $ra
    ctx->pc = 0x248550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248558u;
    // 0x248558: 0x0  nop
    ctx->pc = 0x248558u;
    // NOP
    // 0x24855c: 0x0  nop
    ctx->pc = 0x24855cu;
    // NOP
    ctx->pc = 0x248560u;
}
