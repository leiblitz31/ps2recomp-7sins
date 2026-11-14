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

// Function: sub_004566E0
// Address: 0x4566e0 - 0x456710
void sub_004566E0_0x4566e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004566E0_0x4566e0");
#endif

    switch (ctx->pc) {
        case 0x4566fcu: goto label_4566fc;
        default: break;
    }

    ctx->pc = 0x4566e0u;

    // 0x4566e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4566e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4566e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4566e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4566e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4566e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4566ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4566ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4566f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4566f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4566f4: 0xc113610  jal         func_44D840
    ctx->pc = 0x4566F4u;
    SET_GPR_U32(ctx, 31, 0x4566FCu);
    ctx->pc = 0x44D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D840u, 0x4566F4u, 0x4566FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4566FCu;
label_4566fc:
    // 0x4566fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4566fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456700: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x456700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x456704: 0x3e00008  jr          $ra
    ctx->pc = 0x456704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45670Cu;
    // 0x45670c: 0x0  nop
    ctx->pc = 0x45670cu;
    // NOP
    ctx->pc = 0x456710u;
}
