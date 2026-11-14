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

// Function: sub_00194FC0
// Address: 0x194fc0 - 0x194ff0
void sub_00194FC0_0x194fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194FC0_0x194fc0");
#endif

    switch (ctx->pc) {
        case 0x194fdcu: goto label_194fdc;
        default: break;
    }

    ctx->pc = 0x194fc0u;

    // 0x194fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194fc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194fcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194fd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194fd4: 0xc0670bc  jal         func_19C2F0
    ctx->pc = 0x194FD4u;
    SET_GPR_U32(ctx, 31, 0x194FDCu);
    ctx->pc = 0x19C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C2F0u, 0x194FD4u, 0x194FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FDCu;
label_194fdc:
    // 0x194fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194fe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x194fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x194fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x194FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194FECu;
    // 0x194fec: 0x0  nop
    ctx->pc = 0x194fecu;
    // NOP
    ctx->pc = 0x194ff0u;
}
