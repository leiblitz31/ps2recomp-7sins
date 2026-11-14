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

// Function: sub_002589E0
// Address: 0x2589e0 - 0x258a20
void sub_002589E0_0x2589e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002589E0_0x2589e0");
#endif

    switch (ctx->pc) {
        case 0x258a04u: goto label_258a04;
        default: break;
    }

    ctx->pc = 0x2589e0u;

    // 0x2589e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2589e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2589e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2589e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2589e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2589e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2589ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2589ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2589f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2589f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2589f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2589f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2589f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2589f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2589fc: 0xc096288  jal         func_258A20
    ctx->pc = 0x2589FCu;
    SET_GPR_U32(ctx, 31, 0x258A04u);
    ctx->pc = 0x258A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A20u, 0x2589FCu, 0x258A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A04u;
label_258a04:
    // 0x258a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258a08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x258A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A14u;
    // 0x258a14: 0x0  nop
    ctx->pc = 0x258a14u;
    // NOP
    // 0x258a18: 0x0  nop
    ctx->pc = 0x258a18u;
    // NOP
    // 0x258a1c: 0x0  nop
    ctx->pc = 0x258a1cu;
    // NOP
    ctx->pc = 0x258a20u;
}
