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

// Function: sub_00126C30
// Address: 0x126c30 - 0x126c60
void sub_00126C30_0x126c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126C30_0x126c30");
#endif

    switch (ctx->pc) {
        case 0x126c4cu: goto label_126c4c;
        default: break;
    }

    ctx->pc = 0x126c30u;

    // 0x126c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x126c3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126c40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126c44: 0xc08dd78  jal         func_2375E0
    ctx->pc = 0x126C44u;
    SET_GPR_U32(ctx, 31, 0x126C4Cu);
    ctx->pc = 0x2375E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2375E0u, 0x126C44u, 0x126C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C4Cu;
label_126c4c:
    // 0x126c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x126c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x126c54: 0x3e00008  jr          $ra
    ctx->pc = 0x126C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C5Cu;
    // 0x126c5c: 0x0  nop
    ctx->pc = 0x126c5cu;
    // NOP
    ctx->pc = 0x126c60u;
}
