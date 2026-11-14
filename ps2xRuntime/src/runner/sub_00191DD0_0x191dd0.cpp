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

// Function: sub_00191DD0
// Address: 0x191dd0 - 0x191e10
void sub_00191DD0_0x191dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191DD0_0x191dd0");
#endif

    switch (ctx->pc) {
        case 0x191df4u: goto label_191df4;
        default: break;
    }

    ctx->pc = 0x191dd0u;

    // 0x191dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191ddc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x191ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x191de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191de4: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x191de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x191de8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191dec: 0xc04d354  jal         func_134D50
    ctx->pc = 0x191DECu;
    SET_GPR_U32(ctx, 31, 0x191DF4u);
    ctx->pc = 0x134D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D50u, 0x191DECu, 0x191DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DF4u;
label_191df4:
    // 0x191df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191df8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x191DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191E04u;
    // 0x191e04: 0x0  nop
    ctx->pc = 0x191e04u;
    // NOP
    // 0x191e08: 0x0  nop
    ctx->pc = 0x191e08u;
    // NOP
    // 0x191e0c: 0x0  nop
    ctx->pc = 0x191e0cu;
    // NOP
    ctx->pc = 0x191e10u;
}
